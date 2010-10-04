package utils;

import pluginUtils.Point2D;

public class Point {

		/**
	 * @param x
	 * @param y
	 */
	public Point(double x, double y) {
		this.x = x;
		this.y = y;
	}

		private double x,y;

		/**
		 * @return the x
		 */
		public double getX() {
			return x;
		}

		/**
		 * @return the y
		 */
		public double getY() {
			return y;
		} 
		public String toString(){
			return x+","+y; 
		}
		
	
		
		public double distance(Point z){
				return Math.sqrt((x-z.x)*(x-z.x)+(y-z.y)*(y-z.y));
		}
		
		public String affiche(){
			return "new Point("+x+","+y+");"; 
		}

		
		public static double distance(Point a,Point b){
			return Math.sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)); 
		}

}
