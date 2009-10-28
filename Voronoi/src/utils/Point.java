package utils;

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
		
		public String affiche(){
			return "new Point("+x+","+y+");"; 
		}
}
