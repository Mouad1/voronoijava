package events;

import beachline.BeachLine;

abstract public class Event implements Comparable<Event> {
	protected Site ySite; 
	protected static  BeachLine BL; 
	
	// All events now knows the beachline they refer to
	public static void setBeachLine(BeachLine bp){Event.BL=bp;}
	
	public double getY(){return ySite.getYcoord();}
	
	abstract public void handle(); 
	
	/* (non-Javadoc)
	 * @see java.lang.Comparable#compareTo(java.lang.Object)
	 */
	
	public int compareTo(Event o) {
		return this.ySite.compareTo(o.ySite); 
	}

	public String toString(){
		return ySite.toString(); 
	}

	/* (non-Javadoc)
	 * @see java.lang.Object#hashCode()
	 */
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((ySite == null) ? 0 : ySite.hashCode());
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
		final Event other = (Event) obj;
		if (ySite == null) {
			if (other.ySite != null)
				return false;
		} else if (!ySite.equals(other.ySite))
			return false;
		return true;
	}

	/**
	 * @return the yEvent
	 */
	public Site getYSite() {
		return ySite;
	}
	
	
	
}
