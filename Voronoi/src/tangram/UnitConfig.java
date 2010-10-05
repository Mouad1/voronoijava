package tangram;

/* Une config d'une piece de tangram */
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

}
