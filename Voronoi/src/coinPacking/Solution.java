// Une solution, c'est un groupe de n pieces et une piece au centre
// on ne garde pas les rotations et les miroirs...
package coinPacking;

import java.util.ArrayList;

public class Solution<E extends FiboCoin> {
	
	private ArrayList<E> laCouronne; 
	private E leCentre; 
	
	public E getCenter(){return leCentre; }
	public ArrayList<E> getList(){return laCouronne;}
	
	public Solution(ArrayList<E> laRonde, E center){
		this.laCouronne=new ArrayList<E>(laRonde); 
		this.leCentre=center; 
	}
	
	public String toString(){
		String s=""; 
		for(E e: this.laCouronne)
			s+=e+","; 
		s+=" avec au centre "+this.leCentre; 
		return s; 
	}
	
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result
				+ ((leCentre == null) ? 0 : leCentre.hashCode());
		return result;
	}

	private int compte=0; 	
	@Override
	public boolean equals(Object obj) {
		int taille=laCouronne.size(); 
		
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Solution other = (Solution) obj;
		if (leCentre == null) {
			if (other.leCentre != null)
				return false;
		} else if (!leCentre.equals(other.leCentre))
			return false;
		// egalite des couronnes
		for(int i=0;i<laCouronne.size();i++){
			boolean equal=true; 
			for(int j=0;j<laCouronne.size();j++){ 
				// comparer other.laCouronne[i] et this.laCouronne[i+j]
				if(!other.laCouronne.get(j).equals(this.laCouronne.get((i+j)%laCouronne.size()))) equal=false;  	
			}//j
			if(equal) { return true;} 
		}// for i
		// Pareil amis on retourne une des listes
		
		for(int i=0;i<taille;i++){
			boolean equal=true; 
			for(int j=0;j<taille;j++){ 
				// comparer other.laCouronne[i] et this.laCouronne[i+j]
				if(!other.laCouronne.get(j).equals(this.laCouronne.get((i-j+taille)%taille))) equal=false;  	
			}//j
			if(equal) {
				
				return true;} 
		}// for i
		
		
		return false;
	}
	


}
