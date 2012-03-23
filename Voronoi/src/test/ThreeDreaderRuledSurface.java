package test;
// Polygones quelconques, presence de commentaires, aretes 
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;
import java.util.TreeSet;

import utils.CoupleVertexDiam;
import utils.Cylinder;
import utils.FacePolygonale;
import utils.FaceTriangulaire;
import utils.Transfo;
import utils.Vertex;
import utils.Pos3D; 

public class ThreeDreaderRuledSurface {
	
	private String catena;
	{
		Locale.setDefault(Locale.US);
	}

	private PrintStream output; 
	

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}	
	public void afficheFichierTexte() {
		 double diamMin=10; 
         double diamMax=-2;
		double ratio=1; 
		this.catena="c:/users/decomite/pictures/povray/ruled.txt"; 
          File source = new File(catena);
          HashSet<CoupleVertexDiam> sommets=new HashSet<CoupleVertexDiam>();
          try {
        	  output=new PrintStream("C:/Users/decomite/pictures/Povray/Ruled.py");
                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
                boolean rooted=false; 
                int cycle=0;
                String line1=in.readLine();
                Scanner r1=new Scanner(line1); 
                r1.useLocale(Locale.US);
                int subdiv=(int)r1.nextInt(); 
               System.out.println("Subdiv : "+subdiv); 
               	int nligne=0; 
                while(u){
                	line1=in.readLine();
                    r1=new Scanner(line1); 
                	Vertex origin=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	line1=in.readLine();
                    r1=new Scanner(line1); 
                	Vertex end=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	Vertex listedebut[]=new Vertex[subdiv+1];
                	Vertex listefin[]=new Vertex[subdiv+1];
                  for(int i=0;i<=subdiv;i++){
                	  String ligne=in.readLine();
                	  
                	  if(ligne!=null)
                	  System.out.println("*** "+ligne.length()+"\\"+ligne+"\\"+nligne); 
                	  if(ligne==null) {u=false; break;} 
                	  
                	  r1=new Scanner(ligne); 
                	  r1.useLocale(Locale.US);
                	  listedebut[i]=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	  
                	  ligne=in.readLine();
                	  r1=new Scanner(ligne); 
                	  r1.useLocale(Locale.US);
                	  listefin[i]=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	  System.out.println(listedebut[i]+"  "+listefin[i]); 
                	  }
                  }
               
                
                  in.close();
                  
                
               output.close(); 
              
          } 
          catch (Exception e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ThreeDreader toto=new ThreeDreader(); 
         
          toto.afficheFichierTexte();



	  }
	
}
