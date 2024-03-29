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

public class ThreeDreaderRuledSurfaceCylindres {
	
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
          HashSet<CoupleVertexDiam> sommets=new HashSet<CoupleVertexDiam>();
          try {
        	  //output=new PrintStream("F:/Povray/ruled.py");
        	  output=new PrintStream("C:/Users/decomite/pictures/povray/ruled.py");
        	  outputPovray=new PrintStream("C:/Users/decomite/pictures/povray/plots.inc");
                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
                boolean rooted=false; 
             
                String line1=in.readLine();
                Scanner r1=new Scanner(line1); 
                r1.useLocale(Locale.US);
                int subdiv=(int)r1.nextInt(); 
                line1=in.readLine();
                r1=new Scanner(line1); 
                r1.useLocale(Locale.US);
                int increment=(int)r1.nextInt(); 
               
                int nbligne=0;
                Vertex listeArmature[][]=new Vertex[360/increment][subdiv];
                Vertex cylindresExtr[][]=new Vertex[360/increment][2];
              
               
                while(u){
                	line1=in.readLine();
                	if(line1==null) {u=false; break;} 
                    r1=new Scanner(line1); 
                	Vertex origin=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	// cylindresExtr[i][] les deux extremites d'un cylindre (0-> exterieur)
                	cylindresExtr[nbligne][0]=origin; 
                	line1=in.readLine();
                    r1=new Scanner(line1); 
                	Vertex end=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	cylindresExtr[nbligne][1]=end; 
                	System.out.println(origin+"*"+end); 
                	//output.println("meFinal=NMesh.GetRaw()");	
                	 output.println("point0=Vector(["+origin.rawString()+"])");
               	  	 output.println("point1=Vector(["+end.rawString()+"])");
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
                	
                  for(int i=0;i<subdiv;i++){
                	  String ligne=in.readLine();
                	  
                	  if(ligne==null) {u=false; break;} 
                	  
                	  r1=new Scanner(ligne); 
                	  r1.useLocale(Locale.US);
                	 
                	  listeArmature[nbligne][i]=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	  System.out.println(" "+nbligne+" "+i+" "+listeArmature[nbligne][i]); 
                	
                	  }
                  nbligne++;
                  }
                
                int nbCotesArmature=12; 
               // A ce niveau, on a tous les points de l'armature, faut en faire un boudin continu
                for(int i=0;i<subdiv;i++){
                	
                	// fabriquer le boudin de niveau i (0-> exterieur) avec les listeArmature[j][i]
                	for(int j=0;j<360/increment;j++){
                	
                	Vertex A=listeArmature[j][i]; 
                	Vertex B=listeArmature[(j+1)%(360/increment)][i];
                
                	
                	
                	
                
                	 output.println("point0=Vector(["+A.rawString()+"])");
              	  	 output.println("point1=Vector(["+B.rawString()+"])");
              	  	 output.println("me=lineSegMe(point0,point1,diam,nbf)[4]");
              	  	 if(!rooted){
              	  	output.println("ob=scene.objects.new(me,'armature"+nbligne+"')");
              	  	rooted=true;
              	  	 }
              	  	 
              	  	 else{
              	  	output.println("localOb=scene.objects.new(me,'armature"+nbligne+"')");
              	    output.println("ob.join([localOb])"); 
                   output.println("scene.objects.unlink(localOb)");
              	  	 }
              	  	 
              	  	// et une petite sphere
              	  	 output.println("me=translate(point0,coef*diam)");
              	  	output.println("localOb=scene.objects.new(me,'sphere"+nbligne+"')");
              	    output.println("ob.join([localOb])"); 
                   output.println("scene.objects.unlink(localOb)");
                	nbligne++; 
                	
                	}//j 
                	
                	
                }//i
                
                  in.close();
                  
               outputPovray.close();  
               output.close(); 
              
          } 
          catch (Exception e){System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ThreeDreaderRuledSurfaceCylindres toto=new ThreeDreaderRuledSurfaceCylindres(); 
         
          toto.afficheFichierTexte();
          System.out.println("fini"); 


	  }
	
}
