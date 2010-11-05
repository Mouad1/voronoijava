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

import sun.awt.windows.ThemeReader;
import utils.Cylinder;
import utils.FacePolygonale;
import utils.FaceTriangulaire;
import utils.Transfo;
import utils.Vertex;
import utils.Pos3D; 

public class OffReader3DCylindersMeshToPython {
	
	private Random generator=new Random(); 
	private  ArrayList<Vertex> lesCentresDesFaces=new ArrayList<Vertex>(); 
	private  ArrayList<Vertex> lesNormales=new ArrayList<Vertex>(); 
	public int nbVertices,nbFaces;
	private String catena;
	{
		Locale.setDefault(Locale.US);
	}
	
	
	
	private ArrayList<Vertex> vertices=new ArrayList<Vertex>();
	private ArrayList<FaceTriangulaire> lesFacesTriangulaires=new ArrayList<FaceTriangulaire>(); 
	private ArrayList<FacePolygonale> lesFacesPolygonales=new ArrayList<FacePolygonale>();

	private PrintStream output; 
	

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}
	//private PrintStream output; 
	
	
	
	public void afficheFichierTexte(String nomFichierSource) {
			//this.catena="C:/Documents and Settings/moi/workspace/Voronoi/src/test/"+nomFichierSource+".off";
		//this.catena="/tmp/"+nomFichierSource+".off"; 
		this.catena="./src/test/"+nomFichierSource+".off"; 
          File source = new File(catena);
          try {
        	// output=new PrintStream("../../../../pearls/scene/geometry/polyhedra/archimedean/archi.txt");
        	// output=new PrintStream("../pearls/scene/geometry/playingcards/archimedean/"+nomFichierSource+".inc");
        	  output=new PrintStream("/tmp/dd.py"); 
        	 // output=new PrintStream("F:/Povray/"+nomFichierSource+".py");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  while(ligne.charAt(0)=='#') ligne=in.readLine();
                  //ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  
                  nbFaces=rl.nextInt();
                  System.out.println("#"+nbVertices+" "+nbFaces);
                  output.println("#"+nbVertices+" "+nbFaces);
                  // lire les sommets (vertices)
                  for(int i=0;i<nbVertices;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
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
                	  FacePolygonale faceEnCours=new FacePolygonale(dim);
                	  int coins[]=new int[dim];
                	  for(int j=0;j<dim;j++){
                		  coins[j]=rl.nextInt(); 
                	  }
                	  for(int toto=0;toto<dim;toto++)
                		  faceEnCours.add(vertices.get(coins[toto]),coins[toto]);
                	  faceEnCours.determineAxe();
                	  lesFacesPolygonales.add(faceEnCours);
                	  if(dim==3)                	
                	  lesFacesTriangulaires.add(new FaceTriangulaire(vertices.get(coins[0]),vertices.get(coins[1]),vertices.get(coins[2]),coins[0],coins[1],coins[2]));
                	  else // la face n'est pas un triangle
                	  {
                		  // calculer le milieu de l'ensemble des points c
                		  Vertex center=new Vertex(0,0,0);
                		  for(int j=0;j<dim;j++) center= Vertex.add(vertices.get(coins[j]),center);
                		  center=(Vertex) Vertex.mul(center,1.0/(dim+0.0)); 
                		  vertices.add(center);
                		  // Construire les dim triangles  (vi,v(i+1),c)
                		  for(int j=0;j<dim;j++)
                			  lesFacesTriangulaires.add(new FaceTriangulaire(vertices.get(coins[j]),vertices.get(coins[(j+1)%dim]),center,coins[j],coins[(j+1)%dim],vertices.indexOf(center)));
                	  }
                	  // fixer les voisins
                	  for(int j=0;j<dim;j++) {
                		  //la suivante
                		  vertices.get(coins[j]).setNeighbour(vertices.get(coins[(j+1)%dim]));
                		  // la precedente
                		  vertices.get(coins[(j+1)%dim]).setNeighbour(vertices.get(coins[j]));
                		  
                	  }
                	  // Calculer les centres des faces (provisoire 05/2010)
                	 
                	  for(FaceTriangulaire f:lesFacesTriangulaires)
                		  lesCentresDesFaces.add(f.getCenter()); 
                	  
                  }
                
                	// On doit encore s'occuper des aretes
                  TreeSet<Double> lengthAretes=new TreeSet<Double>();
                  ArrayList<Cylinder> lesAretes=new ArrayList<Cylinder>();
                
                  ligne=in.readLine(); 
                  rl=new Scanner(ligne); 
                  int index=0; 
                  boolean rooted=false; 
                  while(true){
                	  int c0=rl.nextInt(); 
                	  int c1=rl.nextInt(); 
                	  System.out.println("point0=Vector(["+vertices.get(c0).rawString()+"])");
                	  System.out.println("point1=Vector(["+vertices.get(c1).rawString()+"])");
                	  System.out.println("me=lineSegMe(point0,point1)");
                	
                	  output.println("point0=Vector(["+vertices.get(c0).rawString()+"])");
                	  output.println("point1=Vector(["+vertices.get(c1).rawString()+"])");
                	  output.println("me=lineSegMe(point0,point1)");
                	  
                	  if(!rooted){
                	  System.out.println("ob=scene.objects.new(me,'arete"+index+"')");
                	 
                	  output.println("ob=scene.objects.new(me,'arete"+index+"')");
                	  rooted=true; 
                	  }
                	  else{
                		  System.out.println("localOb=scene.objects.new(me,'arete"+index+"')");
                		  System.out.println("ob.join([localOb])"); 
                		  System.out.println("scene.objects.unlink(localOb)");
                		
                		  output.println("localOb=scene.objects.new(me,'arete"+index+"')");
                		  output.println("ob.join([localOb])"); 
                		  output.println("scene.objects.unlink(localOb)");
                		
                	  }
                	  index++;
                	  lesAretes.add(new Cylinder(vertices.get(c0),vertices.get(c1),c0,c1));
                	  lengthAretes.add(roundDecimals(Pos3D.distance(vertices.get(c0), vertices.get(c1)))); 
                	  ligne=in.readLine();
                	  if(ligne==null) break;
                	  rl=new Scanner(ligne); 
                  }
                  double meilleur=lengthAretes.last(); 
                 index=0;
                  for(Vertex v:vertices){
                	  // des petites spheres
                	  System.out.println("me=translate(["+v.rawString()+"])");
                	  System.out.println("localOb=scene.objects.new(me,'sphere"+index+"')");
            		  System.out.println("ob.join([localOb])"); 
            		  System.out.println("scene.objects.unlink(localOb)");
            		  
            		  output.println("me=translate(["+v.rawString()+"])");
                	  output.println("localOb=scene.objects.new(me,'sphere"+index+"')");
            		  output.println("ob.join([localOb])"); 
            		  output.println("scene.objects.unlink(localOb)");
            		  
            		  index++;
            		  
                  }
                  
                  in.close();
                  output.close();	
                  
             
            
               
                
          } catch (Exception e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          OffReader3DCylindersMeshToPython toto=new OffReader3DCylindersMeshToPython(); 
         
          toto.afficheFichierTexte("disdyakis_triacontahedron");



	  }
	
}
