/*
 * Created on 30 sept. 2003
 *
 */
package laby.labyrinthe;

/**
 * @author <a href="mailto:routier@lifl.fr">JC Routier</a>
 *
 */
public enum Direction {
	
	Nord( 0 , -1),Sud( 0, 1),Ouest(  -1, 0),Est(  1, 0);
			
	/** la direction oppos�e � celle-ci */
	private Direction opposite;
	/** le d�calage horizontal correspondant � cette direction */
	private int shiftX;

	/** le d�calage vertical correspondant � cette direction */
	private int shiftY;

	/**
	 * 
	 */
	private Direction(int shiftX, int shiftY) {
		this.shiftX = shiftX;
		this.shiftY = shiftY;		
	}

	static {
		Nord.opposite = Sud;
		Sud.opposite = Nord;
		Est.opposite = Ouest;
		Ouest.opposite = Est;
	}		

	public int getShiftX() {
		return shiftX;
	}

	
	public int getShiftY() {
		return shiftY;
	}

	private static java.util.Random alea = new java.util.Random(System.currentTimeMillis());

	public static Direction[] shuffleAllDirections() {
		Direction[] result = Direction.values();
		for (int i = 0; i < result.length; i++ ) {
			result[i] = Direction.values()[i];
		}		
		for(int i = result.length-1; i > 0; i--) {
			int rand = Math.abs(alea.nextInt()) % (i+1);
			Direction tmp = result[rand];
			result[rand] = result[i];
			result[i] = tmp;
		}
		return result;
	}
	
	public Direction getOpposite() {
		return this.opposite;
	}

	

}
