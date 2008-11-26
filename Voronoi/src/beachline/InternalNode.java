/**
 * 
 */
package beachline;

import events.Site;

/**
 * @author decomite
 *
 */
public class InternalNode extends Composant {
	private Site pLeft,pRight; 
	private Composant fLeft,fRight; 
	
	
	public InternalNode(Site p1,Site p2,boolean left,InternalNode fat){
		pLeft=p1;
		pRight=p2; 
		isLeftSon=left; 
		father=fat; 
	}
	
	/* Compute the x-coordinate of the breakpoint from pLeft,PRight,ycoord 
	 * 
	 *(the position of the sweep line)
	 */
	public double getX(double y0){
		double y1=pLeft.getYcoord(); 
		double y2=pRight.getYcoord(); 
		double x1=pLeft.getXcoord(); 
		double x2=pRight.getXcoord(); 
		double d1=0.5/(y1-y0); 
		double d2=0.5/(y2-y0); 
		double A=d2-d1; 
		System.out.println(A); 
		double Bp=x1*d1-x2*d2;
		System.out.println(Bp); 
		double C=pRight.getSqNorm()*d2-pLeft.getSqNorm()*d1;
		C+=y0*y0*(d1-d2); 
		System.out.println(C);
		if(A==0) return -C/(2*Bp);
		double deltaP=Bp*Bp-A*C;
		double r1=(-Bp-Math.sqrt(deltaP))/A;
		double r2=(-Bp+Math.sqrt(deltaP))/A;
		System.out.println(r1+" "+r2); 
		if((r1>=pLeft.getXcoord())&&(r1<=pRight.getXcoord())) return r1; 
		else return r2; 
		// TODO : verifier que les point d'intersection des paraboles sont bien equidistants de trois trucs
		// TODO : comment choisir entre les deux points d'intersection ? 
	}

	/**
	 * @param left
	 * @param right
	 */
	public InternalNode(Site left, Site right) {
		pLeft = left;
		pRight = right;
	}

	/**
	 * @param fleft the fleft to set
	 */
	public void setFLeft(Composant fleft) {
		this.fLeft = fleft;
	}

	/**
	 * @param right the fRight to set
	 */
	public void setFRight(Composant right) {
		fRight = right;
	}

	/**
	 * @return the fLeft
	 */
	public Composant getFLeft() {
		return fLeft;
	}

	/**
	 * @return the fRight
	 */
	public Composant getFRight() {
		return fRight;
	}

	/**
	 * @return the pLeft
	 */
	public Site getPLeft() {
		return pLeft;
	}

	/**
	 * @return the pRight
	 */
	public Site getPRight() {
		return pRight;
	}
	
	

}
