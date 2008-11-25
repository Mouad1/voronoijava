package events;

public class Site {
	private double xcoord,ycoord;

	/**
	 * @return the xcoord
	 */
	public double getXcoord() {
		return xcoord;
	}

	/**
	 * @return the ycoord
	 */
	public double getYcoord() {
		return ycoord;
	}

	/**
	 * @param xcoord
	 * @param ycoord
	 */
	public Site(double xcoord, double ycoord) {
		super();
		this.xcoord = xcoord;
		this.ycoord = ycoord;
	} 
	public String toString(){
		String s="("+xcoord+","+ycoord+")"; 
		return s; 
	}
	
	public double getSqNorm(){
			return xcoord*xcoord+ycoord*ycoord; 
	}

}
