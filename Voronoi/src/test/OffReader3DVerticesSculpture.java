package test;
// Polygones quelconques, presence de commentaires, aretes 
// But : lire les sommets d'un polyhedre, leurs distances respectives
// et recuperer certains couples de sommets, calculer la transfo qui les fait passer
// du centre a leur position actuelle
// je me comprends

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

public class OffReader3DVerticesSculpture {
	
	private Random generator=new Random(); 
	private  ArrayList<Vertex> lesCentresDesFaces=new ArrayList<Vertex>(); 
	private  ArrayList<Vertex> lesNormales=new ArrayList<Vertex>(); 
	public int nbVertices,nbFaces,nbAretes;

	private static int roulette=0; 

	private String catena;
	{
		Locale.setDefault(Locale.US);
	}
	
	
	
	private ArrayList<Vertex> vertices=new ArrayList<Vertex>();
	//private ArrayList<FaceTriangulaire> lesFacesTriangulaires=new ArrayList<FaceTriangulaire>(); 
	//private ArrayList<FacePolygonale> lesFacesPolygonales=new ArrayList<FacePolygonale>();

	private PrintStream output; 
//	private PrintStream outputBlender; 
	

	private static double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.####");
	return Double.valueOf(twoDForm.format(d));
}
	
	
	public void afficheFichierTexte(String nomFichierSource) {
			//this.catena="C:/Documents and Settings/moi/workspace/Voronoi/src/test/"+nomFichierSource+".off";
		//this.catena="/tmp/"+nomFichierSource+".off"; 
		this.catena="./src/test/"+nomFichierSource+".off"; 
          File source = new File(catena);
          try {
        	// output=new PrintStream("../../../../pearls/scene/geometry/polyhedra/archimedean/archi.txt");
        	 output=new PrintStream("../pearls/scene/geometry/"+nomFichierSource+"Test"+roulette+".inc");
        	 //outputBlender=new PrintStream("F:/Povray/"+nomFichierSource+"Test"+roulette+"_"+roulette2+".py");
        	  //output=new PrintStream("../pearls/scene/geometry/"+nomFichierSource+"Test"+roulette+".inc");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  while(ligne.charAt(0)=='#') ligne=in.readLine();
                  //ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  
                  nbFaces=rl.nextInt();
                
                  
                  nbAretes=rl.nextInt(); 
                  System.out.println(nbVertices+" "+nbFaces+" "+nbAretes);
                  /*
                  System.out.println("mesh2{\n");
                  System.out.println("vertex_vectors{\n");
                  System.out.println(nbVertices+",\n");
                  */
                  // lire les sommets
                  for(int i=0;i<nbVertices;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  Double x=rl.nextDouble(); 
                	  Double y=rl.nextDouble();
                	  Double z=rl.nextDouble();
                	  vertices.add(new Vertex(x,y,z)); 
                	  //System.out.println("#declare V"+i+"=<"+0+","+y+","+z+">*imax;");
                	
                  }
                  
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	//  System.out.println(ligne); 
                  }
                  System.out.println("faces ok");
                  
                  for(int i=0;i<nbAretes;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  //System.out.println(ligne); 
                	  int i1=rl.nextInt(); 
                	  int i2=rl.nextInt();
                	 // System.out.println("traceLigne(V"+i1+",V"+i2+",indmax)"); 
                	  
                  }
                   
                 System.out.println("Aretes ok"); 
              //output.close();
             
               
                
          } catch (IOException e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          OffReader3DVerticesSculpture toto=new OffReader3DVerticesSculpture(); 
         TreeSet<Double>lesDistances=new TreeSet<Double>(); 
       

          toto.afficheFichierTexte("snub_cuboctahedron");

          for(int i=0;i<toto.vertices.size();i++){
        	  Vertex v1=toto.vertices.get(i); 
        	  for(int j=i+1;j<toto.vertices.size();j++){
        		  Vertex v2=toto.vertices.get(j); 
        		  double dis=roundDecimals(Pos3D.distance(v1,v2));
        		  lesDistances.add(dis); 
        	  }// for j 
          }// for i
          // Associer a une distance donnee v, la liste des couples 
          // de sommets distants de v
          HashMap <Double,DistList> distAndCouples=new HashMap<Double,DistList>(); 
          
          for(Double d:lesDistances){
        	  	System.out.println("**"+d); 
          		distAndCouples.put(d,new DistList(d));
          }
          for(int i=0;i<toto.vertices.size();i++){
        	  Vertex v1=toto.vertices.get(i); 
        	  for(int j=i+1;j<toto.vertices.size();j++){
        		  Vertex v2=toto.vertices.get(j);   
        		  double dis=roundDecimals(Pos3D.distance(v1,v2));
        		  DistList dl=distAndCouples.get(dis);
        		  dl.add(new VertexCouple(v1,v2)); 
        	  }// j
          }//i
          
          
        
          /*
          for(Vertex v:toto.vertices){
        	  toto.output.println("sphere{"+v+",diam  texture{T1} finish{F1}}"); 
          }
          */
          int number=0;
          ArrayList<Vertex>dejavu=new ArrayList<Vertex>();
          int i=0; 
          int vj=0; 
          ArrayList<Transfo> lesTransfos=new ArrayList<Transfo>();
        //for(DistList dl:distAndCouples.values())
        	for(Double di:lesDistances)
        {
        	DistList dl=distAndCouples.get(di); 	
        	ArrayList<VertexCouple> lc=dl.getLesCouples(); 
        	VertexCouple vc=lc.get(0); 
        	System.out.println(i+" *  "+vc.distance()+" "+lc.size());
        	if(i==roulette){
        		for(VertexCouple wc:lc){
        		if(!dejavu.contains(wc.getV1())){
        			 //toto.output.println("sphere{"+wc.getV1()+",diam*coef  texture{T1} finish{F1}}");
        		
        			 dejavu.add(wc.getV1());
        		
        		}
        		
        		if(!dejavu.contains(wc.getV2())){
       			 //toto.output.println("sphere{"+wc.getV2()+",diam*coef  texture{T1} finish{F1}}");
       			 dejavu.add(wc.getV2());
       			
        		}
        		
        		
        		// Creer la transformation
                
                  Vertex mimi=Vertex.middle(wc.getV1(),wc.getV2()); 
            	   double taille=Pos3D.distance(wc.getV1(), wc.getV2());
            	   mimi=Vertex.mul(mimi,-1); 
            	   Vertex Na=Vertex.add(wc.getV1(),mimi); 
            	   Vertex Nb=Vertex.add(wc.getV2(),mimi);
            	  
            	   double xx=Na.getX();
            	   double yy= Na.getY();
            	   double zz=Na.getZ();
            	   double alpha=Math.atan2(zz, xx)*180/Math.PI; 
            	   double newX=Math.sqrt(xx*xx+zz*zz);
            	   double beta=Math.atan2(newX,yy)*180/Math.PI;
            	   
            	  lesTransfos.add(new Transfo(alpha,beta,mimi,1));
                  
                  
                 
        		
        		
            	  
        		
        		}
        		
        		System.out.println("#declare maxIndices="+lesTransfos.size()+";");
                toto.output.println("#declare maxIndices="+lesTransfos.size()+";");
                toto.output.println("#declare trans=array[maxIndices]");
              
                for(Transfo t:lesTransfos){
             	   //System.out.println("#declare trans["+vj+"]="+t+";");
             	   toto.output.println("#declare trans["+vj+"]="+t+";");
             	   vj++;
                }   
        	}

        	
        	i++; 
        }
        System.out.println(i-1); 
        System.out.println(roulette); 
      toto.output.close();
        
	  }// main
	
}
