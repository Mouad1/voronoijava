package utils;

public class Segment {
	/**
	 * @param a
	 * @param b
	 */
	public Segment(Point a, Point b) {
		A = a;
		B = b;
	}

	private Point A,B; 
	
	public Point get(int i){
		if(i==0) return A;
		return B; 
	}
	
	public String dessin(){
		return  "drawLine("+A.getX()+","+A.getY()+","+B.getX()+","+B.getY()+");\n";
	}
	public String toString(){
		return A+"/"+B; 
	}
	public String lesX(){
		return "{"+A.getX()+","+B.getX()+"}"; 
	}
	public String lesY(){
		return "{"+A.getY()+","+B.getY()+"}"; 
	}
	
}
