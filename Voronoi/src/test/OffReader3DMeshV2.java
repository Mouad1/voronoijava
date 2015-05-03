package test;
// Polygones quelconques, presence de commentaires, aretes 
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;
import java.util.TreeSet;

import utils.Cylinder;
import utils.FacePolygonale;
import utils.FaceTriangulaire;
import utils.Transfo;
import utils.Vertex;
import utils.Pos3D; 

public class OffReader3DMeshV2 {
	
	private Random generator=new Random(); 
	private  ArrayList<Vertex> lesCentresDesFaces=new ArrayList<Vertex>(); 
	private  ArrayList<Vertex> lesNormales=new ArrayList<Vertex>(); 
	public int nbVertices,nbFaces;
	private String catena;
	{
		Locale.setDefault(Locale.US);
	}
	
	protected int nn=0; 
	public  int  maxsize=55; 
	public  ArrayList<Vertex> trajet(ArrayList<Vertex> deja,ArrayList<Vertex> reste,Vertex v){
		nn++;
		if(reste.isEmpty()){
			System.out.println("Houra !"); 
			return deja; 
		}
		Iterator<Vertex> it=v.getIterator(); 
		while(it.hasNext()){
			Vertex q=it.next();
			if(!deja.contains(q)){
				ArrayList<Vertex> dejax=new ArrayList<Vertex>(deja);
				ArrayList<Vertex> restex=new ArrayList<Vertex>(reste);
				dejax.add(v);
				restex.remove(q); 
				ArrayList<Vertex> presu=trajet(dejax,restex,q); 
				if(nn>10e6) return presu; 
			}
		}
			if(deja.size()>maxsize){
				maxsize=deja.size(); 
				System.out.println("\t\t\t\t\t\t\t\t nouvelle taille max "+deja.size()+"("+nn+")"+nbVertices);
				
				for(int i=0;i<deja.size();i++){
					
					System.out.println(deja.get(i)+",diamsphere,");
				}
				
	 	
			}
			return deja; 
	}
	
	
	private ArrayList<Vertex> vertices=new ArrayList<Vertex>();
	private ArrayList<Vertex> trueVertices=new ArrayList<Vertex>();
	private ArrayList<FaceTriangulaire> lesFacesTriangulaires=new ArrayList<FaceTriangulaire>(); 
	private ArrayList<FacePolygonale> lesFacesPolygonales=new ArrayList<FacePolygonale>();

	private PrintStream output; 
	

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}
	//private PrintStream output; 
	
	public void mix(){
		System.out.println("entree dans mix "+vertices.size()+" "+nbVertices); 
		ArrayList<Vertex> verpro=new ArrayList<Vertex>();
		ArrayList<Integer> sac=new ArrayList<Integer>();
		for(int i=0;i<nbVertices;i++)
			sac.add(i); 
		System.out.println("***"+sac.size());
		for(int i=0;i<nbVertices;i++){
			int gene=generator.nextInt(sac.size()); 
			verpro.add(vertices.get(gene));
			sac.remove(gene);
		}
		System.out.println("--->"+sac.size()+" "+verpro.size());
		vertices=verpro;
	}
	
	
	public void afficheFichierTexte(String nomFichierSource,boolean veritable) {
			//this.catena="C:/Documents and Settings/moi/workspace/Voronoi/src/test/"+nomFichierSource+".off";
		//this.catena="/tmp/"+nomFichierSource+".off"; 
		this.catena="./src/test/"+nomFichierSource+".off"; 
          File source = new File(catena);
          try {
        	// output=new PrintStream("../../../../pearls/scene/geometry/polyhedra/archimedean/archi.txt");
        	//  output=new PrintStream("../pearls/scene/geometry/playingcards/archimedean/"+nomFichierSource+".inc");
        	  output=new PrintStream(nomFichierSource+".incNEW");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  while(ligne.charAt(0)=='#') ligne=in.readLine();
                  //ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  
                  nbFaces=rl.nextInt();
                  System.out.println(nbVertices+" "+nbFaces);
                 
                  /*
                  System.out.println("mesh2{\n");
                  System.out.println("vertex_vectors{\n");
                  System.out.println(nbVertices+",\n");
                  */
                  // lire les aretes
                  for(int i=0;i<nbVertices;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  Double x=rl.nextDouble(); 
                	  Double y=rl.nextDouble();
                	  Double z=rl.nextDouble();
                	  vertices.add(new Vertex(x,y,z)); 
                	  trueVertices.add(new Vertex(x,y,z));
                  }
                  
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  int dim=rl.nextInt(); 
                	  FacePolygonale faceEnCours=new FacePolygonale(dim);
                	  int coins[]=new int[dim];
                	  System.out.println("dimdamdom-------------------->"+dim);
                	  for(int j=0;j<dim;j++){
                		  coins[j]=rl.nextInt(); 
                	  }
                	  for(int toto=0;toto<dim;toto++)
                		  faceEnCours.add(vertices.get(coins[toto]),coins[toto]);
                	  faceEnCours.determineAxe();
                	  lesFacesPolygonales.add(faceEnCours);
                	  if(dim==3)                	
                	  lesFacesTriangulaires.add(new FaceTriangulaire(vertices.get(coins[0]),vertices.get(coins[1]),vertices.get(coins[2]),coins[0],coins[1],coins[2]));
                	  else // la face n'est pas un triangle
                	  {
                		  // calculer le milieu de l'ensemble des points c
                		  Vertex center=new Vertex(0,0,0);
                		  for(int j=0;j<dim;j++) center= Vertex.add(vertices.get(coins[j]),center);
                		  center=(Vertex) Vertex.mul(center,1.0/(dim+0.0)); 
                		  //vertices.add(center);
                		  // Construire les dim triangles  (vi,v(i+1),c)
                		  for(int j=0;j<dim;j++)
                			  lesFacesTriangulaires.add(new FaceTriangulaire(vertices.get(coins[j]),vertices.get(coins[(j+1)%dim]),center,coins[j],coins[(j+1)%dim],vertices.indexOf(center)));
                	  }
                	  // fixer les voisins
                	  for(int j=0;j<dim;j++) {
                		  //la suivante
                		  vertices.get(coins[j]).setNeighbour(vertices.get(coins[(j+1)%dim]));
                		  // la precedente
                		  vertices.get(coins[(j+1)%dim]).setNeighbour(vertices.get(coins[j]));
                		  
                	  }
                	  // Calculer les centres des faces (provisoire 05/2010)
                	 
                	  for(FaceTriangulaire f:lesFacesTriangulaires)
                		  lesCentresDesFaces.add(f.getCenter()); 
                	  
                  }
                
                	// On doit encore s'occuper des aretes
                  TreeSet<Double> lengthAretes=new TreeSet<Double>();
                  ArrayList<Cylinder> lesAretes=new ArrayList<Cylinder>();
                
                  ligne=in.readLine(); 
                  rl=new Scanner(ligne); 
                  while(true){
                	  int c0=rl.nextInt(); 
                	  int c1=rl.nextInt(); 
                	  lesAretes.add(new Cylinder(vertices.get(c0),vertices.get(c1),c0,c1));
                	  lengthAretes.add(roundDecimals(Pos3D.distance(vertices.get(c0), vertices.get(c1)))); 
                	  ligne=in.readLine();
                	  if(ligne==null) break;
                	  rl=new Scanner(ligne); 
                  }
                  double meilleur=lengthAretes.last(); 
                 
                
                  in.close();
                  // classement des surfaces
                  TreeSet<Double> ts=new TreeSet<Double>();
                  for(FaceTriangulaire f:lesFacesTriangulaires)
                	  ts.add(roundDecimals(f.surface())); 
                  
                  ArrayList<Double> provi=new ArrayList<Double>(ts); 
                  for(Double x:provi)
                	  System.out.println(x); 
                  //System.exit(0);
                  // traitement des surfaces (puis sortie du texte 'mesh'
                  System.out.println("#declare "+nomFichierSource+"=mesh2{\n");
                  System.out.println("vertex_vectors{\n");
                  System.out.println(vertices.size()+",");
                  output.println("#declare "+nomFichierSource+"=mesh2{\n");
                  output.println("vertex_vectors{\n");
                  output.println(vertices.size()+",");
                  
                  for(int i=0;i<vertices.size()-1;i++){
                	  System.out.println(vertices.get(i)+","); 
                	  output.println(vertices.get(i)+","); 
                  }
                  System.out.println(vertices.get(vertices.size()-1)+"\n }");
                  output.println(vertices.get(vertices.size()-1)+"\n }");
                  // les normales
                  // Calculer la normale en chaque vertex
                  double epsilon=1e-6; 
                  for(int i=0;i<vertices.size();i++){
                	  Vertex v=vertices.get(i); 
                	  // Pour un vertex, calculer sa normale
                	  Vertex n=new Vertex(0,0,0);
                	  for(FaceTriangulaire f:lesFacesTriangulaires){
                		  if(f.contains(v))
                			  if(Math.abs(Vertex.produitScalaire(n,f.normal()))>epsilon)
                			  n=Vertex.add(n,Vertex.mul(f.normal(),1)); 
                	  }
                	  lesNormales.add(i,Vertex.mul(n,1));
                	  
                  }// for v
                  
                  
                  System.out.println("normal_vectors{\n");
                  System.out.println(vertices.size()+",");
                  output.println("normal_vectors{\n");
                  output.println(vertices.size()+",");
                  for(int i=0;i<lesNormales.size()-1;i++){ 
                	  System.out.println(lesNormales.get(i)+","); 
                	  output.println(lesNormales.get(i)+","); 
                  }
                  System.out.println(lesNormales.get(lesNormales.size()-1)+"\n }");
                  output.println(lesNormales.get(lesNormales.size()-1)+"\n }");
                  
                  // les textures
                  System.out.println("texture_list{\n"+provi.size()+","); 
                
                  output.println("/* \n texture_list{\n"+provi.size()+","); 
                
                  for(int i=0;i<provi.size()-1;i++){
                	  System.out.println("texture{texture"+i+"},");
                	  output.println("texture{texture"+i+"},");
                  }
                
                // System.out.println("texture{texture"+(provi.size()-1)+"}\n }");
                 // System.out.println("face_indices{");
                  //System.out.println(lesFacesTriangulaires.size()+","); 
                  output.println("texture{texture"+(provi.size()-1)+"}\n }");
                  output.println("*/"); 
                  output.println("face_indices{");
                  output.println(lesFacesTriangulaires.size()+","); 
                  for(FaceTriangulaire f:lesFacesTriangulaires)
                	  if(lesFacesTriangulaires.indexOf(f)!=lesFacesTriangulaires.size()-1){
                	//	System.out.println(f+","+ provi.indexOf(roundDecimals(f.surface()))+",");
                  		output.println(f+",// ,"+ provi.indexOf(roundDecimals(f.surface()))+",");
                	  }
                	  else{
                		//  System.out.println(f+" "+provi.indexOf(roundDecimals(f.surface()))+"\n } \n }");
                		  output.println(f+" //"+provi.indexOf(roundDecimals(f.surface()))+"\n } \n }");
                	  }
                  
                  // Les aretes 
               //System.out.println("#declare aretes=union{\n");
               output.println("#declare aretes=union{\n");
               for(Cylinder c:lesAretes){
            	 //  System.out.println("object{"+c+"}"); 
            	   output.println("object{"+c+"}"); 
               }
               //System.out.println("}");
               output.println("}");
               // les sommets (pour masquer l'intersection des cylindres)
               System.out.println("#declare sommets=union{\n");
               output.println("#declare sommets=union{\n");
               for(int j=0;j<nbVertices;j++){
            	   Pos3D v=vertices.get(j);
            	 //  System.out.println("object{sphere{"+v+",diam1 }}");
            	   output.println("object{sphere{"+v+",diam1 }}");
               }
               //System.out.println("}");
               output.println("}");
               // Les transformations amenant un vecteur central vertical sur une arete
               ArrayList<Transfo> lesTransfos=new ArrayList<Transfo>();
               for(Cylinder c:lesAretes){
            	   //Ramener le vecteur en <0,0,0>
            	   Vertex mimi=Vertex.middle(c.getA(),c.getB()); 
            	   double taille=Pos3D.distance(c.getA(), c.getB());
            	   mimi=Vertex.mul(mimi,-1); 
            	   Cylinder cy=new Cylinder(Vertex.add(c.getA(),mimi),Vertex.add(c.getB(), mimi));
            	   // chaque arete a ete ramenee au centre (et centree !)
            	   // cy.getA() contient les x,y,z qui m'interessent
            	   double xx=cy.getA().getX();
            	   double yy= cy.getA().getY();
            	   double zz=cy.getA().getZ();
            	   double alpha=Math.atan2(zz, xx)*180/Math.PI; 
            	   double newX=Math.sqrt(xx*xx+zz*zz);
            	   double beta=Math.atan2(newX,yy)*180/Math.PI;
            	   
            	  lesTransfos.add(new Transfo(alpha,beta,mimi,taille/meilleur));
            	   
               }
               //System.out.println("#declare maxIndices="+lesTransfos.size()+";");
               output.println("#declare maxIndices="+lesTransfos.size()+";");
               //System.out.println("#declare trans=array["+lesAretes.size()+"];");
               output.println("#declare trans=array["+lesAretes.size()+"];");
               int i=0;
               for(Transfo t:lesTransfos){
            	   System.out.println("#declare trans["+i+"]="+t+";");
            	   output.println("#declare trans["+i+"]="+t+";");
            	   i++;
               }   
               //System.out.println(lesFacesPolygonales.size()); 
               // transformations relatives aux faces
               ArrayList<Transfo> lesTransfosFaces=new ArrayList<Transfo>();
               for(FacePolygonale fp:lesFacesPolygonales){
            	   Vertex ca=fp.getExtrem1(); 
            	   Vertex cb=fp.getExtrem2();
            	   
            	   Vertex mimi=Vertex.middle(ca,cb); 
            	   mimi=Vertex.mul(mimi,-1); 
            	   Cylinder cy=new Cylinder(Vertex.add(ca,mimi),Vertex.add(cb, mimi));
            	   // chaque arete a ete ramenee au centre (et centree !)
            	   // cy.getA() contient les x,y,z qui m'interessent
            	   double xx=cy.getA().getX();
            	   double yy= cy.getA().getY();
            	   double zz=cy.getA().getZ();
            	   double alpha=Math.atan2(zz, xx)*180/Math.PI; 
            	   double newX=Math.sqrt(xx*xx+zz*zz);
            	   double beta=Math.atan2(newX,yy)*180/Math.PI;
            	   lesTransfosFaces.add(new Transfo(alpha,beta,mimi,1));
            	  
            	   
               }// for fp
               System.out.println("#declare maxFaces="+lesTransfosFaces.size()+";");
               output.println("#declare maxFaces="+lesTransfosFaces.size()+";");
               System.out.println("#declare transface=array["+lesTransfosFaces.size()+"];");
               output.println("#declare transface=array["+lesTransfosFaces.size()+"];");
               int ui=0;
               for(Transfo t:lesTransfosFaces){
            	   System.out.println("#declare transface["+ui+"]="+t+";");
            	   output.println("#declare transface["+ui+"]="+t+";");
            	   ui++;
               }   
               if(veritable){
               System.out.println("#declare nbVertices="+trueVertices.size()+";"); 
               output.println("#declare nbVertices="+trueVertices.size()+";");
               }
               else{
            	   System.out.println("#declare nbVertices="+vertices.size()+";"); 
                   output.println("#declare nbVertices="+vertices.size()+";"); 
          }
               System.out.println("#declare lesVertices=array[nbVertices];"); 
               output.println("#declare lesVertices=array[nbVertices];"); 
               int ind=0; 
               if(veritable)
               for(Vertex v:trueVertices){
            	   System.out.println("#declare lesVertices["+ind+"]="+vertices.get(ind)+";"); 
            	   output.println("#declare lesVertices["+ind+"]="+vertices.get(ind)+";"); 
            	   ind++; 
               }
               else
            	   for(Vertex v:vertices){
                	   System.out.println("#declare lesVertices["+ind+"]="+vertices.get(ind)+";"); 
                	   output.println("#declare lesVertices["+ind+"]="+vertices.get(ind)+";"); 
                	   ind++; 
                   }  
             
               output.close(); 
             
               
                
          } catch (Exception e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          OffReader3DMeshV2 toto=new OffReader3DMeshV2(); 
         // true : seulement les aretesd initiales
          // false : aussi les centres des faces 



          toto.afficheFichierTexte("truncated_icosidodecahedron",true);




	  }
	
}
