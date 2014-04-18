package utils;

import java.text.DecimalFormat;

public class Pos3D {
	public static final Pos3D ZERO=new Pos3D(0,0,0); 
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		long temp;
		temp = Double.doubleToLongBits(x);
		result = prime * result + (int) (temp ^ (temp >>> 32));
		temp = Double.doubleToLongBits(y);
		result = prime * result + (int) (temp ^ (temp >>> 32));
		temp = Double.doubleToLongBits(z);
		result = prime * result + (int) (temp ^ (temp >>> 32));
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
		Pos3D other = (Pos3D) obj;
		if (Double.doubleToLongBits(x) != Double.doubleToLongBits(other.x))
			return false;
		if (Double.doubleToLongBits(y) != Double.doubleToLongBits(other.y))
			return false;
		if (Double.doubleToLongBits(z) != Double.doubleToLongBits(other.z))
			return false;
		return true;
	}

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
	


	public Pos3D(Pos3D pos3d) {
		this.x=pos3d.x; 
		this.y=pos3d.y; 
		this.z=pos3d.z; 
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
	
	private static String roundDecimals(double d) {
    	DecimalFormat twoDForm = new DecimalFormat("#,########");
    	return String.format("%.7g", d);
}
	
	public String toStringRestrict(){
		return "<"+roundDecimals(x)+","+roundDecimals(y)+","+roundDecimals(z)+">"; 
	}
	
	public String toString(){
		return "<"+x+","+y+","+z+">"; 
	}
	
	public String forBlender(){
		return x+","+y+","+z; 
	}
	
	public String forBlenderSpace(){
		return x+" "+y+" "+z; 
	}
	
	public String forBlenderTwistYZ(){
		return x+","+z+","+y; 
	}
	public String forBlenderTwistYZSpace(){
		return x+" "+z+" "+y; 
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
	
	
	public static Pos3D middle(Pos3D a,Pos3D b){
		Pos3D m=new Pos3D((a.x+b.x)/2.0,(a.y+b.y)/2.0,(a.z+b.z)/2.0);
		return m;
	}
	// coef=0 -> v1 coef=1 -> v2
	public static Pos3D barycenter(Pos3D v1,Pos3D v2,double coef){
		return Pos3D.add(Pos3D.mul(v1, 1-coef), Pos3D.mul(v2,coef)); 
		
	}
	
	public double norme(){
		return Math.sqrt(x*x+y*y+z*z); 
	}
	
}
