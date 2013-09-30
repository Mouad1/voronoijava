package test;
// lis les donnees issues des descriptions filaires  (filaire.txt)
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

public class ThreeDreaderFilaire {
	
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
		this.catena="F:/Povray/filaire.txt"; 
		//this.catena="c:/users/decomite/pictures/povray/filaireCC.txt"; 
          File source = new File(catena);
          HashSet<CoupleVertexDiam> sommets=new HashSet<CoupleVertexDiam>();
          try {
        	  output=new PrintStream("F:/Povray/filaire.py");
        	  //output=new PrintStream("C:/Users/decomite/pictures/povray/filaire.py");
        	  //outputPovray=new PrintStream("C:/Users/decomite/pictures/povray/plots.inc");
                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
                boolean rooted=false; 
             
                String line1;
                Scanner r1;
                int nbligne=0;
                int nbsphere=0;
                // Lire les sommets
                // nombre de sommets
                
                line1=in.readLine();
                r1=new Scanner(line1); 
                r1.useLocale(Locale.US);
         
                int nbsomm=r1.nextInt(); 
                for(int i=0;i<nbsomm;i++){
                	line1=in.readLine();
                	r1=new Scanner(line1); 
                	Vertex sommy=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble());
                	output.println("som=Vector(["+sommy.rawString()+"])");
                	output.println("me=translate(som,coef*diam)");
                	 if(!rooted){
                    	  	output.println("ob=scene.objects.new(me,'sphere"+nbsphere+"')");
                    	  	rooted=true;
                    	  	 }
                    	  	 
                    	  	 else{
                    	  	output.println("localOb=scene.objects.new(me,'sphere"+nbsphere+"')");
                    	    output.println("ob.join([localOb])"); 
                         output.println("scene.objects.unlink(localOb)");
                    	  	 }
                	 nbsphere++; 
                }
               
                while(u){
                	line1=in.readLine();
                	if(line1==null) {u=false; break;} 
                    r1=new Scanner(line1); 
                    r1.useLocale(Locale.US);
                	Vertex origin=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	  System.out.println("1 : point0=Vector(["+origin.rawString()+"])");
                	line1=in.readLine();
                    r1=new Scanner(line1); 
                	Vertex end=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	
                	 output.println("point0=Vector(["+origin.rawString()+"])");
               	  	 output.println("point1=Vector(["+end.rawString()+"])");
               	  	 output.println("me=lineSegMe(point0,point1,diam,nbf)[4]");
               	  	 
               	 
            	  	 System.out.println("2 : point1=Vector(["+end.rawString()+"])");
            	  	 System.out.println("me=lineSegMe(point0,point1,diam,nbf)[4]");
               	  	
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
                  }
               
              
                
                  in.close();
                  
               //outputPovray.close();  
               output.close(); 
              
          } 
          catch (Exception e){System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ThreeDreaderFilaire toto=new ThreeDreaderFilaire(); 
         
          toto.afficheFichierTexte();
          System.out.println("fini"); 


	  }
	
}
