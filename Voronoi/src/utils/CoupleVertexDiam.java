package utils;

public class CoupleVertexDiam {
	/**
	 * @param v
	 * @param d
	 */
	public CoupleVertexDiam(Vertex v, double d) {
		this.v = v;
		this.d = d;
	}
	private Vertex v; 
	private double d;
	/**
	 * @return the v
	 */
	public Vertex getV() {
		return v;
	}
	/**
	 * @param v the v to set
	 */
	public void setV(Vertex v) {
		this.v = v;
	}
	/**
	 * @return the d
	 */
	public double getDiam() {
		return d;
	}
	/**
	 * @param d the d to set
	 */
	public void setD(double d) {
		this.d = d;
	} 
	
	public int hashCode(){
		return this.v.hashCode(); 
	}
	
	public boolean equals(Object o){
		if (!(o instanceof CoupleVertexDiam)) return false;
		CoupleVertexDiam co =(CoupleVertexDiam)o;
		return this.v.equals(co.v); 
	}
	
	
	

}
