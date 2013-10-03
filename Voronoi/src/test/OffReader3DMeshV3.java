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

public class OffReader3DMeshV3 {
	
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
		//this.catena="./src/test/"+nomFichierSource+".off"; 
		this.catena="C:/Users/decomite/Pictures/shapeways/lizardd.off"; 
          File source = new File(catena);
          try {
        	// output=new PrintStream("../../../../pearls/scene/geometry/polyhedra/archimedean/archi.txt");
        	//  output=new PrintStream("../pearls/scene/geometry/playingcards/archimedean/"+nomFichierSource+".inc");
        	  output=new PrintStream("lizardd.inc");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  System.out.println(ligne); 
                  while(ligne.charAt(0)=='#') ligne=in.readLine();
                  ligne=in.readLine();
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
                	  System.out.println(ligne); 
                	  Double x=rl.nextDouble(); 
                	  Double y=rl.nextDouble();
                	  Double z=rl.nextDouble();
                	  vertices.add(new Vertex(x,y,z)); 
                	 
                  }
                  
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  int dim=rl.nextInt(); 
                	
                	  int coins[]=new int[dim];
                	  System.out.println("dimdamdom-------------------->"+dim);
                	  for(int j=0;j<dim;j++){
                		  coins[j]=rl.nextInt(); 
                	  }
                	
                	  if(dim==3)                	
                	  lesFacesTriangulaires.add(new FaceTriangulaire(vertices.get(coins[0]),vertices.get(coins[1]),vertices.get(coins[2]),coins[0],coins[1],coins[2]));
                	
                	  
                  }
                
               
                
                  in.close();
                
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
                  
           
           
                  output.println("face_indices{");
                  output.println(lesFacesTriangulaires.size()+","); 
                  for(FaceTriangulaire f:lesFacesTriangulaires)
                	  if(lesFacesTriangulaires.indexOf(f)!=lesFacesTriangulaires.size()-1){
                		System.out.println(f+",");
                  		output.println(f+",");
                	  }
                	  else{
                		 System.out.println(f+"\n } \n }");
                		  output.println(f+"\n } \n }");
                	  }
                  
                
            
         
               output.close(); 
             
               
                
          } catch (Exception e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          OffReader3DMeshV3 toto=new OffReader3DMeshV3(); 
         // true : seulement les aretesd initiales
          // false : ausi les centres des faces 



          toto.afficheFichierTexte("dolphin",true);




	  }
	
}
