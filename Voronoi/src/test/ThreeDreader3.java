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

public class ThreeDreader3 {
	
	
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
		double ratio=5; 
		this.catena="f:/Povray/anamorphoses/quadri2.txt"; 
          File source = new File(catena);
          HashSet<CoupleVertexDiam> sommets=new HashSet<CoupleVertexDiam>();
          try {

        	  //output=new PrintStream("/tmp/spline.py"); 
        	  output=new PrintStream("F:/Povray/hamilton.py");

                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
                boolean rooted=false; 
                int cycle=0; 
                while(u){
                	double diam[]=new double[21]; 
                	double x[]=new double[21]; 
                	double y[]=new double[21]; 
                	double z[]=new double[21]; 
                  for(int i=0;i<21;i++){
                	  String ligne=in.readLine();
                	  if(ligne==null) {u=false; break;} 
                	  Scanner rl=new Scanner(ligne); 
                	  //System.out.println("*"+ligne); 
                	  rl.useLocale(Locale.US);
                	  int indice=(int)rl.nextDouble(); 
                	  diam[i]=rl.nextDouble();
                	  x[i]=rl.nextDouble(); 
                	  y[i]=rl.nextDouble();
                	  z[i]=rl.nextDouble();
                  }
                  if(u){
                      cycle++;
                      System.out.println("meFinal=NMesh.GetRaw()"); 
                      output.println("meFinal=NMesh.GetRaw()"); 
                      sommets.add(new CoupleVertexDiam(new Vertex(x[0], y[0], z[0]),ratio*2*diam[0]));
                      sommets.add(new CoupleVertexDiam(new Vertex(x[20], y[20], z[20]),ratio*2*diam[14]));
                	  for(int i=0;i<14;i++){
                		 Vertex p1=new Vertex(x[i],y[i],z[i]);
                		 Vertex p2=new Vertex(x[i+1],y[i+1],z[i+1]);
                		 // un cylindre
                		 System.out.println("point0=Vector(["+p1.rawString()+"])");
                   	  	 System.out.println("point1=Vector(["+p2.rawString()+"])");
                   	     System.out.println("meFinal.verts.extend(lineSegMe(point0,point1,"+ratio*diam[i]+",nbf)[1])");  
                   	     
                   	     output.println("point0=Vector(["+p1.rawString()+"])");
                	  	 output.println("point1=Vector(["+p2.rawString()+"])");
                	  	 if(i==0)
                	     output.println("meFinal.verts.extend(lineSegMe(point0,point1,"+ratio*diam[i]+",nbf)[1])");
                	  	 if((i>0)&&(i<20))
                	     output.println("meFinal.verts.extend(lineSegMe(point0,point1,"+ratio*diam[i]+",nbf)[2])");
                	  	 
                   	     
                	  }// for
                	 
                	  Vertex pfinal=new Vertex(x[20],y[20],z[20]);
                	  Vertex pfinal2=new Vertex(x[20],y[20],z[20]);
                	  System.out.println("point0=Vector(["+pfinal.rawString()+"])");
                	  System.out.println("point1=Vector(["+pfinal2.rawString()+"])");
                	  output.println("meFinal.verts.extend(lineSegMe(point0,point1,"+ratio*diam[20]+",nbf)[3])");  
                	  System.out.println("me=meshify(meFinal,nbf)");
                	  System.out.println("localOb=scene.objects.new(me,'arete1-"+cycle+"')"); 
                	  output.println("me=meshify(meFinal,nbf)");
                	  if(!rooted){
                	  output.println("ob=scene.objects.new(me,'arete1-"+cycle+"')");
                	  rooted=true; 
                	  }
                	  else{
                		 output.println("localOb=scene.objects.new(me,'arete1-"+cycle+"')");
                		 output.println("ob.join([localOb])"); 
                		 output.println("scene.objects.unlink(localOb)");

                	  }
                  }// if
                 
                }// while
                 
                System.out.println(sommets.size());
                int i=0;
                
                for(CoupleVertexDiam cvm:sommets){
                	  Vertex v=cvm.getV();	
                	  output.println("me=translate(["+v.rawString()+"],"+cvm.getDiam()+")");
              		  output.println("localOb=scene.objects.new(me,'sphere"+i+"')");
              		  output.println("ob.join([localOb])"); 
              		  output.println("scene.objects.unlink(localOb)");
              		  i++; 
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
          ThreeDreader3 toto=new ThreeDreader3(); 
         
          toto.afficheFichierTexte();



	  }
	
}
