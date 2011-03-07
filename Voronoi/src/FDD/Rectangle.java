package FDD;

import java.util.Random;

import utils.Point2D;

public class Rectangle {
	private Random gene=new Random();
	
	/**
	 * @param ul
	 * @param ur
	 * @param ll
	 * @param lr
	 */
	protected Rectangle(Point2D ul, Point2D ur, Point2D ll, Point2D lr) {
		this.ul = ul;
		this.ur = ur;
		this.ll = ll;
		this.lr = lr;
	}

	private Point2D ul,ur,ll,lr; 
	
	
	public Point2D generatePoint(){
		double x=ul.getX()+gene.nextDouble()*(ur.getX()-ul.getX()); 
		double y=ll.getY()+gene.nextDouble()*(ul.getY()-ll.getY());
		return new Point2D(x,y); 
	}

}
