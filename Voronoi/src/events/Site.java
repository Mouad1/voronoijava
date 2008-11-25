package events;

public class Site implements Comparable<Site>{
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

	/* (non-Javadoc)
	 * @see java.lang.Object#hashCode()
	 */
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		long temp;
		temp = Double.doubleToLongBits(xcoord);
		result = prime * result + (int) (temp ^ (temp >>> 32));
		temp = Double.doubleToLongBits(ycoord);
		result = prime * result + (int) (temp ^ (temp >>> 32));
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
		final Site other = (Site) obj;
		if (Double.doubleToLongBits(xcoord) != Double
				.doubleToLongBits(other.xcoord))
			return false;
		if (Double.doubleToLongBits(ycoord) != Double
				.doubleToLongBits(other.ycoord))
			return false;
		return true;
	}

	@Override
	public int compareTo(Site o) {
		int cy=new Double(o.getYcoord()).compareTo(this.getYcoord()); 
		if(cy!=0) return cy; 
		return new Double(o.getXcoord()).compareTo(this.getXcoord()); 
	}

}
