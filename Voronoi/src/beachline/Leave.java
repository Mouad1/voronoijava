/**
 * 
 */
package beachline;

import events.Event;
import events.Site;

/**
 * A parabolic arc on the beach line
 * 
 * @author decomite
 *
 */
public class Leave extends Composant{
	private Event p;
	private Leave pred=null, succ=null;
	
	public Leave(Event p,boolean isLeft,InternalNode f){
		this.p=p;
		this.isLeftSon=isLeft;
		this.father=f;
		if(f!=null){
			if (isLeft) f.setFLeft(this); 
				else f.setFRight(this);
		}
	}
	/**
	 * @return the p
	 */
	public Site getPsite() {
		return p.getYSite();
	}
	
	public Event getEvent(){return this.p;}
	
	
	
	private String miniString(){
		return "("+p.getYSite().toString()+")"; 
	}

	public String toString(){
		String s="Leave "+p.getYEvent();
		if(pred!=null)
			s+="\t Pred "+pred.miniString();
		if(succ!=null)
			s+="\t Succ "+succ.miniString(); 
		return s; 
	}
	/**
	 * @return the pred
	 */
	public Leave getPred() {
		return pred;
	}
	/**
	 * @param pred the pred to set
	 */
	public void setPred(Leave pred) {
		this.pred = pred;
	}
	/**
	 * @return the succ
	 */
	public Leave getSucc() {
		return succ;
	}
	/**
	 * @param succ the succ to set
	 */
	public void setSucc(Leave succ) {
		this.succ = succ;
	}
	
	
	

}
