package test;

import java.io.PrintStream;
import java.util.ArrayList;

import utils.FaceTriangulaire;
import utils.Vertex;

/** But du jeu : decrire une courbe de Gauss creuse, avec sortie en Povray et en Blender (python) 
 * Puis generaliser a toutes les surfaces de revolution, puis surfaces plus quelconques...
 * @author decomite
 *
 */

public class Gaussbell {
	
	public static void main(String[] args) {
		// construire la surface de revolution basee sur y=exp(-k*x*x)
		// Pour un rayon maxi de xmax
		// d'epaisseur e
		// la surface est decoupee en nbTranches tranches
		// chaque tranche contient 2*nbTriangles
		ArrayList<Vertex> sommetsExternes=new ArrayList<Vertex>();
		ArrayList<FaceTriangulaire> lesFaces1=new ArrayList<FaceTriangulaire>(); 
		ArrayList<FaceTriangulaire> lesFaces2=new ArrayList<FaceTriangulaire>(); 
		double xmax=1; 
		double xmin=0;
		double k=5.0; 
		double epaisseur=0.05; 
		int nbTranches=100; 
		int nbTriangles=100; 
		int indicePoint=0; 
		double step=(xmax-xmin)/nbTranches; 
		boolean ferme=false; 
		for(int i=0;i<nbTranches;i++){ // construction de la tranche d'indice i
			double xcour=xmax-i*step; 
			System.out.println("--------->"+xcour); 
			if(xcour<epaisseur){ // on n'a plus besoin de couronnes, on met un chapeau qui va jusqu'en haut
				ferme=true; 
				
				sommetsExternes.add(indicePoint,new Vertex(0,1,0)); 
				indicePoint++; 
				nbTranches=i-1; 
			}
			if(ferme) break; 
			double ycour=Math.exp(-xcour*xcour*k); 
			double alpha=0;  
			if(i%2==0) alpha=Math.PI/nbTriangles; 
			for(int j=0;j<nbTriangles;j++){ // construction du jeme point de la tranche
				Vertex cour=new Vertex(xcour*Math.cos(j*2*Math.PI/nbTriangles+alpha),ycour,xcour*Math.sin(j*2*Math.PI/nbTriangles+alpha)); 
				sommetsExternes.add(indicePoint,cour); 
				indicePoint++;
			}// for j
			
		}// for i
		// On a tous les points de la forme externe 
		// il y a nbTranches couronnes
		// si ferme est vrai, on termine par un chapeau
		for(int i=0;i<nbTranches;i++){ // construire les triangles des couches sures
			int depl=i*nbTriangles; 
			for(int j=0;j<nbTriangles;j++){
			if(i%2==0){
				int jd1; 
				if(j==nbTriangles-1)jd1=depl; else jd1=j+depl+1; 
				FaceTriangulaire ft=new FaceTriangulaire(null,
														 null,
														 null,
														 j+depl,jd1,j+depl+nbTriangles+1); //j+depl,j+depl+1,j+depl+nbTriangles+1);
				//lesFaces1.add(ft);
				
				int jfin; 
				if(j==0) jfin= j+depl+2*nbTriangles-1; 
				else jfin=j+depl+nbTriangles-1; 
				int jdeb; 
				if(j==0) jdeb=depl+nbTriangles-1; else jdeb=j+depl-1; 
				FaceTriangulaire ft2=new FaceTriangulaire(null,
						 null,
						 null,
						 jdeb,jfin,j+nbTriangles+depl);  //j+depl,j+depl+nbTriangles-1,j+nbTriangles+depl+1);
				lesFaces2.add(ft2);
			}
			else{ // tout est bon par ici
				int jdepl,jfin; 
				if(j==nbTriangles-1) {
					jdepl=depl;
					}
				else {
					jdepl=j+depl+1; 
				}
				
				FaceTriangulaire ft=new FaceTriangulaire(null,
						 null,
						 null,
						 j+depl,jdepl,j+depl+nbTriangles);//j+depl,j+depl+1,j+depl+nbTriangles); // ok
				lesFaces1.add(ft);
				
				if(j==0) jfin= j+depl+2*nbTriangles-1; 
				else jfin=j+depl+nbTriangles-1; 
				FaceTriangulaire ft2=new FaceTriangulaire(null,
						null,
						null,
						j+depl,jfin,j+nbTriangles+depl);//j+depl,j+depl+nbTriangles-1,j+nbTriangles+depl);
				lesFaces2.add(ft2);
			}
			}// for j
			
		}// i
		if(ferme){
			for(int i=indicePoint-1-nbTriangles;i<indicePoint-1;i++){
				int succ_i; 
				if(i==indicePoint-2) succ_i=indicePoint-1-nbTriangles; 
				else succ_i=i+1; 
				FaceTriangulaire ft=new FaceTriangulaire(null,null,null,i,succ_i,indicePoint-1); 
				lesFaces1.add(ft); 
			}
				
		}
		try{
		   //PrintStream output=new PrintStream("gb2.inc"); 
		   PrintStream output=new PrintStream("../pearls/scene/geometry/gb2bis.inc");
		   System.out.println("#declare gaussbell=mesh2{\n");
           System.out.println("vertex_vectors{\n");
           System.out.println(sommetsExternes.size()+",");
           
           output.println("#declare gaussbell=mesh2{\n");
           output.println("vertex_vectors{\n");
           output.println(sommetsExternes.size()+",");
           
           for(int i=0;i<sommetsExternes.size()-1;i++){
         	//  System.out.println(sommetsExternes.get(i)+","); 
         	 output.println(sommetsExternes.get(i)+","); 
           }
           System.out.println(sommetsExternes.get(sommetsExternes.size()-1)+"\n }");
           output.println(sommetsExternes.get(sommetsExternes.size()-1)+"\n }");
           
           output.println("texture_list{2, texture{pigment{color Blue}} texture{pigment{color Yellow}}}"); 
         
           
           System.out.println("face_indices{");
           System.out.println(lesFaces1.size()+lesFaces2.size()+","); 
           output.println("face_indices{");
           output.println(lesFaces1.size()+lesFaces2.size()+","); 
           for(FaceTriangulaire f:lesFaces1)
           		output.println(f+",0,");
           for(FaceTriangulaire f:lesFaces2)
          	  if(lesFaces2.indexOf(f)!=lesFaces2.size()-1){
          		//System.out.println(f+",");
            		output.println(f+",1,");
          	  }
          	  else{
          		 System.out.println(f+",1\n } \n }");
          		  output.println(f+"\n } \n }");
          	  }
           
           
           output.close();
		}
		catch(Exception e){System.out.println(e); System.exit(0); }
		System.out.println(ferme); 
	}

}
