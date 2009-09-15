package test;
// on est sur que c'est des triangles
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;

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
                  nbFaces=rl.nextInt();
                  System.out.println("mesh2{\n");
                  System.out.println("vertex_vectors{\n");
                  System.out.println(nbVertices+",\n");
                  // lire les coins
                  for(int i=0;i<nbVertices;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  Double x=rl.nextDouble(); 
                	  Double y=rl.nextDouble();
                	  Double z=rl.nextDouble();
                	  System.out.print("<"+x+","+y+","+z+">");
                	  if(i<nbVertices-1) System.out.print(",");
                	  System.out.println("");
                  }
                  System.out.println("}\n"); 
                  System.out.println("face_indices{\n");
                  System.out.println(nbFaces+",\n"); 
                  
              
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  int dim=rl.nextInt(); 
                	  int coins[]=new int[dim];
                	  for(int j=0;j<dim;j++){
                		  coins[j]=rl.nextInt(); 
                	  }
                	  System.out.print("<"+coins[0]+","+coins[1]+","+coins[2]+">");
                	  if(i<nbFaces-1) System.out.print(",");
                	  System.out.println("");
                	 	 
                		  }
                 
                  System.out.println("}\n}");
                
                  in.close();
              
                
          } catch (IOException e) {
                  e.printStackTrace();
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          new OffReader3D().afficheFichierTexte("/tmp/result.txt");
  }

	
	
}
