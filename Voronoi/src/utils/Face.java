package utils;

public class Face {
	
	private Pos3D a,b,c; 
	private int ia,ib,ic; 
	
	/**
	 * @param a
	 * @param b
	 * @param c
	 * @param ia
	 * @param ib
	 * @param ic
	 */
	public Face(Pos3D a, Pos3D b, Pos3D c, int ia, int ib, int ic) {
		this.a = a;
		this.b = b;
		this.c = c;
		this.ia = ia;
		this.ib = ib;
		this.ic = ic;
	}

	/**
	 * @return the a
	 */
	public Pos3D getA() {
		return a;
	}

	/**
	 * @return the b
	 */
	public Pos3D getB() {
		return b;
	}

	/**
	 * @return the c
	 */
	public Pos3D getC() {
		return c;
	}

	/**
	 * @return the ia
	 */
	public int getIa() {
		return ia;
	}

	/**
	 * @return the ib
	 */
	public int getIb() {
		return ib;
	}

	/**
	 * @return the ic
	 */
	public int getIc() {
		return ic;
	}

	public String toString(){
		return "<"+ia+","+ib+","+ic+">";
	}
	
	public double surface(){
		double ca=Pos3D.distance(b,c); 
		double cb=Pos3D.distance(a,c); 
		double cc=Pos3D.distance(a,b); 
		double s=(ca+cb+cc)/2; 
		double A=Math.sqrt(s*(s-ca)*(s-cb)*(s-cc)); 
		return A; 
	}

}
