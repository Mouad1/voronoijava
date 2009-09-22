/**
 * 
 */
package events;

import beachline.Leave;

/**
 * @author decomite
 *
 */
public class SiteEvent extends Event {

	/* (non-Javadoc)
	 * @see events.Event#handle()
	 */
	
	public SiteEvent(Site p){this.ySite=p; }
	
	public void handle() {
		if(BL.isEmpty()){
			/*
			BL.placeLeave(this.ySite, this.getY());
			*/ 
			return;
		}
		Leave alpha=BL.findLeave(this.ySite, this.getY()); 
		if(alpha.getEvent() instanceof CircleEvent){
			//TODO  : delete this circle event from Q
		}
		Leave central=BL.replaceLeave(alpha, this.ySite); 
		// TODO : Point 4 : create new 1/2 edges records
		// check for a new circle event where p is the left arc
		if((central.getSucc()!=null)&&(central.getSucc().getSucc()!=null)){
			Site p1=this.ySite; 
			Site p2=central.getSucc().getPsite(); 
			Site p3=central.getSucc().getSucc().getPsite(); 
			// TODO : what about y0, the height of the sweep line ?????
		}
		
		return; 
	}

	public String toString(){return "Site Event "+super.toString(); }
}
