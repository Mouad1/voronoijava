package readSpline;

import java.util.ArrayList;

import utils.Pos3D;

public class BigSpline {
	private Pos3D[] controles; 
	private int taille; 
	
	public BigSpline(Pos3D[] lesPoints){
		this.controles=new Pos3D[lesPoints.length]; 
		for(int i=0;i<lesPoints.length;i++) this.controles[i]=new Pos3D(lesPoints[i]);
		this.taille=lesPoints.length; 
	}
	
	/** Construire une liste de n+1 points 0,1/n,...,1 avec l'algo de Casteljau **/ 
	protected ArrayList<Pos3D> makeListe(int n){
		double increment=1.0/n; 
		double parametre=0; 
		for(int i=0;i<=n;i++){
			// Calculer le point de la courbe parametrique pour i/n
			parametre+=increment; 
		}//for
		return null; 
	}

}
