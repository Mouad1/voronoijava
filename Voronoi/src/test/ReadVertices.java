package test;
// Polygones quelconques, presence de commentaires, aretes 
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;
import java.util.TreeSet;

import utils.Cylinder;
import utils.DistList;
import utils.FacePolygonale;
import utils.FaceTriangulaire;
import utils.Transfo;
import utils.Vertex;
import utils.Pos3D; 
import utils.VertexCouple;

public class ReadVertices {
	
	private Random generator=new Random(); 
	
	public int nbVertices,nbFaces,nbAretes;

	private String catena;
	{
		Locale.setDefault(Locale.US);
	}
	
	protected int nn=0; 
	public  int  maxsize=55; 
	
	
	
	private ArrayList<Vertex> vertices=new ArrayList<Vertex>();
	
	
	

	private static double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.####");
	return Double.valueOf(twoDForm.format(d));
}
	
	
	
	
	
	public void afficheFichierTexte(String nomFichierSource) {
		
		this.catena="./src/test/"+nomFichierSource+".off"; 
          File source = new File(catena);
          try {
        
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  while(ligne.charAt(0)=='#') ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  nbFaces=rl.nextInt();
                  nbAretes=rl.nextInt(); 
                  System.out.println(nbVertices+" "+nbFaces+" "+nbAretes);
                 
                  // lire les sommets
                  for(int i=0;i<nbVertices;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  Double x=rl.nextDouble(); 
                	  Double y=rl.nextDouble();
                	  Double z=rl.nextDouble();
                	  vertices.add(new Vertex(x,y,z)); 
                	  System.out.println("#declare V["+i+"]=<"+x+","+y+","+z+">;");
                	
                  }
                  
                
                   
                  
              //output.close();
             
               
                
          } catch (IOException e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          ReadVertices toto=new ReadVertices(); 
          toto.afficheFichierTexte("disdyakis_triacontahedron"); 
        
	  }// main
	
}
