package test;
// on est sur que c'est des triangles
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;
import java.util.TreeSet;

import utils.Face;
import utils.Pos3D;

public class OffReader3DMesh {
	
	private Random generator=new Random(); 


	public int nbVertices,nbFaces;


	//private PrintStream output; 
	
	  public void afficheFichierTexte(String nomFichierSource) {
          File source = new File(nomFichierSource);
          try {
        	 // output=new PrintStream("/tmp/voronoi.txt");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  Pos3D vertices[]=new Pos3D[nbVertices]; 
                  nbFaces=rl.nextInt();
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
                	//  System.out.print("<"+x+","+y+","+z+">");
                	  vertices[i]=new Pos3D(x,y,z); 
                	 // if(i<nbVertices-1) System.out.print(",");
                	 // System.out.println("");
                  }
                  /*
                  System.out.println("}\n"); 
                  System.out.println("face_indices{\n");
                  System.out.println(nbFaces+",\n"); 
                  */
                  Face lesFaces[]=new Face[nbFaces]; 
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  int dim=rl.nextInt(); 
                	  int coins[]=new int[dim];
                	  for(int j=0;j<dim;j++){
                		  coins[j]=rl.nextInt(); 
                	  }
                	//  System.out.print("<"+coins[0]+","+coins[1]+","+coins[2]+">");
                	  lesFaces[i]=new Face(vertices[coins[0]],vertices[coins[1]],vertices[coins[2]],coins[0],coins[1],coins[2]);
                	  //if(i<nbFaces-1) System.out.print(",");
                	  //System.out.println("");
                	 	 
                		  }
                 
                //  System.out.println("}\n}");
                
                  in.close();
                  // classement des surfaces
                  TreeSet<Double> ts=new TreeSet<Double>();
                  for(int i=0;i<nbFaces;i++)
                	  ts.add(lesFaces[i].surface()); 
                  
                  ArrayList<Double> provi=new ArrayList<Double>(ts); 
                  for(Double x:provi)
                	  System.out.println(x); 
                  //System.exit(0);
                  // traitement des surfaces (puis sortie du texte 'mesh'
                  System.out.println("mesh2{\n");
                  System.out.println("vertex_vectors{\n");
                  System.out.println(nbVertices+",");
                  for(int i=0;i<nbVertices-1;i++)
                	  System.out.println(vertices[i]+","); 
                  System.out.println(vertices[nbVertices-1]+"\n }");
                  // les textures
                  System.out.println("texture_list{\n"+provi.size()+","); 
                  for(int i=0;i<provi.size()-1;i++)
                	  System.out.println("texture"+i+",");
                  System.out.println("texture"+(provi.size()-1)+"\n }");
                  System.out.println("face_indices{");
                  System.out.println(nbFaces+","); 
                  for(int i=0;i<nbFaces-1;i++)
                	  System.out.println(lesFaces[i]+","+ provi.indexOf(lesFaces[i].surface())+","); 
                  System.out.println(lesFaces[nbFaces-1]+" "+provi.indexOf(lesFaces[nbFaces-1].surface())+"\n } \n }");
              
                
          } catch (IOException e) {
                  e.printStackTrace();
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          new OffReader3DMesh().afficheFichierTexte("/tmp/snub_icosidodecahedron.off");
  }

	
	
}
