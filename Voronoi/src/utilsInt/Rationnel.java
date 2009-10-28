package utilsInt;

public class Rationnel {
	/**
	 * @param p
	 * @param q
	 */
	public Rationnel(int p, int q) {
		this.p = p;
		this.q = q;
		reduit();
	}

	int p,q; 
	
	private int pgcd(int a,int b){
		while(a!=b){
			if(a>b) a=a-b; 
			else b=b-a; 
		}
		return a;
	}
	
	private void reduit(){
		int pgcd=pgcd(p,q); 
		this.p=this.p/pgcd; 
		this.q=this.q/pgcd; 
	}
	
	public String toString(){
		return p+"/"+q; 
	}

}
