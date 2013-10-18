package test;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;

public class StringReader {
	
	private Random generator=new Random(); 


	public int nbVertices,nbFaces;


	private PrintStream output; 
	
	  public void afficheFichierTexte() {
       
        
        	 
                 
                
                
                  Scanner rl=new Scanner(System.in); 
                  rl.useLocale(Locale.FRENCH); 
                  while(rl.hasNext()){
                	  String mot=rl.next(); 
                	  System.out.println("\t"+mot); 
                  }
                
                
               
                
          
  }
	  public static void main(String args[]) {
         
          new StringReader().afficheFichierTexte();
  }

	
	
}
