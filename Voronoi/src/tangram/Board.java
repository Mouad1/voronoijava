package tangram;

/** Un (grand) plateau pour poser des pieces de tangram sans depasser les bords */
public class Board {
	protected UnitSquare[][] lePlateau; 
	protected int lignes=10,colonnes=10;
	
	
	
	public Board(){
		this.lePlateau=new UnitSquare[lignes][colonnes]; 
		for(int i=0;i<lignes;i++)
			for(int j=0;j<colonnes;j++)
				this.lePlateau[i][j]=UnitSquare.TYPE0; 
	}
	
	
	public Board(int l,int c){
		this.lignes=l;
		this.colonnes=c; 
		this.lePlateau=new UnitSquare[lignes][colonnes]; 
		for(int i=0;i<lignes;i++)
			for(int j=0;j<colonnes;j++)
				this.lePlateau[i][j]=UnitSquare.TYPE0; 
	}
		
	
	public boolean isPossibleToAdd(UnitConfig uc,int l,int c){
		if(l+uc.getLignes()>=this.lignes) return false; 
		if(c+uc.getColonnes()>=this.colonnes) return false; 
		
		for(int i=0;i<uc.getLignes();i++)
				for(int j=0;j<uc.getColonnes();j++){
					if(!uc.getUnitSquare(i,j).isCompatible(this.lePlateau[l+i][c+j])) return false;
				}
		return true; 
	}
	
	
	public void place(UnitConfig uc,int l,int c){
		if (!isPossibleToAdd(uc, l, c)) {System.out.println("pas possible"); return;}
		for(int i=0;i<uc.getLignes();i++)
			for(int j=0;j<uc.getColonnes();j++) // placer le carre de base en l+i,c+j
				this.lePlateau[l+i][c+j]=uc.getUnitSquare(i,j).union(this.lePlateau[l+i][c+j]); 
	}
	public String toString(){
		String s=""; 
		for(int i=0;i<lignes;i++)
			for(int j=0;j<colonnes;j++)
			{
				s+=this.lePlateau[i][j].alpha(); 
				if(j==colonnes-1) s+="\n"; 
			}
		return s; 
	}
	
	protected boolean ligneVide(int l){
		for(int j=0;j<colonnes;j++)
			if(!this.lePlateau[l][j].equals(UnitSquare.TYPE0)) return false; 
		return true; 
	}
	
	protected boolean colonneVide(int c){
		for(int j=0;j<lignes;j++)
			if(!this.lePlateau[j][c].equals(UnitSquare.TYPE0)) return false; 
		return true; 
	}
	
	/** retourne le rectangle minimal contenant un motif */
	public Motif reduce(){
		// Chercher la premiere ligne contenant quelque chose 
		int lmin=0; 
		while(ligneVide(lmin))lmin++;
		int lmax=lignes-1; 
		while(ligneVide(lmax))lmax--;
		int cmin=0; 
		while(colonneVide(cmin))cmin++; 
		int cmax=colonnes-1; 
		while(colonneVide(cmax))cmax--;
		Motif reduce=new Motif(lmax-lmin+1,cmax-cmin+1); 
		for(int i=0;i<lmax-lmin+1;i++)
			for(int j=0;j<cmax-cmin+1;j++){
				reduce.lePlateau[i][j]=this.lePlateau[lmin+i][cmin+j];
			}
		return reduce; 
	}


	/**
	 * @return the lignes
	 */
	public int getLignes() {
		return lignes;
	}


	/**
	 * @return the colonnes
	 */
	public int getColonnes() {
		return colonnes;
	}
	
	
	

}
