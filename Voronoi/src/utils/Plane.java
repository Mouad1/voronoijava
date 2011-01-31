package utils;

public class Plane {
	// ax+by+cz+d=0
	private double a,b,c,d; 
	
	public Plane(double x,double y,double z,double t){
		this.a=x; 
		this.b=y;
		this.c=z; 
		this.d=t; 
	}
	
	static public Plane computePlane(Pos3D X, Pos3D Y, Pos3D Z){
		// vecteur XY
		Pos3D vec1=new Pos3D(Y.x-X.x,Y.y-X.y,Y.z-X.z); 
		//vecteur XZ
		Pos3D vec2=new Pos3D(Z.x-X.x,Z.y-X.y,Z.z-X.z);
		double rx=vec1.y*vec2.z-vec1.z*vec2.y; 
		double ry=-(vec1.x*vec2.z-vec1.z*vec2.x);
		double rz=vec1.x*vec2.y-vec1.y*vec2.x; 
		double rd=rx*X.x+ry*X.y+rz*X.z; 
		return new Plane(rx,ry,rz,-rd); 
	}
	
	public double relative(Pos3D X){
		return a*X.x+b*X.y+c*X.z+d; 
	}
	
	public String toString(){
		return a+"X+"+b+"Y+"+c+"Z+"+d+"=0"; 
	}
	
	public static void main(String[] args) {
		Pos3D X=new Pos3D(1,0,0); 
		Pos3D Y=new Pos3D(0,1,0); 
		Pos3D Z=new Pos3D(0,0,1);
		Plane p=computePlane(X,Y,Z); 
		System.out.println(p); 
		System.out.println(p.relative(X)); 
		System.out.println(p.relative(Y)); 
		System.out.println(p.relative(Z)); 
		
	}

}
