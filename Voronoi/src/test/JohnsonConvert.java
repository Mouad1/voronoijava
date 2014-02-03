package test;
// COnstruire tous les distance-sets d'un polyèdre


import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FilenameFilter;
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

public class JohnsonConvert {
	
	private static Random generator=new Random(1215); 
	private  ArrayList<Vertex> lesCentresDesFaces=new ArrayList<Vertex>(); 
	private  ArrayList<Vertex> lesNormales=new ArrayList<Vertex>(); 
	public int nbVertices,nbFaces,nbAretes;

	

	private String catena;
	{
		Locale.setDefault(Locale.US);
	}
	
	protected int nn=0; 
	public  int  maxsize=0; 
	public  ArrayList<Vertex> trajet(ArrayList<Vertex> deja,ArrayList<Vertex> reste,Vertex v){
		System.out.println(nn); 
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
				dejax.add(q);
				restex.remove(q); 
				ArrayList<Vertex> presu=trajet(dejax,restex,q); 
				if(nn>10e9) return presu; 
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
	//private ArrayList<FaceTriangulaire> lesFacesTriangulaires=new ArrayList<FaceTriangulaire>(); 
	//private ArrayList<FacePolygonale> lesFacesPolygonales=new ArrayList<FacePolygonale>();

	private PrintStream output,outputBlender; 
	

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
		this.catena="./src/test/JohnsonOff/"+nomFichierSource+".off"; 
          File source = new File(catena);
          try {
        	 //output=new PrintStream("../povray/scene/geometry/"+nomFichierSource+"Test"+roulette+"_"+roulette2+"_"+roulette3+".inc");
        	output=new PrintStream("../povray/scene/geometry/"+nomFichierSource+"Tout.inc");
        	 //outputBlender=new PrintStream("F:/Povray/"+nomFichierSource+"Test"+roulette+"_"+roulette2+".py");
        	 outputBlender=new PrintStream("C:/users/decomite/pictures/povray/"+nomFichierSource+"Tout.py");

        	 outputBlender=new PrintStream("C:/users/francesco/pictures/povray/"+nomFichierSource+"Tout.py");
        	 // outputBlender=new PrintStream("/tmp/"+nomFichierSource+"Tout.inc");

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
                	  System.out.println("#declare V"+i+"=<"+0+","+y+","+z+">*imax;");
                	
                  }
                  
                  for(int i=0;i<nbFaces;i++){
                	  ligne=in.readLine();
                	  System.out.println(ligne); 
                  }
                  
                  for(int i=0;i<nbAretes;i++){
                	  ligne=in.readLine();
                	  rl=new Scanner(ligne); 
                	  rl.useLocale(Locale.US);
                	  //System.out.println(ligne); 
                	  int i1=rl.nextInt(); 
                	  int i2=rl.nextInt();
                	  System.out.println("traceLigne(V"+i1+",V"+i2+",indmax)"); 
                	  
                  }
                   
                  
              //output.close();
             
               
                
          } catch (IOException e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	
	
	
	  public static void main(String args[]) throws Exception {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
         
        

         
       /* ------------------------------------ ICI ---------------------------------------------------------------------*/
         
         File dir = new File("./src/test/JohnsonOff");
		   
		    File[] list= dir.listFiles();


		    System.out.println(dir.getName()); 
		    for (File f:list) {
		    	String s=f.getName();
		    	if (!s.equals(".svn"))
		    	{
		    	System.out.println("---->"+s);
		    	 JohnsonConvert toto=new JohnsonConvert(); 
		    	toto.afficheFichierTexte(s.substring(0, s.indexOf('.')));
		    	 TreeSet<Double>lesDistances=new TreeSet<Double>(); 
          
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
          // Map<String, Float> map = new TreeMap<String, Float>(yourMap);
          Map<Double, DistList> distAndCouples2 = new TreeMap<Double, DistList>(distAndCouples);
          
        for(DistList dl:distAndCouples2.values()){
        	ArrayList<VertexCouple> lc=dl.getLesCouples(); 
        	VertexCouple vc=lc.get(0); 
        	System.out.println(i+" *  "+vc.distance()+" "+lc.size());
        	 toto.outputBlender.println("print "+i);
        		number=0;
        		double rouge=generator.nextDouble();
        		double vert=generator.nextDouble();
        		double bleu=generator.nextDouble();
        		
        		for(VertexCouple wc:lc){
        		if(!dejavu.contains(wc.getV1())){
        			 toto.output.println("sphere{"+wc.getV1()+",diam*coef*2  texture{pigment{color rgb<"+rouge+","+vert+","+bleu+">}} finish{F1}}");
        		
        			 dejavu.add(wc.getV1());
        			 
        			
        			 //sphere
        			 toto.outputBlender.println("me"+i+"=translate(["+wc.getV1().rawString()+"],2*diam)#                           translate 1");
        			 if(number==0){
        				 toto.outputBlender.println("ob"+i+"=scene.objects.new(me"+i+",'sphere"+number+"')");
        			 }
        			 else{
        			  toto.outputBlender.println("localOb=scene.objects.new(me"+i+",'sphere"+number+"')");
        			  toto.outputBlender.println("ob"+i+".join([localOb])");
            	      toto.outputBlender.println("scene.objects.unlink(localOb)");
        			 }
        		      number++;
        		      
        		}
        		
        		if(!dejavu.contains(wc.getV2())){
       			 toto.output.println("sphere{"+wc.getV2()+",diam*coef*2  texture{pigment{color rgb<"+rouge+","+vert+","+bleu+">}} finish{F1}}");
       			 dejavu.add(wc.getV2());
       			 //sphere
    			 toto.outputBlender.println("me"+i+"=translate(["+wc.getV2().rawString()+"],2*diam) #                                 translate 2");
    			 if(number==0){
    				 toto.outputBlender.println("ob"+i+"=scene.objects.new(me"+i+",'sphere"+number+"')");
    			 }
    			 else{
    			  toto.outputBlender.println("localOb=scene.objects.new(me"+i+",'sphere"+number+"')");
    			  toto.outputBlender.println("ob"+i+".join([localOb])");
        	      toto.outputBlender.println("scene.objects.unlink(localOb)");
    			 }
    		      number++;
        		}
       			 // un cylindre
          		  toto.outputBlender.println("meFinal=NMesh.GetRaw()"); 
        		  
          		  toto.outputBlender.println("point0=Vector(["+wc.getV1().rawString()+"])");
           	  	  toto.outputBlender.println("point1=Vector(["+wc.getV2().rawString()+"])");
           	  	  toto.outputBlender.println("meFinal.verts.extend(lineSegMe(point0,point1,diam,nbf)[1])");  
           	      toto.outputBlender.println("meFinal.verts.extend(lineSegMe(point0,point1,diam,nbf)[3])");  
           	      toto.outputBlender.println("me=meshify(meFinal,nbf)");
           	
           	      toto.outputBlender.println("if not me.materials:");          
           	      toto.outputBlender.println(" newmat = Material.New()");         
           		  toto.outputBlender.println("me.materials.append(newmat)");   
        	      //print me.materials               # print the list of materials
           		  toto.outputBlender.println("mat = me.materials[0]");       
           		  toto.outputBlender.println("mat.R = "+rouge);     
           		  toto.outputBlender.println("mat.G = "+vert);     
           		  toto.outputBlender.println("mat.B = "+bleu);     
           	      if(number==0)
           	    	  toto.outputBlender.println("ob"+i+"=scene.objects.new(me,'piece"+i+"_"+number+"')");
           	      else
           	      {
           	    	 toto.outputBlender.println("localOb=scene.objects.new(me,'piece"+i+"_"+number+"')");
           	    	 toto.outputBlender.println("ob"+i+".join([localOb])");
           	    	 toto.outputBlender.println("scene.objects.unlink(localOb)");
           	      }
           	      number++;
       		
        			toto.output.println("cylinder{"+wc.getV1()+","+wc.getV2()+",diam texture{pigment{color rgb<"+rouge+","+vert+","+bleu+">}} finish{F1}}"); 
        		}
        	
        		
        		
        		
        	
        	i++; 
        		
        }
        System.out.println(i-1); 
      
      toto.output.close();
		    }
		    }// if svn
        
	  }// main
	
}
