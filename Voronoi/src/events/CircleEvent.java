/**
 * 
 */
package events;

import utils.Determinant3;

/**
 * @author decomite
 *
 */
public class CircleEvent extends Event {
	private Site p1,p2,p3; 
	private Site center; 
	
	private double radius; 

	/**
	 * @param p1
	 * @param p2
	 * @param p3
	 * 
	 * formulae : 
	 * http://mathworld.wolfram.com/Circle.html
	 */
	public CircleEvent(Site p1, Site p2, Site p3) {
		super();
		this.p1 = p1;
		this.p2 = p2;
		this.p3 = p3;
		
		double[][] va={{p1.getXcoord(),p1.getYcoord(),1},
				{p2.getXcoord(),p2.getYcoord(),1},
				{p3.getXcoord(),p3.getYcoord(),1}}; 
		Determinant3 da=new Determinant3(va); 
		double a=da.eval();
		System.out.println("a "+a); 
		double[][] vd={
				{p1.getSqNorm(),p1.getYcoord(),1},
				{p2.getSqNorm(),p2.getYcoord(),1},
				{p3.getSqNorm(),p3.getYcoord(),1}}; 
		Determinant3 dd=new Determinant3(vd);
		double d=-dd.eval();
		System.out.println("d "+d); 
		double[][] ve={
				{p1.getSqNorm(),p1.getXcoord(),1},
				{p2.getSqNorm(),p2.getXcoord(),1},
				{p3.getSqNorm(),p3.getXcoord(),1}}; 
		Determinant3 de=new Determinant3(ve);
		double e=de.eval();
		System.out.println("e "+e);
		double[][] vf={
				{p1.getSqNorm(),p1.getXcoord(),p1.getYcoord()},
				{p2.getSqNorm(),p2.getXcoord(),p2.getYcoord()},
				{p3.getSqNorm(),p3.getXcoord(),p3.getYcoord()}}; 
		Determinant3 df=new Determinant3(vf);
		double f=-df.eval();
		System.out.println("f "+f);
		center =new Site(-d/(2*a),-e/(2*a)); 
		radius=Math.sqrt((d*d+e*e)/(4*a*a)-f/a); 
		this.yEvent=new Site(center.getXcoord(),center.getYcoord()-radius); 
		}


	/* (non-Javadoc)
	 * @see events.Event#handle()
	 */
	
	public void handle() {
		// TODO Auto-generated method stub
		return; 
	}
	
	public String toString(){
		return "Circle event "+super.toString(); 
	}


	/**
	 * @return the center
	 */
	public Site getCenter() {
		return center;
	}


	/**
	 * @return the radius
	 */
	public double getRadius() {
		return radius;
	}
	



}
