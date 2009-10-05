package utils;

public class Pos3D {
	
	protected double x,y,z;
	/**
	 * @param x
	 * @param y
	 * @param z
	 */
	public Pos3D(double x, double y, double z) {
		this.x = x;
		this.y = y;
		this.z = z;
	}

	public static Pos3D add(Pos3D a,Pos3D b){
		Pos3D resu=new Pos3D(a.x+b.x,a.y+b.y,a.z+b.z);
		return resu; 
	}
	
	public static Pos3D mul(Pos3D a,double m){
		return new Pos3D(a.x*m,a.y*m,a.z*m); 
	}

	/**
	 * @return the x
	 */
	public double getX() {
		return x;
	}

	/**
	 * @param x the x to set
	 */
	public void setX(double x) {
		this.x = x;
	}

	/**
	 * @return the y
	 */
	public double getY() {
		return y;
	}

	/**
	 * @param y the y to set
	 */
	public void setY(double y) {
		this.y = y;
	}

	/**
	 * @return the z
	 */
	public double getZ() {
		return z;
	}

	/**
	 * @param z the z to set
	 */
	public void setZ(double z) {
		this.z = z;
	} 
	public String toString(){
		return "<"+x+","+y+","+z+">"; 
	}
	public  static double distance(Pos3D u,Pos3D v){
		double resu=0;
		resu=(u.x-v.x)*(u.x-v.x); 
		resu+=(u.y-v.y)*(u.y-v.y);
		resu+=(u.z-v.z)*(u.z-v.z);
		return Math.sqrt(resu); 
	}

	public static Pos3D sub(Pos3D v1,Pos3D v2){
		return new Pos3D(v1.x-v2.x,v1.y-v2.y,v1.z-v2.z); 
	}
}
