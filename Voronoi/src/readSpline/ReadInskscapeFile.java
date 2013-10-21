package readSpline;
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
import java.util.regex.Pattern;

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

public class ReadInskscapeFile {
	
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
		 ArrayList<Spline> lesSplines=new ArrayList<Spline>();
		this.catena="c:/users/decomite/documents/tampon/mountain.pov"; 
        File source = new File(catena);
          try {
        	  //output=new PrintStream("F:/Povray/filaire.py");
        	  outputPovray=new PrintStream("C:/Users/decomite/pictures/povray/splines.inc");
                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
             
                String line1;
                Scanner r1;
                double minx=2000; 
                double miny=2000; 
                double maxx=0; 
                double maxy=0; 
                
                line1=in.readLine();
             
                while(line1!=null){
                	 r1=new Scanner(line1); 
                     r1.useLocale(Locale.US);
                     if(line1.contains("MIN_X")) {
                    	line1=line1.replace(';',' '); 
                    	System.out.println(line1);
                    	line1=line1.substring(line1.indexOf('=')+2);
                    	System.out.println(line1);
                    	 r1=new Scanner(line1);
                    	 double candidat=r1.nextDouble();
                    	 if(candidat<minx) minx=candidat; 
           			  	System.out.println(candidat);
                     }
                     
                     if(line1.contains("MAX_X")) {
                     	line1=line1.replace(';',' '); 
                     	System.out.println(line1);
                     	line1=line1.substring(line1.indexOf('=')+2);
                     	System.out.println(line1);
                     	 r1=new Scanner(line1);
                     	 double candidat=r1.nextDouble();
                     	 if(candidat>maxx) maxx=candidat; 
            			  	System.out.println(candidat);
                      }    
                     
                     
                     if(line1.contains("MIN_Y")) {
                     	line1=line1.replace(';',' '); 
                     	System.out.println(line1);
                     	line1=line1.substring(line1.indexOf('=')+2);
                     	System.out.println(line1);
                     	 r1=new Scanner(line1);
                     	 double candidat=r1.nextDouble();
                     	 if(candidat<miny) miny=candidat; 
            			  	System.out.println(candidat);
                      }
                      
                      if(line1.contains("MAX_Y")) {
                      	line1=line1.replace(';',' '); 
                      	System.out.println(line1);
                      	line1=line1.substring(line1.indexOf('=')+2);
                      	System.out.println(line1);
                      	 r1=new Scanner(line1);
                      	 double candidat=r1.nextDouble();
                      	 if(candidat>maxy) maxy=candidat; 
             			  	System.out.println(candidat);
                       }    
                     
                     
                	  if(line1.contains("points")){ // debut du traitement
                		  System.out.println(line1);
                		  int nbPoints=r1.nextInt(); 
                		  int nbseq=nbPoints/4; 
                		 
                		  for(int i=0; i<nbseq;i++){ // lire une ligne, construire un spline
                			  line1=in.readLine();
                			  
                              //r1.useLocale(Locale.US);
                			  line1=line1.substring(line1.indexOf("<")+1);
                			  line1=line1.replace('<',' '); 
                			  line1=line1.replace('>',' ');
                			  line1=line1.replace(',',' '); 
                			  System.out.println(line1);
                			  r1=new Scanner(line1); 
                			  r1.useLocale(Locale.US);
                			 
                			  Double debuts[]=new Double[4]; 
                			  Double fins[]=new Double[4]; 
                			  Pos3D pcontroles[]=new Pos3D[4]; 
                			  for(int j=0;j<4;j++){
                				  debuts[j]=r1.nextDouble(); 
                				  fins[j]=r1.nextDouble(); 
                				  pcontroles[j]=new Pos3D(debuts[j],0,fins[j]); 
                			  }// for j
                			  for(int j=0;j<4;j++) System.out.println(debuts[j]+" "+fins[j]);
                			  lesSplines.add(new Spline(pcontroles[0],pcontroles[1],pcontroles[2],pcontroles[3])); 
                		  }// for i
                		  
                	  }
                	  line1=in.readLine();
                	
                }
              
                
                  in.close();
               System.out.println("#declare lesSplines=array["+lesSplines.size()+"]\n;");
               outputPovray.println("#declare lesSplines=array["+lesSplines.size()+"]\n;");
               int i=0; 
               for(Spline s: lesSplines){
            	   System.out.println(s.toPovray(100,minx,maxx,miny,maxy) ); 
            	   System.out.println("#declare lesSplines["+i+"]=Spline"+i+";\n");
            	   outputPovray.println(s.toPovray(10,minx,maxx,miny,maxy) ); 
            	   outputPovray.println("#declare lesSplines["+i+"]=Spline"+i+";\n");
            	   i++; 
               }
               
               System.out.println(minx+" "+maxx+" "+miny+" "+maxy);
               outputPovray.close();  
             //output.close(); 
              
          } 
          catch (Exception e){System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ReadInskscapeFile toto=new ReadInskscapeFile(); 
         
          toto.afficheFichierTexte();
          System.out.println("fini"); 


	  }
	
}
