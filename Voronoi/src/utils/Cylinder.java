package utils;

public class Cylinder {
	
	/**
	 * @param a
	 * @param b
	 */
	public Cylinder(Vertex a, Vertex b,int ca,int cb) {
		this.a = a;
		this.b = b;
		this.ca=ca;
		this.cb=cb;
	}

	public Cylinder(Vertex v1, Vertex v2) {
		this.a = v1;
		this.b = v2;
	}

	private Vertex a,b;
	private int ca,cb;
	
	public String toString(){
		return "cylinder{"+a+","+b+",diam}";
	}

	/**
	 * @return the a
	 */
	public Vertex getA() {
		return a;
	}

	/**
	 * @return the b
	 */
	public Vertex getB() {
		return b;
	}

	/**
	 * @return the ca
	 */
	public int getCa() {
		return ca;
	}

	/**
	 * @return the cb
	 */
	public int getCb() {
		return cb;
	}
	

}
