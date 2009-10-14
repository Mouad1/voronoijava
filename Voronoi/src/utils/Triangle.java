package utils;

public class Triangle {
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

}
