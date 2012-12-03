package test;

public class Triplet {
	protected int i,j,k;

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + i;
		result = prime * result + j;
		result = prime * result + k;
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Triplet other = (Triplet) obj;
		if (i != other.i)
			return false;
		if (j != other.j)
			return false;
		if (k != other.k)
			return false;
		return true;
	}

	public Triplet(int i, int j, int k) {
		super();
		this.i = i;
		this.j = j;
		this.k = k;
	} 
	
	public String toString(){
		return i+","+j+","+k; 
	}

}
