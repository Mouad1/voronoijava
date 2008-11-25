/**
 * 
 */
package beachline;

import events.Site;

/**
 * @author decomite
 *
 */
public class InternalNode implements Composant {
	private Site pLeft,pRight; 
	private Composant fleft,fRight; 
	private static double Epsilon=1e-6; 
	
	/* Compute the x-coordinate of the breakpoint from pLeft,PRight,ycoord 
	 * 
	 *(the position of the sweep line)
	 */
	public double getX(double y0){
		double y1=pLeft.getYcoord(); 
		double y2=pRight.getYcoord(); 
		double d1=0.5/(y1-y0); 
		double d2=0.5/(y2-y0); 
		double A=d2-d1;
		if(A==0.0) A=Epsilon; 
		System.out.println(A); 
		double Bp=y1*d1-y2*d2;
		double C=pRight.getSqNorm()/d2-pLeft.getSqNorm()/d1;
		C+=y0*y0*(d2-d1); 
		double deltaP=Bp*Bp-A*C;
		double r1=(-Bp-Math.sqrt(deltaP))/A;
		double r2=(-Bp+Math.sqrt(deltaP))/A;
		System.out.println(r1+" "+r2); 
		if((r1>=pLeft.getXcoord())&&(r1<=pRight.getXcoord())) return r1; 
		else return r2; 
	}

	/**
	 * @param left
	 * @param right
	 */
	public InternalNode(Site left, Site right) {
		pLeft = left;
		pRight = right;
	}
	
	

}
