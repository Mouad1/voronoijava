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

public class OffReader3DVertices {
	
	private Random generator=new Random(); 
	private  ArrayList<Vertex> lesCentresDesFaces=new ArrayList<Vertex>(); 
	private  ArrayList<Vertex> lesNormales=new ArrayList<Vertex>(); 
	public int nbVertices,nbFaces;
	private static int roulette=0; 
	private static int roulette2=7; 
	private String catena;
	{
		Locale.setDefault(Locale.US);
	}
	
	protected int nn=0; 
	public  int  maxsize=55; 
	public  ArrayList<Vertex> trajet(ArrayList<Vertex> deja,ArrayList<Vertex> reste,Vertex v){
		nn++;
		if(reste.isEmpty()){
			System.out.println("Houra !"); 
			return deja; 
		}
		Iterator<Vertex> it=v.getIterator(); 
		while(it.hasNext()){
			Vertex q=it.next();
			if(!deja.contains(q)){
				ArrayList<Vertex> dejax=new ArrayList<Vertex>(deja);
				ArrayList<Vertex> restex=new ArrayList<Vertex>(reste);
				dejax.add(v);
				restex.remove(q); 
				ArrayList<Vertex> presu=trajet(dejax,restex,q); 
				if(nn>10e6) return presu; 
			}
		}
			if(deja.size()>maxsize){
				maxsize=deja.size(); 
				System.out.println("\t\t\t\t\t\t\t\t nouvelle taille max "+deja.size()+"("+nn+")"+nbVertices);
				
				for(int i=0;i<deja.size();i++){
					
					System.out.println(deja.get(i)+",diamsphere,");
				}
				
	 	
			}
			return deja; 
	}
	
	
	private ArrayList<Vertex> vertices=new ArrayList<Vertex>();
	private ArrayList<FaceTriangulaire> lesFacesTriangulaires=new ArrayList<FaceTriangulaire>(); 
	private ArrayList<FacePolygonale> lesFacesPolygonales=new ArrayList<FacePolygonale>();

	private PrintStream output; 
	

	private static double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.####");
	return Double.valueOf(twoDForm.format(d));
}
	
	
	public void mix(){
		System.out.println("entree dans mix "+vertices.size()+" "+nbVertices); 
		ArrayList<Vertex> verpro=new ArrayList<Vertex>();
		ArrayList<Integer> sac=new ArrayList<Integer>();
		for(int i=0;i<nbVertices;i++)
			sac.add(i); 
		System.out.println("***"+sac.size());
		for(int i=0;i<nbVertices;i++){
			int gene=generator.nextInt(sac.size()); 
			verpro.add(vertices.get(gene));
			sac.remove(gene);
		}
		System.out.println("--->"+sac.size()+" "+verpro.size());
		vertices=verpro;
	}
	
	
	public void afficheFichierTexte(String nomFichierSource) {
			//this.catena="C:/Documents and Settings/moi/workspace/Voronoi/src/test/"+nomFichierSource+".off";
		//this.catena="/tmp/"+nomFichierSource+".off"; 
		this.catena="./src/test/"+nomFichierSource+".off"; 
          File source = new File(catena);
          try {
        	// output=new PrintStream("../../../../pearls/scene/geometry/polyhedra/archimedean/archi.txt");
        	 output=new PrintStream("../pearls/scene/geometry/"+nomFichierSource+"Test"+roulette+"_"+roulette2+".inc");
        	  //output=new PrintStream("../pearls/scene/geometry/"+nomFichierSource+"Test"+roulette+".inc");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  while(ligne.charAt(0)=='#') ligne=in.readLine();
                  //ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  
                  nbFaces=rl.nextInt();
                  System.out.println(nbVertices+" "+nbFaces);
                  /*
                  System.out.println("mesh2{\n");
                  System.out.println("vertex_vectors{\n");
                  System.out.println(nbVertices+",\n");
                  */
                  // lire les aretes
                  for(int i=0;i<nbVertices;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  Double x=rl.nextDouble(); 
                	  Double y=rl.nextDouble();
                	  Double z=rl.nextDouble();
                	  vertices.add(new Vertex(x,y,z)); 
                	
                  }
              //output.close();
             
               
                
          } catch (IOException e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          OffReader3DVertices toto=new OffReader3DVertices(); 
         TreeSet<Double>lesDistances=new TreeSet<Double>(); 
          toto.afficheFichierTexte("disdyakis_dodecahedron");
          for(int i=0;i<toto.vertices.size();i++){
        	  Vertex v1=toto.vertices.get(i); 
        	  for(int j=i+1;j<toto.vertices.size();j++){
        		  Vertex v2=toto.vertices.get(j); 
        		  double dis=roundDecimals(Pos3D.distance(v1,v2));
        		  lesDistances.add(dis); 
        	  }// for j 
          }// for i
          HashMap <Double,DistList> distAndCouples=new HashMap<Double,DistList>(); 
          
          for(Double d:lesDistances){
        	  	System.out.println(d); 
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
          ArrayList<Vertex>dejavu=new ArrayList<Vertex>();
          int i=0; 
        for(DistList dl:distAndCouples.values()){
        	ArrayList<VertexCouple> lc=dl.getLesCouples(); 
        	VertexCouple vc=lc.get(0); 
        	System.out.println(i+" "+vc.distance()+" "+lc.size());
        	if(i==roulette){
        		for(VertexCouple wc:lc){
        		if(!dejavu.contains(wc.getV1())){
        			 toto.output.println("sphere{"+wc.getV1()+",diam  texture{T1} finish{F1}}");
        			 dejavu.add(wc.getV1());
        		}
        		if(!dejavu.contains(wc.getV2())){
       			 toto.output.println("sphere{"+wc.getV2()+",diam  texture{T1} finish{F1}}");
       			 dejavu.add(wc.getV2());
       		}
        			toto.output.println("cylinder{"+wc.getV1()+","+wc.getV2()+",diam texture{T1} finish{F1}}"); 
        		}
        	}
        	 ///*
        		if(i==roulette2){
            		for(VertexCouple wc:lc){
            			if(!dejavu.contains(wc.getV1())){
               			 toto.output.println("sphere{"+wc.getV1()+",diam  texture{T2} finish{F2}}");
               			 dejavu.add(wc.getV1());
               		}
               		if(!dejavu.contains(wc.getV2())){
              			 toto.output.println("sphere{"+wc.getV2()+",diam  texture{T2} finish{F2}}");
              			 dejavu.add(wc.getV2());
              		}
            		
            		
            			toto.output.println("cylinder{"+wc.getV1()+","+wc.getV2()+",diam texture{T2} finish{F2}}"); 
            		}
            		
        		}
        	//	*/
        		
        	
        	i++; 
        }
        System.out.println(i-1); 
      toto.output.close();
        
	  }// main
	
}