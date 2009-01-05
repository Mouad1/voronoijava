package test;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;

public class OffReader3D {
	
	private Random generator=new Random(); 


	public int nbVertices,nbFaces;


	private PrintStream output; 
	
	  public void afficheFichierTexte(String nomFichierSource) {
          File source = new File(nomFichierSource);
          try {
        	  output=new PrintStream("/tmp/voronoi.txt");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  nbFaces=rl.nextInt();
                  // lire les coins
                  for(int i=0;i<nbVertices;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  Double x=rl.nextDouble(); 
                	  Double y=rl.nextDouble();
                	  Double z=rl.nextDouble();
                	  System.out.println("#declare s"+i+"=<"+x+","+y+","+z+">;"); 
                	  output.println("#declare s"+i+"=<"+x+","+y+","+z+">;"); 
                  }
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  int dim=rl.nextInt(); 
                	  int coins[]=new int[dim];
                	  boolean blonk=false; 
                	  for(int j=0;j<dim;j++){
                		  coins[j]=rl.nextInt(); 
                		  if(coins[j]==0) blonk=true; 
                	  }
                	//  if(!blonk){ // definition du prism
                		  System.out.println("#declare p"+i+"=polygon{"+dim);
                		  output.println("#declare p"+i+"=polygon{"+dim);
                		  for(int j=0;j<dim-1;j++){System.out.print("s"+coins[j]+",");output.print("s"+coins[j]+",");}
                		  System.out.println("s"+coins[dim-1]); 
                		  System.out.println("texture{pigment{color rgb <"+generator.nextDouble()/2+","+generator.nextDouble()/2+","+generator.nextDouble()+">}}}");
                		  System.out.println("p"+i); 
                		  
                		  output.println("s"+coins[dim-1]); 
                		  output.println("texture{pigment{color rgb <"+generator.nextDouble()/2+","+generator.nextDouble()/2+","+generator.nextDouble()+">}}}");
                		  output.println("p"+i); 
                		  
                	  //}
                  }
                
                  in.close();
                 output.close(); 
                
          } catch (IOException e) {
                  e.printStackTrace();
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          new OffReader3D().afficheFichierTexte("/tmp/rxx2.txt");
  }

	
	
}
