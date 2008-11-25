package events;

abstract public class Event implements Comparable<Event> {
	protected Site yEvent; 
	
	public double getY(){return yEvent.getYcoord();}
	
	abstract public void handle(); 
	
	/* (non-Javadoc)
	 * @see java.lang.Comparable#compareTo(java.lang.Object)
	 */
	@Override
	public int compareTo(Event o) {
		return this.yEvent.compareTo(o.yEvent); 
	}

	public String toString(){
		return yEvent.toString(); 
	}

	/* (non-Javadoc)
	 * @see java.lang.Object#hashCode()
	 */
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((yEvent == null) ? 0 : yEvent.hashCode());
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
		if (yEvent == null) {
			if (other.yEvent != null)
				return false;
		} else if (!yEvent.equals(other.yEvent))
			return false;
		return true;
	}
	
	
	
}
