package test;
// lis les donnees issues de ruledsinus.pov (ruled.txt)
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
import utils.Determinant3;
import utils.FacePolygonale;
import utils.FaceTriangulaire;
import utils.Plane;
import utils.Transfo;
import utils.Vertex;
import utils.Pos3D; 
import utils.Vecteur; 

public class ThreeDreaderSineSurfaceCylindres {
	
	private String catena;
	{
		Locale.setDefault(Locale.US);
	}

	private PrintStream output,outputPovray; 
	

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}	
	public void afficheFichierTexte() {
		 double diamMin=10; 
         double diamMax=-2;
		double ratio=1; 
		//this.catena="F:/Povray/anamorphoses/skull.txt"; 
		this.catena="c:/users/decomite/pictures/povray/sinesurface.txt"; 
          File source = new File(catena);
          HashSet<CoupleVertexDiam> sommets=new HashSet<CoupleVertexDiam>();
          try {
        	  //output=new PrintStream("F:/Povray/ruled.py");
        	  output=new PrintStream("C:/Users/decomite/pictures/povray/sinesurface.py");
        	  outputPovray=new PrintStream("C:/Users/decomite/pictures/povray/plots.inc");
                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
                boolean rooted=false; 
             
            String line1; 
            Scanner r1; 
            int nbligne=0; 
              
               
                while(u){
                	line1=in.readLine();
                	if(line1==null) {u=false; break;} 
                    r1=new Scanner(line1); 
                	Vertex origin=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	line1=in.readLine(); 
                    r1=new Scanner(line1); 
                	Vertex suivant=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble());
                	line1=in.readLine();
                    r1=new Scanner(line1); 
                	Vertex pred=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                
                	//output.println("meFinal=NMesh.GetRaw()");	
                	 output.println("point0=Vector(["+origin.rawString()+"])");
               	  	 output.println("point1=Vector(["+suivant.rawString()+"])");
               	  	 output.println("me=lineSegMe(point0,point1,diam,nbf)[4]");
               	  	 if(!rooted){
               	  	output.println("ob=scene.objects.new(me,'cylindre"+nbligne+"')");
               	  	rooted=true;
               	  	 }
               	  	 else{
               	  	output.println("localOb=scene.objects.new(me,'cylindre"+nbligne+"')");
               	    output.println("ob.join([localOb])"); 
                    output.println("scene.objects.unlink(localOb)");
               	  	 }
               	  	nbligne++; 
               	    output.println("point0=Vector(["+origin.rawString()+"])");
            	  	output.println("point1=Vector(["+pred.rawString()+"])");
            	  	output.println("me=lineSegMe(point0,point1,diam,nbf)[4]");
            		output.println("localOb=scene.objects.new(me,'cylindre"+nbligne+"')");
               	    output.println("ob.join([localOb])"); 
                    output.println("scene.objects.unlink(localOb)");
            	  	
                    output.println("print "+nbligne);
              	  	// et une petite sphere
              	  	output.println("me=translate(point0,coef*diam)");
              	  	output.println("localOb=scene.objects.new(me,'sphere"+nbligne+"')");
              	    output.println("ob.join([localOb])"); 
                    output.println("scene.objects.unlink(localOb)");
                	
               
                  nbligne++;
                  }
              
                
                  in.close();
                  System.out.println(nbligne);
                  
               outputPovray.close();  
               output.close(); 
              
          } 
          catch (Exception e){System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ThreeDreaderSineSurfaceCylindres toto=new ThreeDreaderSineSurfaceCylindres(); 
         
          toto.afficheFichierTexte();
          System.out.println("fini"); 


	  }
	
}
