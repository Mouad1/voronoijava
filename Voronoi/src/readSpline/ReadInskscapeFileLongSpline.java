package readSpline;
// Lire les donnees de Inkscape, en creant des splines de longueur variable
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

public class ReadInskscapeFileLongSpline {
	
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
		 ArrayList<BigSpline> lesSplines=new ArrayList<BigSpline>();
		 ArrayList<Pos3D> controles=new ArrayList<Pos3D>();
		this.catena="c:/users/decomite/documents/tampon/larose.pov"; 
		//this.catena="c:/users/francesco/documents/tampon/larose.pov"; 
        File source = new File(catena);
          try {
        	  //output=new PrintStream("F:/Povray/filaire.py");
        	  outputPovray=new PrintStream("C:/Users/decomite/pictures/povray/splinesGrands.inc");
        	  //outputPovray=new PrintStream("C:/Users/francesco/pictures/povray/splines.inc");
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
                    	//System.out.println(line1);
                    	line1=line1.substring(line1.indexOf('=')+2);
                    	//System.out.println(line1);
                    	 r1=new Scanner(line1);
                    	 double candidat=r1.nextDouble();
                    	 if(candidat<minx) minx=candidat; 
           			  	//System.out.println(candidat);
                     }
                     
                     if(line1.contains("MAX_X")) {
                     	line1=line1.replace(';',' '); 
                     	//System.out.println(line1);
                     	line1=line1.substring(line1.indexOf('=')+2);
                     	//System.out.println(line1);
                     	 r1=new Scanner(line1);
                     	 double candidat=r1.nextDouble();
                     	 if(candidat>maxx) maxx=candidat; 
            			  	//System.out.println(candidat);
                      }    
                     
                     
                     if(line1.contains("MIN_Y")) {
                     	line1=line1.replace(';',' '); 
                     	//System.out.println(line1);
                     	line1=line1.substring(line1.indexOf('=')+2);
                     	//System.out.println(line1);
                     	 r1=new Scanner(line1);
                     	 double candidat=r1.nextDouble();
                     	 if(candidat<miny) miny=candidat; 
            			  	//System.out.println(candidat);
                      }
                      
                      if(line1.contains("MAX_Y")) {
                      	line1=line1.replace(';',' '); 
                      	//System.out.println(line1);
                      	line1=line1.substring(line1.indexOf('=')+2);
                      	//System.out.println(line1);
                      	 r1=new Scanner(line1);
                      	 double candidat=r1.nextDouble();
                      	 if(candidat>maxy) maxy=candidat; 
             			  	//System.out.println(candidat);
                       }    
                     
                     
                	  if(line1.contains("points")){ // debut du traitement
                		  System.out.println(line1);
                		  int nbPoints=r1.nextInt(); 
                		  int nbseq=nbPoints/4; 
                		  controles=new ArrayList<Pos3D>();
                		  for(int i=0; i<nbseq-1;i++){ // lire une ligne, construire un spline, ne pas lire la derniere ligne
                			  						 // ne pas lire le premier d'une ligne sauf la premiere	
                			  line1=in.readLine();
                			  
                              //r1.useLocale(Locale.US);
                			  line1=line1.substring(line1.indexOf("<")+1);
                			  line1=line1.replace('<',' '); 
                			  line1=line1.replace('>',' ');
                			  line1=line1.replace(',',' '); 
                			  //System.out.println(line1);
                			  r1=new Scanner(line1); 
                			  r1.useLocale(Locale.US);
                			 
                			  Double debuts[]=new Double[4]; 
                			  Double fins[]=new Double[4]; 
                			  Pos3D pcontroles[]=new Pos3D[4]; 
                			  int limit=0; 
                			  if(i!=0) limit=1; 
                			  for(int j=0;j<4;j++){
                				  if(j<limit){ r1.nextDouble(); r1.nextDouble();}
                				  else
                				  {
                				  debuts[j]=r1.nextDouble(); 
                				  fins[j]=r1.nextDouble(); 
                				  controles.add(new Pos3D(debuts[j],0,fins[j]));
                				  }
                			  }// for j
                			 
                		  }// for i
                		 // for(Pos3D conty:controles)System.out.println(conty); 
                		  lesSplines.add(new BigSpline(controles)); 
                	  }
                	  line1=in.readLine();
                	
                }
               
                
                  in.close();
                  
               System.out.println("#declare lesSplines=array["+lesSplines.size()+"];");
               
               outputPovray.println("#declare lesSplines=array["+lesSplines.size()+"]\n;");
               int i=0; 
               for(BigSpline s: lesSplines){
            	   System.out.println(s.toPovray(100,minx,maxx,miny,maxy) ); 
            	   System.out.println("#declare lesSplines["+i+"]=Spline"+i+";\n");
            	  
            	   outputPovray.println(s.toPovray(100,minx,maxx,miny,maxy) ); 
            	   outputPovray.println("#declare lesSplines["+i+"]=Spline"+i+";\n");
            	   i++; 
               }
               
               //System.out.println(minx+" "+maxx+" "+miny+" "+maxy);
               outputPovray.println("#declare nbSplines="+lesSplines.size()+";\n");
               
               outputPovray.close();  
             //output.close(); 
              
          } 
          catch (Exception e){System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ReadInskscapeFileLongSpline toto=new ReadInskscapeFileLongSpline(); 
         
          toto.afficheFichierTexte();
          System.out.println("fini"); 


	  }
	
}
