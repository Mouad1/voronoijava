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

public class ThreeDreaderKleinBottle {
	
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
		this.catena="c:/users/decomite/pictures/povray/objects.txt"; 
          File source = new File(catena);
        
          try {
        	  //output=new PrintStream("F:/Povray/ruled.py");
        	  output=new PrintStream("C:/Users/decomite/pictures/povray/kleinBottle.py");
        	 // outputPovray=new PrintStream("C:/Users/decomite/pictures/povray/plots.inc");
                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
                boolean rooted=false; 
             
                String line1=in.readLine();
                Scanner r1=new Scanner(line1); 
                r1.useLocale(Locale.US);
                int nbCouches=(int)r1.nextInt(); 
                line1=in.readLine();
                r1=new Scanner(line1); 
                r1.useLocale(Locale.US);
                int nbCotes=(int)r1.nextInt(); 
               
                int nbligne=0;
                int roller=0; 
                Vertex couches[][]=new Vertex[nbCouches][nbCotes]; 
              
                System.out.println(nbCouches+" "+nbCotes); 
                for(int i=0;i<nbCouches*nbCotes;i++){
                	System.out.println(i); 
                	line1=in.readLine();
                	if(line1==null) {u=false; break;} 
                    r1=new Scanner(line1); 
                	Vertex origin=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	// cylindresExtr[i][] les deux extremites d'un cylindre (0-> exterieur)
                	couches[nbligne][roller++]=origin;
                	if(roller==nbCotes){roller=0; nbligne++; }
                }
                
                  in.close();
                  
                  
               // fabriquer les cercles horizontaux
                  for(int i=0;i<nbCouches;i++){
                	  for(int j=0;j<nbCotes;j++){
                		  output.println("point0=Vector(["+couches[i][j].rawString()+"])");
                    	  output.println("point1=Vector(["+couches[i][(j+3)%nbCotes].rawString()+"])");
                    	  output.println("me=lineSegMe(point0,point1,diam,nbf)[4]");
                    	  if(!rooted){
                         	  	output.println("ob=scene.objects.new(me,'cylindre"+i+"_"+j+"')");
                         	  	rooted=true;
                         	  	 }
                         	  	 
                         	  	 else{
                         	  	output.println("localOb=scene.objects.new(me,'cylindre"+i+"_"+j+"')");
                         	    output.println("ob.join([localOb])"); 
                              output.println("scene.objects.unlink(localOb)");
                         	  	 }
                    	  
                    		 output.println("me=translate(point0,coef*diam)");
                       	  	output.println("localOb=scene.objects.new(me,'sphere"+u+"_"+j+"')");
                       	    output.println("ob.join([localOb])"); 
                            output.println("scene.objects.unlink(localOb)");
                		  
                	  }//j
                  }// i
                  
                  // armatures verticales
                  for(int i=0;i<nbCouches-1;i++){
                	  for(int j=0;j<nbCotes;j++){
                		  output.println("point0=Vector(["+couches[i][j].rawString()+"])");
                    	  output.println("point1=Vector(["+couches[i+1][j].rawString()+"])");
                    	  output.println("me=lineSegMe(point0,point1,diam,nbf)[4]");
                    	  if(!rooted){
                         	  	output.println("ob=scene.objects.new(me,'armature"+i+"_"+j+"')");
                         	  	rooted=true;
                         	  	 }
                         	  	 
                         	  	 else{
                         	  	output.println("localOb=scene.objects.new(me,'armature"+i+"_"+j+"')");
                         	    output.println("ob.join([localOb])"); 
                              output.println("scene.objects.unlink(localOb)");
                         	  	 }
                		  
                	  }//j
                  }// i
                  
               //outputPovray.close();  
               output.close(); 
              
          } 
          catch (Exception e){System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ThreeDreaderKleinBottle toto=new ThreeDreaderKleinBottle(); 
         
          toto.afficheFichierTexte();
          System.out.println("fini"); 


	  }
	
}
