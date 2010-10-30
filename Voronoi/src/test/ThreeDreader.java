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

public class ThreeDreader {
	
	
	private String catena;
	{
		Locale.setDefault(Locale.US);
	}
	
	
	
	
	private PrintStream output; 
	

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}
	//private PrintStream output; 
	
	
	
	public void afficheFichierTexte() {
			//this.catena="C:/Documents and Settings/moi/workspace/Voronoi/src/test/"+nomFichierSource+".off";
		//this.catena="/tmp/quadri.txt"; 
		this.catena="f:/Povray/anamorphoses/quadri.txt"; 
          File source = new File(catena);
          HashSet<CoupleVertexDiam> sommets=new HashSet<CoupleVertexDiam>();
          try {
        	  //output=new PrintStream("/tmp/spline.py"); 
        	  output=new PrintStream("F:/Povray/splineX.py");
                  BufferedReader in = new BufferedReader(new FileReader(source));
                int u=0; 
                boolean rooted=false; 
                int cycle=0; 
                while(u==0){
                	double diam[]=new double[15]; 
                	double x[]=new double[15]; 
                	double y[]=new double[15]; 
                	double z[]=new double[15]; 
                  for(int i=0;i<15;i++){
                	  String ligne=in.readLine();
                	  if(ligne==null) {u=1; break;} 
                	  Scanner rl=new Scanner(ligne); 
                	  System.out.println("*"+ligne); 
                	  rl.useLocale(Locale.US);
                	  int indice=(int)rl.nextDouble(); 
                	  diam[i]=rl.nextDouble();
                	  x[i]=rl.nextDouble(); 
                	  y[i]=rl.nextDouble();
                	  z[i]=rl.nextDouble();
                  }
                  if(u==0){
                      cycle++;
                      sommets.add(new CoupleVertexDiam(new Vertex(x[0], y[0], z[0]),diam[0]));
                      sommets.add(new CoupleVertexDiam(new Vertex(x[14], y[14], z[14]),diam[14]));
                	  for(int i=0;i<14;i++){
                		 Vertex p1=new Vertex(x[i],y[i],z[i]);
                		 Vertex p2=new Vertex(x[i+1],y[i+1],z[i+1]);
                		 // un cylindre
                		 System.out.println("point0=Vector(["+p1.rawString()+"])");
                   	  	 System.out.println("point1=Vector(["+p2.rawString()+"])");
                   	  
                   	 
                   	  	 output.println("point0=Vector(["+p1.rawString()+"])");
                	  	 output.println("point1=Vector(["+p2.rawString()+"])");
                   	 
                   	  
                   	  if(!rooted){
                   	  System.out.println("me=lineSegMe(point0,point1,2,"+10*diam[i]+","+10*diam[i+1]+")");
                   	  System.out.println("ob=scene.objects.new(me,'arete"+i+"-"+cycle+"')");
                   	 
                   	  output.println("me=lineSegMe(point0,point1,2,"+10*diam[i]+","+10*diam[i+1]+")");
                 	  output.println("ob=scene.objects.new(me,'arete"+i+"-"+cycle+"')");
                   	  rooted=true; 
                   	  }
                   	  else{
                   		  System.out.println("me=lineSegMe(point0,point1,1,"+10*diam[i]+","+10*diam[i+1]+")");
                   		  System.out.println("localOb=scene.objects.new(me,'arete"+i+"-"+cycle+"')");
                   		  System.out.println("ob.join([localOb])"); 
                   		  System.out.println("scene.objects.unlink(localOb)");
                   		
                   		  output.println("me=lineSegMe(point0,point1,1,"+10*diam[i]+","+10*diam[i+1]+")");
                 		  output.println("localOb=scene.objects.new(me,'arete"+i+"-"+cycle+"')");
                 		  output.println("ob.join([localOb])"); 
                 		  output.println("scene.objects.unlink(localOb)");
                   	  }
                		  
                	  }// for
                	  
                  }// if
                  
                }// while
                 
                System.out.println(sommets.size());
                int i=0;
                for(CoupleVertexDiam cvm:sommets){
                	  Vertex v=cvm.getV();	
                	  output.println("me=translate(["+v.rawString()+"],"+10*cvm.getDiam()+")");
              		  output.println("localOb=scene.objects.new(me,'sphere"+i+"')");
              		  output.println("ob.join([localOb])"); 
              		  output.println("scene.objects.unlink(localOb)");
                }
                  in.close();
                  
                
               output.close(); 
               System.out.println(sommets.size()); 
               
                
          } catch (Exception e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ThreeDreader toto=new ThreeDreader(); 
         
          toto.afficheFichierTexte();



	  }
	
}
