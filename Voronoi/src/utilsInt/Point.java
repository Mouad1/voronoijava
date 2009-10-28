package utilsInt;

public class Point {

		/**
	 * @param x
	 * @param y
	 */
	public Point(int x, int y) {
		this.x = x;
		this.y = y;
	}

		private int x,y;

		/**
		 * @return the x
		 */
		public int getX() {
			return x;
		}

		/**
		 * @return the y
		 */
		public int getY() {
			return y;
		} 
		public String toString(){
			return x+","+y; 
		}
		
		public String affiche(){
			return "new Point("+x+","+y+");"; 
		}
}
