package graphs;

public class Couple {
	private int i,j;
	
	public Couple(int a,int b){
		this.i=a; 
		this.j=b; 
	}

	public int getI() {
		return i;
	}

	public void setI(int i) {
		this.i = i;
	}

	public int getJ() {
		return j;
	}

	public void setJ(int j) {
		this.j = j;
	}

		public String toString(){
				return i+" "+j; 
		}
}
