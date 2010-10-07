package tangram;

/* Une config d'une piece de tangram (i.e : une piece de tangram orientee d'une certaine façon)*/
public class UnitConfig {
	private int lignes; 
	private int colonnes; 
	private UnitSquare[] config; 
	
	protected UnitConfig(int l,int c,UnitSquare[] cf){
		this.lignes=l; 
		this.colonnes=c; 
		this.config=new UnitSquare[cf.length];
		for(int i=0;i<cf.length;i++) this.config[i]=cf[i]; 
	}
	
	public String toString(){
		String s=lignes+";"+colonnes+"\n"; 
		for(int i=0;i<lignes;i++)
				for(int j=0;j<colonnes;j++){
					s+=config[i*colonnes+j];
					if(j==colonnes-1)s+="\n"; 
					else s+=","; 
				}
		return s; 			
	}
	
	public int getLignes(){
		return this.lignes;
	}
	public int getColonnes(){
		return this.colonnes; 
	}
	
	public UnitSquare getUnitSquare(int l,int c){
	return this.config[l*colonnes+c]; 
	}
}
