package utilsInt;

public class Triangle {
	
	private final static double r2=1; 
	/**
	 * @param a
	 * @param b
	 * @param c
	 */
	public Triangle(Point a, Point b, Point c) {
		A = a;
		B = b;
		C = c;
	}

	private Point A,B,C;
	private static int size; 
	
	public Point get(int i){
		switch(i){
		case 0 : return A; 
		case 1: return B; 
		case 2: return C;
		default : return null; 
		}
		
	}

	/**
	 * @return the a
	 */
	public Point getA() {
		return A;
	}

	/**
	 * @return the b
	 */
	public Point getB() {
		return B;
	}

	/**
	 * @return the c
	 */
	public Point getC() {
		return C;
	} 
	
	public String toString(){
		return A+"/"+B+"/"+C; 
	}

	private double getX(Point u){
		return u.getX()/(size+0.0)*r2; 
	}
	private double getY(Point u){
		return u.getY()/(size+0.0)*r2; 
	}
	
	public String dessin(){
		String s="drawLine("+getX(A)+","+getY(A)+","+getX(B)+","+getY(B)+");\n";
		s+="drawLine("+getX(A)+","+getY(A)+","+getX(C)+","+getY(C)+");\n";
		s+="drawLine("+getX(C)+","+getY(C)+","+getX(B)+","+getY(B)+");\n";
		return s;
	}
	public String lesX(){
		return "{"+getX(A)+","+getX(B)+","+getX(C)+"}"; 
	}
	public String lesY(){
		return "{"+getY(A)+","+getY(B)+","+getY(C)+"}"; 
	}
	
	public static void setSize(int i){size=i; }
}
