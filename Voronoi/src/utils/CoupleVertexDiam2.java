package utils;

public class CoupleVertexDiam2 {
	private Vertex v; 
	private double diam; 
	
	public int hashCode(){return v.hashCode(); }
	
	public boolean equals(Object o){
		if(!(o instanceof CoupleVertexDiam2)) return false;
		CoupleVertexDiam2 uc=(CoupleVertexDiam2)o; 
		return v.equals(uc.v); 
	}

	public Vertex getV() {
		return v;
	}

	public double getDiam() {
		return diam;
	}

	public CoupleVertexDiam2(Vertex v, double diam) {
		super();
		this.v = v;
		this.diam = diam;
	}
	
	

}
