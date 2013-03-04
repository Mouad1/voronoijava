package test;

import utils.Pos3D;

public class Pillbox {

	
	public static void main(String[] args) {
		double Rmax=3.7; // rayon externe
		double epaisseur=0.01; // epaisseur des murs
		double hauteur=2.2; 
		int nb=7; // nombre de compartiments
		double Rmid=Rmax*Math.sqrt(1/2); // rayon median 
		double Rmin=5*epaisseur; //rayon du moyeu
		double alpha1=Math.asin(epaisseur/Rmax); 
		double alpha3=Math.asin(epaisseur/Rmin);
		double alpha2P=Math.asin(epaisseur/(Rmid+epaisseur/2)); 
		double alpha2S=Math.asin(epaisseur/(Rmid-epaisseur/2));
		
		Pos3D A[][]=new Pos3D[nb][16]; 
		
		for(int i=0;i<nb;i++){
			// fabriquer les 16 sommets
			A[i][0]=new Pos3D(Rmax*Math.cos(2*i*Math.PI-alpha1),hauteur,Rmax*Math.sin(2*i*Math.PI-alpha1));
			A[i][8]=new Pos3D(Rmax*Math.cos(2*i*Math.PI+alpha1),hauteur,Rmax*Math.sin(2*i*Math.PI+alpha1));
			A[i][7]=new Pos3D(Rmax*Math.cos(2*i*Math.PI-alpha1),0,Rmax*Math.sin(2*i*Math.PI-alpha1));
			A[i][15]=new Pos3D(Rmax*Math.cos(2*i*Math.PI+alpha1),0,Rmax*Math.sin(2*i*Math.PI+alpha1));
			
			A[i][1]=new Pos3D((Rmid+epaisseur/2)*Math.cos(2*i*Math.PI/nb-alpha2P),hauteur,(Rmid+epaisseur/2)*Math.sin(2*i*Math.PI/nb-alpha2P));
			A[i][9]=new Pos3D((Rmid+epaisseur/2)*Math.cos(2*i*Math.PI/nb+alpha2P),hauteur,(Rmid+epaisseur/2)*Math.sin(2*i*Math.PI/nb+alpha2P));
			A[i][6]=new Pos3D((Rmid+epaisseur/2)*Math.cos(2*i*Math.PI/nb-alpha2P),0,(Rmid+epaisseur/2)*Math.sin(2*i*Math.PI/nb-alpha2P));
			A[i][14]=new Pos3D((Rmid+epaisseur/2)*Math.cos(2*i*Math.PI/nb+alpha2P),0,(Rmid+epaisseur/2)*Math.sin(2*i*Math.PI/nb+alpha2P));
			
			A[i][2]=new Pos3D((Rmid-epaisseur/2)*Math.cos(2*i*Math.PI/nb-alpha2S),hauteur,(Rmid-epaisseur/2)*Math.sin(2*i*Math.PI/nb-alpha2S));
			A[i][10]=new Pos3D((Rmid-epaisseur/2)*Math.cos(2*i*Math.PI/nb+alpha2S),hauteur,(Rmid-epaisseur/2)*Math.sin(2*i*Math.PI/nb+alpha2S));
			A[i][5]=new Pos3D((Rmid-epaisseur/2)*Math.cos(2*i*Math.PI/nb-alpha2S),0,(Rmid-epaisseur/2)*Math.sin(2*i*Math.PI/nb-alpha2S));
			A[i][13]=new Pos3D((Rmid-epaisseur/2)*Math.cos(2*i*Math.PI/nb+alpha2S),0,(Rmid-epaisseur/2)*Math.sin(2*i*Math.PI/nb+alpha2S));
			
			A[i][3]=new Pos3D(Rmin*Math.cos(2*i*Math.PI/nb-alpha3),hauteur,Rmin*Math.sin(2*i*Math.PI/nb-alpha3)); 
			A[i][11]=new Pos3D(Rmin*Math.cos(2*i*Math.PI/nb+alpha3),hauteur,Rmin*Math.sin(2*i*Math.PI/nb+alpha3)); 
		} // for i
	}
}
