/**
 * 
 */
package events;

/**
 * @author decomite
 *
 */
public class SiteEvent extends Event {

	/* (non-Javadoc)
	 * @see events.Event#handle()
	 */
	
	public SiteEvent(Site p){this.yEvent=p; }
	
	public void handle() {
		// TODO Auto-generated method stub
		return; 
	}

	public String toString(){return "Site Event "+super.toString(); }
}
