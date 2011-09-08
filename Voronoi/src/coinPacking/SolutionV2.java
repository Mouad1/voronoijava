// Une solution, c'est un groupe de n pieces et une piece au centre
// on ne garde pas les rotations et les miroirs...
package coinPacking;

import java.util.ArrayList;

public class SolutionV2 {
	
	private ArrayList<Coin> laCouronne; 
	private Coin leCentre; 
	
	public Coin getCenter(){return leCentre; }
	public ArrayList<Coin> getList(){return laCouronne;}
	
	public SolutionV2(ArrayList<Coin> laRonde, Coin center){
		this.laCouronne=new ArrayList<Coin>(laRonde); 
		this.leCentre=center; 
	}
	
	public String toString(){
		String s=""; 
		for(Coin e: this.laCouronne)
			s+=e+","; 
		s+=" avec au centre "+this.leCentre; 
		return s; 
	}
	
	public String toPovray(){
		String s=""; 
		s+="object{"+this.leCentre.getPovrayName()+"}\n"; 
		s+="#declare rc="+this.leCentre.getSize()+";\n"; 
		s+="#declare ang=0;\n"; 
		for(int i=0;i<this.laCouronne.size();i++){
			Coin p1=this.laCouronne.get(i); 
			Coin p2=this.laCouronne.get((i+1)%this.laCouronne.size()); 
			s+="object{"+p1.getPovrayName()+" translate(rc+"+p1.getSize()+")*z rotate ang*y}\n"; 
			s+="#declare ang=ang+centerAngle(rc,"+p1.getSize()+","+p2.getSize()+");\n"; 
		}
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
		SolutionV2 other = (SolutionV2) obj;
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
