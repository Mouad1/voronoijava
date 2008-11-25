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
		return new Double(this.yEvent.getYcoord()).compareTo(o.yEvent.getYcoord()); 
	}

	public String toString(){
		return yEvent.toString(); 
	}
	
}
