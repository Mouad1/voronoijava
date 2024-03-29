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
		//System.out.println("---------------------------------dimension --------->"+dim); 
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
				//System.out.println("----------------> cas1"); 
				if(dim%2==0){ // nombre pair de cotes
					//System.out.println("----------------> cas2"); 
					this.extrem1=lesSommets.get(0); 
					this.extrem2=lesSommets.get(dim/2); 
		
				}
				
				else{ 
					
					//System.out.println("----------------> cas3"); 
					this.extrem1=lesSommets.get(0); 
					this.extrem2=Vertex.middle(lesSommets.get(dim/2), lesSommets.get((dim+1)/2));	
				}
			}
			else{ // losange
				double l1=Pos3D.distance(lesSommets.get(0), lesSommets.get(2));
				double l2=Pos3D.distance(lesSommets.get(1), lesSommets.get(3));
				if(l1>l2){
					this.extrem2=lesSommets.get(0); 
					this.extrem1=lesSommets.get(2);
				}
				else{
					this.extrem1=lesSommets.get(0); 
					this.extrem2=lesSommets.get(2);
					
				}
			
			
			}
		}
			else{ // un polygone de Catalan (hors losange)
				System.out.println("----------------> cas4"); 
				switch(dim){
				case 3 : // triangle
					break; 
				case 4 : // losange ou kite
					double l1=Pos3D.distance(lesSommets.get(0), lesSommets.get(2));
					double l2=Pos3D.distance(lesSommets.get(1), lesSommets.get(3));
					double l3=Pos3D.distance(lesSommets.get(0), lesSommets.get(1));
					double l4=Pos3D.distance(lesSommets.get(1), lesSommets.get(2));
					// TODO : controler l'orientation (tjrs la meme ) : pour les kites
					// "la pointe vers le haut"
					// pour les losanges ??? (indifferent...)
					
					if(l1>l2){ //kite
						if(l3>l4){
						this.extrem2=lesSommets.get(0); 
						this.extrem1=lesSommets.get(2);
						}
						else{
							this.extrem1=lesSommets.get(0); 
							this.extrem2=lesSommets.get(2);
							}
					}
					else{ // losange
						this.extrem1=lesSommets.get(1); 
						this.extrem2=lesSommets.get(3); 
					}
					break; 
				case 5 : // tear
					double dist[]=new double[5]; 
					int imax=0; 
					for(int i=0;i<dim;i++){
						dist[i]=Pos3D.distance(lesSommets.get(i),Vertex.middle(lesSommets.get((i+2)%dim), lesSommets.get((i+3)%dim)));
						if(dist[i]>dist[imax]) imax=i; 
					}
					this.extrem1=lesSommets.get(imax); 
					this.extrem2=Vertex.middle(lesSommets.get((imax+2)%dim), lesSommets.get((imax+3)%dim));
					break; 
				default:System.out.println("y a un bug..."); break; // ne devrait pas se produire 
				}
				
			}// else
			
		}
		
	public String toString(){
		String s=""; 
		for(int i=0;i<this.dim;i++)
			s+=this.lesSommets.get(i)+"\n";
		return s; 
	}

	private double roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#.#####");
	return Double.valueOf(twoDForm.format(d));
}

	
	/**
	 * @return the extrem1
	 */
	public Vertex getExtrem1() {
		return extrem1;
	}

	/**
	 * @return the extrem2
	 */
	public Vertex getExtrem2() {
		return extrem2;
	}

	public ArrayList<Vertex> getSommets() {
		return this.lesSommets; 
	}
	
}
