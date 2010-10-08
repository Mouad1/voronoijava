package tangram;


/* on mémorise un motif et le nombre de pieces qui le composent.
 * On garde tout jusqu'à la fin, mais on ne considerea au final que ceux qui utilisent
 * les sept pieces 
 */

public class MotifIntermediaire {
	/**
	 * @param m
	 * @param nbPieces
	 */
	protected MotifIntermediaire(Motif m, int nbPieces) {
		this.m = m;
		this.nbPieces = nbPieces;
	}
	private Motif m; 
	private int nbPieces;
	/**
	 * @return the m
	 */
	public Motif getM() {
		return m;
	}
	/**
	 * @return the nbPieces
	 */
	public int getNbPieces() {
		return nbPieces;
	} 
	
	public int hashCode(){
		return m.hashCode(); 
	}
	
	public boolean equals(Object o){
		if(!(o instanceof MotifIntermediaire)) return false; 
		MotifIntermediaire mi=(MotifIntermediaire)o; 
		return this.m.equals(mi.m); 
	}
	
	public String toString(){
		String s=m+" ("+nbPieces+")";
		return s; 
	}

}
