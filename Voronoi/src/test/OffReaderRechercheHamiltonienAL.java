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

import utils.Cylinder;
import utils.FacePolygonale;
import utils.FaceTriangulaire;
import utils.Transfo;
import utils.VertexAL;
import utils.Pos3D; 

public class OffReaderRechercheHamiltonienAL {
	
	private Random generator=new Random(); 
	public static void printResu(ArrayList<VertexAL> p){
		System.out.println("printResu"); 
		int i=0;
		for(VertexAL v:p){
			System.out.println(v);
			/*
			Iterator<VertexAL> it=v.getIterator(); 
			while(it.hasNext())
				System.out.println("\t"+it.next()); 
				*/
		}
	}
	public int nbVertices,nbFaces;
	private String catena;
	{
		Locale.setDefault(Locale.US);
	}
	
	protected long  nn=0; 
	protected int tour=0; 
	public  int  maxsize=5; 
	
	
	public  ArrayList<VertexAL> trajet(ArrayList<VertexAL> deja,ArrayList<VertexAL> reste,VertexAL v){
		nn++;
		if(nn%10000000==0) System.out.println("\t\t\t"+tour+" "+nn); 
		if(nn>1000000000) {nn=0; tour++;} //return presu; 
		//printResu(deja); 
		if(reste.isEmpty()){
			System.out.println("Hourra !"); 
			printResu(deja); 
			System.out.println("\t"+v);
			return deja; 
		}
		Iterator<VertexAL> it=v.getIterator(); 
		while(it.hasNext()){
			VertexAL q=it.next();
			if(!deja.contains(q)){
				ArrayList<VertexAL> dejax=new ArrayList<VertexAL>(deja);
				ArrayList<VertexAL> restex=new ArrayList<VertexAL>(reste);
				dejax.add(v);
				restex.remove(q); 
				ArrayList<VertexAL> presu=trajet(dejax,restex,q); 
				
			}
		}
			if(deja.size()>maxsize){
				maxsize=deja.size(); 
				System.out.println("\t\t\t\t\t\t\t\t nouvelle taille max "+deja.size()+"("+nn+")"+nbVertices);
				
				for(int i=0;i<deja.size();i++){
					
					System.out.println(deja.get(i));
				}
				
	 	
			}
			
			
			return deja; 
	}
	
	
	private ArrayList<VertexAL> vertices=new ArrayList<VertexAL>();
	
	private PrintStream output; 
	

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}
	//private PrintStream output; 
	
	public void mix(){
		System.out.println("entree dans mix "+vertices.size()+" "+nbVertices); 
		ArrayList<VertexAL> verpro=new ArrayList<VertexAL>();
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
	
	
	public void afficheFichierTexte(String nomFichierSource,boolean veritable) {
			//this.catena="C:/Documents and Settings/moi/workspace/Voronoi/src/test/"+nomFichierSource+".off";
		//this.catena="/tmp/"+nomFichierSource+".off"; 
		this.catena="./src/test/"+nomFichierSource+".off"; 
          File source = new File(catena);
          try {
        	// output=new PrintStream("../../../../pearls/scene/geometry/polyhedra/archimedean/archi.txt");
        	//  output=new PrintStream("../pearls/scene/geometry/playingcards/archimedean/"+nomFichierSource+".inc");
        	  output=new PrintStream(nomFichierSource+".inc");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                  String ligne = in.readLine();
                  while(ligne.charAt(0)=='#') ligne=in.readLine();
                  //ligne=in.readLine();
                  Scanner rl=new Scanner(ligne); 
                  nbVertices=rl.nextInt(); 
                  
                  nbFaces=rl.nextInt();
                  System.out.println("Sommets et faces "+nbVertices+" "+nbFaces);
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
                	  vertices.add(new VertexAL(x,y,z)); 
                	  //trueVertices.add(new VertexAL(x,y,z));
                  }
                  
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                  }
                 
                	// On doit encore s'occuper des aretes
                 
                
                  ligne=in.readLine(); 
                  rl=new Scanner(ligne); 
                  while(true){
                	  int c0=rl.nextInt(); 
                	  int c1=rl.nextInt(); 
                	  vertices.get(c0).setNeighbour(vertices.get(c1));
            		  // la precedente
            		  vertices.get(c1).setNeighbour(vertices.get(c0));
            		  ligne=in.readLine(); 
                	  if(ligne==null) break;
                	  rl=new Scanner(ligne); 
                	  System.out.println(ligne);
                  }
                  //double meilleur=lengthAretes.last(); 
                 
                
                  in.close();
                 
                
          } catch (Exception e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          OffReaderRechercheHamiltonienAL toto=new OffReaderRechercheHamiltonienAL(); 
         // true : seulement les aretes initiales
          // false : aussi les centres des faces 



          //toto.afficheFichierTexte("pentagonal_hexecontahedron",true);
          toto.afficheFichierTexte("truncated_icosidodecahedron",true);
          for(VertexAL v:toto.vertices){
        	  System.out.println(v+" "+v.nbNeighbours()); 
          }
          
          ArrayList<VertexAL>deja=new ArrayList<VertexAL>(); 
          VertexAL deb=toto.vertices.get(0); 
          //deja.add(deb);
          toto.vertices.remove(0); 
          System.out.println(toto.vertices.size()); 
          printResu(toto.vertices); 
         
          ArrayList<VertexAL> monResu=toto.trajet(deja, toto.vertices,deb );
          System.out.println(monResu.size()); 
          printResu(monResu); 
         



	  }
	
}
