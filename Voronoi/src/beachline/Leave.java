/**
 * 
 */
package beachline;

import events.Site;

/**
 * A parabolic arc on the beach line
 * 
 * @author decomite
 *
 */
public class Leave extends Composant{
	private Site p;
	public Leave(Site p,boolean isLeft,InternalNode f){
		this.p=p;
		this.isLeftSon=isLeft;
		this.father=f;
		if (isLeft) f.setFLeft(this); else f.setFRight(this); 
	}
	/**
	 * @return the p
	 */
	public Site getP() {
		return p;
	}
	

}
