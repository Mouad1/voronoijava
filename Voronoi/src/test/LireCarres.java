package test;
// COnstruire tous les distance-sets d'un polyèdre
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
import utils.DistList;
import utils.FacePolygonale;
import utils.FaceTriangulaire;
import utils.Transfo;
import utils.Vertex;
import utils.Pos3D; 
import utils.VertexCouple;

public class LireCarres {
	
	
	{
		Locale.setDefault(Locale.US);
	}
	private static int taille=20; 
	private static int[]tenBestIndices=new int[taille];
	private static double[] tenBestValues=new double[taille]; 
	private static String[] tenBestString=new String[taille];
	
	public static void decale(){
		int indice=taille-2; 
		while((indice>=0)&&(tenBestValues[indice]>tenBestValues[indice+1])){
			// echanger
			int indtemp=tenBestIndices[indice]; 
			String stemp=tenBestString[indice]; 
			double valtemp=tenBestValues[indice]; 
			tenBestIndices[indice]=tenBestIndices[indice+1];
			tenBestString[indice]=tenBestString[indice+1]; 
			tenBestValues[indice]=tenBestValues[indice+1]; 
			tenBestIndices[indice+1]=indtemp; 
			tenBestString[indice+1]=stemp; 
			tenBestValues[indice+1]=valtemp; 
			indice=indice-1; 
		}
		
	}
 
	  public static void main(String args[]) throws Exception { 
			  
			  for(int i=0;i<taille;i++){
					tenBestIndices[i]=-1; 
					tenBestString[i]=""; 
					tenBestValues[i]=100;
				}
		  File source = new File("C:/tmp/resu32.txt");
		  Scanner rl; 
		  BufferedReader in = new BufferedReader(new FileReader(source));
		  double phim1=(Math.sqrt(5)-1)/2; 
         
          for(int i=0;i<1255;i++){
        	String ligne = in.readLine();
        	System.out.println("--->"+ligne);   
            rl=new Scanner(ligne); 
            rl.useLocale(Locale.US); 
            int compte=rl.nextInt();
            rl.next();
            String s=rl.next().substring(7,41) ;
            double comp=rl.nextDouble(); 
            comp=Math.abs(1-phim1-comp); 
            if(comp<tenBestValues[taille-1]){
				tenBestValues[taille-1]=comp; 
				tenBestIndices[taille-1]=compte; 
				tenBestString[taille-1]=s; 
				decale();
			}
            
            }
          for(int i=0;i<taille;i++)
        	  System.out.println(i+" "+tenBestString[i]+" "+tenBestValues[i]+" "+tenBestIndices[i]); 


	  }// main
	
}
