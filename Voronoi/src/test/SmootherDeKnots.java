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

public class SmootherDeKnots {
	
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
		int nbCouches=0, nbCotes=0; 
		Vertex couches[][]=null,centers[]=null;
		//this.catena="F:/Povray/anamorphoses/skull.txt"; 
		this.catena="c:/users/decomite/pictures/povray/knot.txt"; 
          File source = new File(catena);
        
          try {
                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
                boolean rooted=false; 
             
                String line1=in.readLine();
                Scanner r1=new Scanner(line1); 
                r1.useLocale(Locale.US);
                nbCouches=(int)r1.nextInt(); 
                line1=in.readLine();
                r1=new Scanner(line1); 
                r1.useLocale(Locale.US);
                nbCotes=(int)r1.nextInt(); 
               
                int nbligne=0;
                int roller=0; 
                couches=new Vertex[nbCouches][nbCotes]; 
                centers=new Vertex[nbCouches]; 
              
                System.out.println(nbCouches+" "+nbCotes); 
                for(int i=0;i<nbCouches*nbCotes;i++){
                	System.out.println(i); 
                	line1=in.readLine();
                	if(line1==null) {u=false; break;} 
                    r1=new Scanner(line1); 
                	Vertex origin=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	// cylindresExtr[i][] les deux extremites d'un cylindre (0-> exterieur)
                	couches[nbligne][roller++]=origin;
                	if(roller==nbCotes){
                		roller=0;
                		line1=in.readLine();
                    	if(line1==null) {u=false; break;} 
                        r1=new Scanner(line1); 
                		centers[nbligne]=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                		nbligne++; }
                }
                
                  in.close();
          } 
          catch (Exception e){System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          } 
                  
               
              // outputPovray.close();  
              // output.close(); 
         
          
         /*  OK  
          // Tous les points ont été lus. 
          // Verification
          for(int i=0;i<nbCouches;i++){
        	  Vertex center=new Vertex(0,0,0);
        	  for(int j=0;j<nbCotes;j++)
        		  center=Vertex.add(center,couches[i][j]); 
        	  center=Vertex.mul(center,1.0/nbCotes); 
        	  System.out.println(center+" "+centers[i]); 
          }
        */	  
          for(int tour=0;tour<100;tour++){
        	  System.out.println(tour); 
          double phi=Math.PI/10;
          for(int i=0;i<nbCouches;i++){
        	  // Les trois points plus ou moins alignes
        	  Vertex A=couches[(i-1+nbCouches)%nbCouches][0]; 
        	  Vertex B=couches[i][0]; 
        	  Vertex C=couches[(i+1)%nbCouches][0];
        	  Vertex centre=centers[i];
        	  // Un troisieme point dans le plan de l'armature centrale
        	  Vertex B1=couches[i][1];
        	  
        	  double basicAngle=Vertex.angle(Vertex.sub(A,B),Vertex.sub(C,B)); 
        	  double angleChoisi=basicAngle; 
        	  double valAngle=0; 
        	  System.out.print(i+" "+basicAngle/Math.PI); 
        	  Plane lePlan=Plane.computePlane(B, C, B1); 
        	  Vertex N=lePlan.getVecteurNormal();
        	  Vertex posMoinsPhi=Vertex.rotateAroundAxis(B, centre, N, -phi);
        	  double angleMoinsPhi=Vertex.angle(Vertex.sub(A,posMoinsPhi),Vertex.sub(C,posMoinsPhi)); 
        	  System.out.print("   *** "+angleMoinsPhi/Math.PI); 
        	  if(angleMoinsPhi>basicAngle){
        		  angleChoisi=angleMoinsPhi;
        		  valAngle=angleMoinsPhi; 
        	  }
        	  Vertex posPlusPhi=Vertex.rotateAroundAxis(B, centre, N, phi);
        	  double anglePlusPhi=Vertex.angle(Vertex.sub(A,posPlusPhi),Vertex.sub(C,posPlusPhi)); 
        	  System.out.print("   *** "+anglePlusPhi/Math.PI); 
        	  if(anglePlusPhi>angleChoisi){
        		  angleChoisi=anglePlusPhi;
        		  valAngle=anglePlusPhi; 
        	  }
        	  System.out.println("   "+angleChoisi/Math.PI); 
        	  if(valAngle!=0){ // faire tourner l'anneau central de valangle
        		  for(int k=0;k<nbCotes;k++){
        			  couches[i][k]=Vertex.rotateAroundAxis(couches[i][k], centre, N, valAngle);
        		  }//k 
        	  }
          } // i
          } // tour
          
          try {
        	  //output=new PrintStream("F:/Povray/ruled.py");
        	  //output=new PrintStream("C:/Users/decomite/pictures/povray/knot.py");
        	  outputPovray=new PrintStream("C:/Users/decomite/pictures/povray/plots.inc");
        	  
        	  for(int i=0;i<nbCouches;i++){
        		  	for(int j=0;j<nbCotes;j++){
        		  		outputPovray.println("cylinder{"+couches[i][j].toString()+","+couches[(i+1)%nbCouches][j]+"diam texture{T2} finish{F2}}");
        			  outputPovray.println("cylinder{"+couches[i][j].toString()+","+couches[i][(j+2)%nbCotes]+"diam texture{T1} finish{F1}}");
        		  }
        	  }
        	  outputPovray.close(); 
          } 
          catch (Exception e){System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
          
          
  }
	
	
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          SmootherDeKnots toto=new SmootherDeKnots(); 
         
          toto.afficheFichierTexte();
          System.out.println("fini"); 


	  }
	
}
