package test;
// construire des transformations (matrices 3x3)
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.Random;
import java.util.Scanner;
import java.util.TreeMap;
import java.util.TreeSet;

import utils.Cylinder;
import utils.Determinant3;
import utils.DistList;
import utils.FacePolygonale;
import utils.FaceTriangulaire;
import utils.Transfo;
import utils.Vertex;
import utils.Pos3D; 
import utils.VertexCouple;

public class LireTransfo {
	
	
	{
		Locale.setDefault(Locale.US);
	}
	
 
	  public static void main(String args[]) throws Exception { 
			  
			
		  File source = new File("C:/tmp/det.txt");
		  Scanner rl; 
		  BufferedReader in = new BufferedReader(new FileReader(source));
		   
         
          for(int i=0;i<30;i++){
        	  // Pour chaque transfo, trouver les coefs de la matrice de la transfo
        	  Pos3D[] origines=new Pos3D[4]; 
        	  Pos3D[] destinations=new Pos3D[4]; 
        	  
        	  double[] lesX=new double[3]; 
        	  double[] lesY=new double[3]; 
        	  double[] lesZ=new double[3]; 
        	String ligne = in.readLine();
        	
            rl=new Scanner(ligne); 
            rl.useLocale(Locale.US); 
            int compte=rl.nextInt();
            System.out.println(compte); 
            // lire les 4 coins des carres
            for(int indice=0;indice<4;indice++){
            	ligne=in.readLine();
            	
            	rl=new Scanner(ligne); 
                rl.useLocale(Locale.US);
                origines[indice]=new Pos3D(rl.nextDouble(),rl.nextDouble(),rl.nextDouble()); 
                ligne=in.readLine();
            	
                rl=new Scanner(ligne); 
                rl.useLocale(Locale.US);
                destinations[indice]=new Pos3D(rl.nextDouble(),rl.nextDouble(),rl.nextDouble()); 
              
            }
           // Construire les matrices
            // Translation
            Pos3D c1 =Pos3D.add(destinations[0], destinations[1]); 
            Pos3D c2 =Pos3D.add(destinations[2], destinations[3]); 
            Pos3D center=Pos3D.add(c1,c2);
            center=Pos3D.mul(center,0.25); 
            System.out.println("translation = Matrix.Translation(Vector("+center.printSimple()+"))");
            Pos3D[] destCentrees=new Pos3D[4]; 
            for(int ind=0;ind<4;ind++)
            	destCentrees[ind]=Pos3D.sub(destinations[ind], center);
            // Premiere rotation par rapport a l'axe vertical
            // verification centrage : ok
            Pos3D vec1=Pos3D.middle(destCentrees[0], destCentrees[1]); 
            System.out.println(destCentrees[0]); 
            System.out.println(destCentrees[1]); 
            System.out.println("-->" +vec1); 
            }
         
	  }// main
	
}
