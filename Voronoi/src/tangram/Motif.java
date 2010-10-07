package tangram;

/** Un motif est un Board sans lignes ni colonnes inutiles (bounding box) */
public class Motif extends Board {

	public Motif() {
		
	}

	public Motif(int l, int c) {
		super(l, c);
	}
	
	public Board expand(){
		Board b=new Board(this.lignes+4,this.colonnes+4); 
		for(int i=0;i<this.lignes;i++)
			for(int j=0;j<colonnes;j++)
				b.lePlateau[i+2][j+2]=this.lePlateau[i][j]; 
		return b; 
	}
	
	private String codage(){
		String s=lignes+","+colonnes+","; 
		for(int i=0;i<lignes;i++)
			for(int j=0;j<colonnes;j++)
				s+=this.lePlateau[i][j].alpha(); 
		return s; 
	}
	
	private Motif rotate(){
		Motif f=new Motif(colonnes,lignes); 
		for(int i=0;i<lignes;i++)
			for(int j=0;j<colonnes;j++)
				f.lePlateau[j][i]=this.lePlateau[i][colonnes-j-1].rotate(); 
		return f; 
	}
	
	// TODO mettre de l'ordre dans les codages
	protected String canonicalCodage(){
		String smin=this.codage();
		Motif f=this; 
		for(int i=0;i<3;i++){
			f=f.rotate(); 
			String sc=f.getCodage();
			if(sc.compareTo(smin)<0) smin=sc; 
		}
		return smin; 
	}
	
	public String getCodage(){return this.codage();}
	
	// deux motifs sont egaux s'ils ont meme motif canonique
	
	public boolean equals(Object o){
		if(!(o instanceof Motif)) return false;
		Motif m=(Motif)o; 
		return this. canonicalCodage().equals(m.canonicalCodage()); 
	}
	
	public int hashCode(){
		return this.canonicalCodage().hashCode(); 
	}
	
	
	
	
	
	
}
