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

public class ThreeDreaderRuledSurface {
	
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
		//this.catena="F:/Povray/ruled.txt"; 
		this.catena="c:/users/decomite/pictures/povray/ruled.txt"; 
          File source = new File(catena);
          HashSet<CoupleVertexDiam> sommets=new HashSet<CoupleVertexDiam>();
          try {
        	  //output=new PrintStream("F:/Povray/ruled.py");
        	  output=new PrintStream("C:/Users/decomite/pictures/povray/ruled.py");
        	  //outputPovray=new PrintStream("C:/Users/decomite/pictures/povray/plots.inc");
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
               
                System.out.println(subdiv+" "+increment); 
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
                	//System.out.println(origin+" "+end); 
                	//output.println("meFinal=NMesh.GetRaw()");	
                	 output.println("point0=Vector(["+origin.rawString()+"])");
               	  	 output.println("point1=Vector(["+end.rawString()+"])");
               	  	 output.println("me=lineSegMe(point0,point1,diam,nbf)");
               	  	 output.println("ob=bpy.data.objects.new('cylindre"+nbligne+"',me)");
               	  	 output.println("scene.objects.link(ob)"); 
               	  	 /*
               	  	 if(!rooted){
               	  	output.println("ob=scene.objects.new(me,'cylindre"+nbligne+"')");
               	  	rooted=true;
               	  	 }
               	  	 
               	  	 else{
               	  	output.println("localOb=scene.objects.new(me,'cylindre"+nbligne+"')");
               	    output.println("ob.join([localOb])"); 
                    output.println("scene.objects.unlink(localOb)");
               	  	 }
                	*/
                  for(int i=0;i<subdiv;i++){
                	  String ligne=in.readLine();
                	  
                	  if(ligne==null) {u=false; break;} 
                	  r1=new Scanner(ligne); 
                	  r1.useLocale(Locale.US);
        
                	 
                	  listeArmature[nbligne][i]=new Vertex(r1.nextDouble(),r1.nextDouble(),r1.nextDouble()); 
                	  //System.out.println(" "+nbligne+" "+i+" "+listeArmature[nbligne][i]); 
                	
                	  }
                  nbligne++;
                  }
               
                int nbCotesArmature=12; 
               // A ce niveau, on a tous les points de l'armature, faut en faire un boudin continu
                for(int i=0;i<subdiv;i++){
                	
                	output.println("me=bpy.data.meshes.new('armatures')");	
                	output.println("coords=[]");
                	 
                	// fabriquer le boudin de niveau i (0-> exterieur) avec les listeArmature[j][i]
                	for(int j=0;j<360/increment;j++){
                	// calcul de l'equation du plan
                	// On utilise les deux points origin(A) et end(B), plus le point C <0,10,0>
                	Vertex A=cylindresExtr[j][0]; 
                	Vertex B=cylindresExtr[j][1];
                	Pos3D Ainter=Vertex.barycenter(A, B, (i+0.0)/subdiv);
                	//output.println("sphere(("+Ainter.getX()+","+Ainter.getY()+","+Ainter.getZ()+"),0.007)");
                	Vertex C=new Vertex(0, 10, 0); 
                	Plane ploplo=Plane.computePlane(A, B, C); 
                	
                	Vecteur e1=ploplo.getVecteurNormal();
                	e1.normalize(); 
                	//Vecteur e2=new Vecteur(0,1,0); 
                	//Vecteur e3=Vecteur.produitVectoriel(e1, e2); 
                	/*
                	System.out.println(e1.norme()+" "+e2.norme()+" "+e3.norme());
                	System.out.println("e1:"+e1); 
                	System.out.println("e2:"+e2); 
                	System.out.println("e3:"+e3);
                */
                	// en fait tout est beaucoup plus simple
                	// e1 et e3 sont tres similaires et definissent une rotation
                	// autour de l'axe vertical
                	// La transformation se resume a une rotation, suivie d'une translation jusqu'a p
                	// pour bien, il faudrait que la section du boudin suive la pente, sinon il se retrecit aux endroits 
                	// de fortes pentes verticales
                	
                	
                	double angle=Math.atan2(e1.getX(),e1.getZ());
                	angle=angle; 
                	// redux : rayon de la couronne
                	// doit prendre la meme valeur que diam dans General3D.py 
                	// non, probleme d'angle
                	double redux=0.005; 
                	
                	for(int k=0;k<nbCotesArmature;k++){
                		
                		Pos3D glintch=new Pos3D(redux*Math.cos(2*k*Math.PI/nbCotesArmature),redux*Math.sin(2*k*Math.PI/nbCotesArmature),0); 
                		Pos3D rotateGlintch=new Pos3D(glintch.getX()*Math.cos(angle),glintch.getY(),-glintch.getX()*Math.sin(angle));
                		Pos3D translateGlintch=new Pos3D(rotateGlintch.getX()+Ainter.getX(),rotateGlintch.getY()+Ainter.getY(),rotateGlintch.getZ()+Ainter.getZ());
                		
                		
                		// translateGlinch est un des points de la couronne autour d'une intersection
                		// On peut prendre ces couronnes comme base pour un mesh
                		//System.out.println("sphere{"+translateGlintch+",mydiam texture{pigment{color rgb<"+3*i+","+10*i+","+100*i+">}}}");
                		//outputPovray.println("sphere{"+translateGlintch+",mydiam texture{pigment{color rgb<"+3*i+","+10*i+","+100*i+">}}}"); 
                		output.println("coords.append(("+translateGlintch.getX()+","+translateGlintch.getY()+","+translateGlintch.getZ()+"))");
                       
                	}
                	
                	}//j 
                	
                	/* tous les sommets sont enregistres : 
                	nbCotesArmature*(360/increment)
                	maintenant fabriquer les faces
                */
                	
                	output.println("lesfaces=[]");
                	for(int j=0;j<360/increment;j++){// fabriquer les faces
                		for(int k=0;k<nbCotesArmature;k++){
                			output.println("faceCourante=[]");
                			
                			output.println("faceCourante.append("+(((j+1)%(360/increment)*nbCotesArmature)+k)+")");
                			output.println("faceCourante.append("+(j*nbCotesArmature+(k+1)%nbCotesArmature)+")");
                			output.println("faceCourante.append("+(j*nbCotesArmature+k)+")");
                			
                			output.println("lesfaces.append(faceCourante)"); 
                			
                			output.println("faceCourante=[]");
                			output.println("faceCourante.append("+(((j+1)%(360/increment)*nbCotesArmature)+k)+")");
                			output.println("faceCourante.append("+(((j+1)%(360/increment)*nbCotesArmature)+(k+1)%nbCotesArmature)+")");
                			output.println("faceCourante.append("+(j*nbCotesArmature+(k+1)%nbCotesArmature)+")");
                			output.println("lesfaces.append(faceCourante)"); 
                		}
                			
                	}
                	
                			output.println("me.from_pydata(coords,[],lesfaces)"); 
                			output.println("me.update(calc_edges=True)");
                    	  	output.println("ob=bpy.data.objects.new('armature"+i+"',me)");
                            output.println("scene.objects.link(ob)");
                    	  	 
                    	  	 
                }//i
                
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
          ThreeDreaderRuledSurface toto=new ThreeDreaderRuledSurface(); 
         
          toto.afficheFichierTexte();
          System.out.println("fini"); 


	  }
	
}
