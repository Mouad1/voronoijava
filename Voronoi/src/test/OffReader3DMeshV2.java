package test;
// Polygones quelconques, présence de commentaires, aretes 
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;
import java.util.TreeSet;

import utils.Cylinder;
import utils.Face;
import utils.Pos3D;

public class OffReader3DMeshV2 {
	
	private Random generator=new Random(); 


	public int nbVertices,nbFaces;
	{
		Locale.setDefault(Locale.US);
	}

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}
	//private PrintStream output; 
	
	  public void afficheFichierTexte(String nomFichierSource) {
          File source = new File(nomFichierSource);
          try {
        	 // output=new PrintStream("/tmp/voronoi.txt");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  while(ligne.charAt(0)=='#') ligne=in.readLine();
                  //ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  ArrayList<Pos3D> vertices=new ArrayList<Pos3D>(); 
                  nbFaces=rl.nextInt();
                  System.out.println(nbVertices+" "+nbFaces);
                  /*
                  System.out.println("mesh2{\n");
                  System.out.println("vertex_vectors{\n");
                  System.out.println(nbVertices+",\n");
                  */
                  // lire les coins
                  for(int i=0;i<nbVertices;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  Double x=rl.nextDouble(); 
                	  Double y=rl.nextDouble();
                	  Double z=rl.nextDouble();
                	  vertices.add(new Pos3D(x,y,z)); 
                	
                  }
                  ArrayList<Face> lesFaces=new ArrayList<Face>(); 
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  int dim=rl.nextInt(); 
                	  int coins[]=new int[dim];
                	  System.out.println("-->"+dim);
                	  for(int j=0;j<dim;j++){
                		  coins[j]=rl.nextInt(); 
                	  }
                	  if(dim==3)                	
                	  lesFaces.add(new Face(vertices.get(coins[0]),vertices.get(coins[1]),vertices.get(coins[2]),coins[0],coins[1],coins[2]));
                	  else // la face n'est pas un triangle
                	  {
                		  // calculer le milieu de l'ensemble des points c
                		  Pos3D center=new Pos3D(0,0,0);
                		  for(int j=0;j<dim;j++) center=Pos3D.add(vertices.get(coins[j]),center);
                		  center=Pos3D.mul(center,1.0/(dim+0.0)); 
                		  vertices.add(center);
                		  // Construire les dim triangles  (vi,v(i+1),c)
                		  for(int j=0;j<dim;j++)
                			  lesFaces.add(new Face(vertices.get(coins[j]),vertices.get(coins[(j+1)%dim]),center,coins[j],coins[(j+1)%dim],vertices.indexOf(center)));
                	  }
                  }
                	// On doit encore s'occuper des aretes
                  ArrayList<Cylinder> lesAretes=new ArrayList<Cylinder>();
                
                  ligne=in.readLine(); 
                  rl=new Scanner(ligne); 
                  while(true){
                	  int c0=rl.nextInt(); 
                	  int c1=rl.nextInt(); 
                	  lesAretes.add(new Cylinder(vertices.get(c0),vertices.get(c1)));
                	  System.out.println("debug "+c0+" "+c1);
                	  System.out.println("object{"+new Cylinder(vertices.get(c0),vertices.get(c1))+"}\n");
                	  ligne=in.readLine();
                	  if(ligne==null) break;
                	  rl=new Scanner(ligne); 
                  }
                
                
                  in.close();
                  // classement des surfaces
                  TreeSet<Double> ts=new TreeSet<Double>();
                  for(Face f:lesFaces)
                	  ts.add(roundDecimals(f.surface())); 
                  
                  ArrayList<Double> provi=new ArrayList<Double>(ts); 
                  for(Double x:provi)
                	  System.out.println(x); 
                  //System.exit(0);
                  // traitement des surfaces (puis sortie du texte 'mesh'
                  System.out.println("mesh2{\n");
                  System.out.println("vertex_vectors{\n");
                  System.out.println(vertices.size()+",");
                  for(int i=0;i<vertices.size()-1;i++)
                	  System.out.println(vertices.get(i)+","); 
                  System.out.println(vertices.get(vertices.size()-1)+"\n }");
                  // les textures
                  System.out.println("texture_list{\n"+provi.size()+","); 
                  for(int i=0;i<provi.size()-1;i++)
                	  System.out.println("texture{texture"+i+"},");
                  System.out.println("texture{texture"+(provi.size()-1)+"}\n }");
                  System.out.println("face_indices{");
                  System.out.println(lesFaces.size()+","); 
                  for(Face f:lesFaces)
                	  if(lesFaces.indexOf(f)!=lesFaces.size()-1)
                	  System.out.println(f+","+ provi.indexOf(roundDecimals(f.surface()))+",");
                	  else
                		  System.out.println(f+" "+provi.indexOf(roundDecimals(f.surface()))+"\n } \n }");
                  
                  
                  // Les aretes 
               System.out.println("#declare aretes=union{\n");
               for(Cylinder c:lesAretes)
            	   System.out.println("object{"+c+"}"); 
               System.out.println("}");
               // les sommets (pour masquer l'intersection des spheres)
               System.out.println("#declare sommets=union{\n");
               for(int j=0;j<nbVertices;j++){
            	   Pos3D v=vertices.get(j);
            	   System.out.println("object{sphere{"+v+",diam1 }}");
               }
               System.out.println("}");
               
              
                
          } catch (IOException e) {
                  e.printStackTrace();
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
         // new OffReader3DMeshV2().afficheFichierTexte("/tmp/pentagonal_hexecontahedron.off");
          new OffReader3DMeshV2().afficheFichierTexte("C:/Documents and Settings/moi/workspace/Voronoi/src/test/kite_hexecontahedron.off");
	  }

	
	
}
