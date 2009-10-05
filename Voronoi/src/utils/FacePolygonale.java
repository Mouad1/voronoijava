package utils;

import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.TreeSet;

public class FacePolygonale {
	private ArrayList<Vertex> lesSommets=new ArrayList<Vertex>();
	private ArrayList<Integer> lesIndices=new ArrayList<Integer>();
	private int dim; 
	private int courant=0; 
	private Vertex extrem1,extrem2; 
	
	public FacePolygonale(int taille){
		this.dim=taille;
	}
	
	public void add(Vertex ver,int cc){
		this.lesSommets.add(courant, ver);
		this.lesIndices.add(courant,cc); 
		courant++;
	}
	
	public void determineAxe(){
		// trouver l'axe pour la transformation selon la forme de la face......
		// Regarder combien il y a de longueurs d'aretes differentes
		TreeSet<Double> lengthAretes=new TreeSet<Double>();
		for(int i=0;i<dim;i++){
		lengthAretes.add(roundDecimals(Pos3D.distance(lesSommets.get(i), lesSommets.get((i+1)%dim))));
		}
		if(lengthAretes.size()==1){ // Polygone regulier ou bien losange....
			Vertex vect1=Vertex.sub(this.lesSommets.get(0), this.lesSommets.get(1)); 
			Vertex vect2=Vertex.sub(this.lesSommets.get(1), this.lesSommets.get(2));
			double ps=Vertex.produitScalaire(vect1,vect2); // angle droit : un carre
			if((dim!=4)||(Math.abs(ps)<1e-6)){ // polygone regulier 
				if(dim%2==0){ // nombre pair de cotes
					this.extrem1=lesSommets.get(0); 
					this.extrem2=lesSommets.get(dim/2); 
					
				}
				else{ // nombre impair de cotes
					this.extrem1=lesSommets.get(0); 
					this.extrem2=Vertex.middle(lesSommets.get(dim/2), lesSommets.get((dim+1)/2));
				}
				
			}
			else{ // un polygone de Catalan
				
			}// else
			
		}
	}

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}
	
}
