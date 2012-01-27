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

public class ThreeDreaderPVO {
	
	
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
	
		//this.catena="f:/Povray/anamorphoses/quadri.txt"; 
		this.catena="c:/users/decomite/pictures/povray/cage.txt"; 
          File source = new File(catena);
          HashSet<CoupleVertexDiam> sommets=new HashSet<CoupleVertexDiam>();
          try {

        	  //output=new PrintStream("/tmp/spline.py"); 
        	  //output=new PrintStream("F:/Povray/spline.py");
        	  output=new PrintStream("C:/Users/decomite/pictures/Povray/spline.py");
                BufferedReader in = new BufferedReader(new FileReader(source));
                boolean u=true; 
                boolean rooted=false; 
                int cycle=0;
                String line1=in.readLine();
                Scanner r1=new Scanner(line1); 
                int dim=(int)r1.nextInt(); 
               System.out.println("dim : "+dim); 
               	int nligne=0; 
                while(u){
                	
                	double x[]=new double[dim]; 
                	double y[]=new double[dim]; 
                	double z[]=new double[dim]; 
                  for(int i=0;i<dim;i++){
                	  String ligne=in.readLine();
                	  if(ligne!=null)
                	  System.out.println(ligne.length()+"\\"+ligne+"\\"+nligne); 
                	  if(ligne==null) {u=false; break;} 
                	  if(ligne.length()!=0){
                	  if(ligne.charAt(0)=='#'){u=false; break;}
                	  Scanner rl=new Scanner(ligne); 
                	  System.out.println(nligne+" * "+ligne); 
                	  rl.useLocale(Locale.US);
                	  int indice=(int)rl.nextDouble(); 
                	 
                	  x[i]=rl.nextDouble(); 
                	  y[i]=rl.nextDouble();
                	  z[i]=rl.nextDouble();
                	  nligne++; 
                	  }
                  }
                  if(u){
                      cycle++;
                      //System.out.println("meFinal=NMesh.GetRaw()"); 
                      output.println("meFinal=NMesh.GetRaw()"); 
                      sommets.add(new CoupleVertexDiam(new Vertex(x[0], y[0], z[0]),0));
                      sommets.add(new CoupleVertexDiam(new Vertex(x[dim-1], y[dim-1], z[dim-1]),0));
                	  for(int i=0;i<dim-1;i++){
                		 Vertex p1=new Vertex(x[i],y[i],z[i]);
                		 Vertex p2=new Vertex(x[i+1],y[i+1],z[i+1]);
                		 // un cylindre
                		 /*
                		 System.out.println("point0=Vector(["+p1.rawString()+"])");
                   	  	 System.out.println("point1=Vector(["+p2.rawString()+"])");
                   	     System.out.println("meFinal.verts.extend(lineSegMe(point0,point1,rati*"+diam[i]+",nbf)[1])");  
                   	     */
                   	     output.println("point0=Vector(["+p1.rawString()+"])");
                	  	 output.println("point1=Vector(["+p2.rawString()+"])");
                	  	 if(i==0)
                	     output.println("meFinal.verts.extend(lineSegMe(point0,point1,rati*diam,nbf)[1])");
                	  	 if((i>0)&&(i<dim-1))
                	     output.println("meFinal.verts.extend(lineSegMe(point0,point1,rati*diam,nbf)[2])");
                	  	 
                   	     
                	  }// for
                	 
                	  Vertex pfinal=new Vertex(x[dim-1],y[dim-1],z[dim-1]);
                	  Vertex pfinal2=new Vertex(x[dim-1],y[dim-1],z[dim-1]);
                	  /*
                	  System.out.println("point0=Vector(["+pfinal.rawString()+"])");
                	  System.out.println("point1=Vector(["+pfinal2.rawString()+"])");
                	  */
                	  output.println("meFinal.verts.extend(lineSegMe(point0,point1,rati*diam,nbf)[3])");  
                	  //System.out.println("me=meshify(meFinal,nbf)");
                	  //System.out.println("localOb=scene.objects.new(me,'arete1-"+cycle+"')"); 
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
                	  output.println("me=translate(["+v.rawString()+"],rati*2*diam)");
              		  output.println("localOb=scene.objects.new(me,'sphere"+i+"')");
              		  output.println("ob.join([localOb])"); 
              		  output.println("scene.objects.unlink(localOb)");
              		  i++; 
                }
                
                  in.close();
                  
                
               output.close(); 
               System.out.println("sommets : "+sommets.size()); 
               
                
          } catch (Exception e) {System.out.println(e); 
                  e.printStackTrace(); System.exit(0);
          }
         
  }
	  public static void main(String args[]) {
          // new TestIO().copieFichierTexte("essai.txt","output.txt");
          ThreeDreaderPVO toto=new ThreeDreaderPVO(); 
         
          toto.afficheFichierTexte();



	  }
	
}
