package utils;

public class Point2D {
	protected double x,y;
	

	public Point2D(double x, double y) {
		super();
		this.x = x;
		this.y = y;
	}

	public Point2D(Point2D a, Point2D b, double usurl) {
		this.x=a.getX()*usurl+b.getX()*(1-usurl); 
		this.y=a.getY()*usurl+b.getY()*(1-usurl); 
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

	/* (non-Javadoc)
	 * @see java.lang.Object#hashCode()
	 */
	@Override
	public int hashCode() {
		final int PRIME = 31;
		int result = 1;
		long temp;
		temp = Double.doubleToLongBits(x);
		result = PRIME * result + (int) (temp ^ (temp >>> 32));
		temp = Double.doubleToLongBits(y);
		result = PRIME * result + (int) (temp ^ (temp >>> 32));
		return result;
	}

	/* (non-Javadoc)
	 * @see java.lang.Object#equals(java.lang.Object)
	 */
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		final Point2D other = (Point2D) obj;
		if (Double.doubleToLongBits(x) != Double.doubleToLongBits(other.x))
			return false;
		if (Double.doubleToLongBits(y) != Double.doubleToLongBits(other.y))
			return false;
		return true;
	} 
	public static double distance(Point2D x1,Point2D x2){
		return Math.sqrt((x1.x-x2.x)*(x1.x-x2.x)+(x1.y-x2.y)*(x1.y-x2.y));
	}
	
	public double distance(Point2D z){
			return Math.sqrt((x-z.x)*(x-z.x)+(y-z.y)*(y-z.y));
	}
	public String toString(){
		return "("+x+","+y+")"; 
	}
	public String toPovray(){
		return "<"+x+","+"0,"+y+">"; 
	}
	
}
