package utils;

public class Cylinder {
	
	/**
	 * @param a
	 * @param b
	 */
	public Cylinder(Pos3D a, Pos3D b) {
		this.a = a;
		this.b = b;
	}

	private Pos3D a,b;
	
	public String toString(){
		return "cylinder{"+a+","+b+",diam}";
	}
	

}
