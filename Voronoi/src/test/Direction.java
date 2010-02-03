/*
 * Created on 30 sept. 2003
 *
 */
package test;

/**
 * @author <a href="mailto:routier@lifl.fr">JC Routier</a>
 *
 */
public enum Direction {
	
	Nord( 0 , -1,0),Sud( 0, 1,0),Ouest(  -1, 0,0),Est(  1, 0,0),Up(0,0,-1),Down(0,0,1);
			
	/** la direction opposee a celle-ci */
	private Direction opposite;
	/** le decalage horizontal correspondant a cette direction */
	private int shiftX;

	/** le decalage vertical correspondant a cette direction */
	private int shiftY;

	private int shiftZ; 
	/**
	 * 
	 */
	private Direction(int shiftX, int shiftY,int shiftZ) {
		this.shiftX = shiftX;
		this.shiftY = shiftY;
		this.shiftZ=shiftZ; 
	}

	static {
		Nord.opposite = Sud;
		Sud.opposite = Nord;
		Est.opposite = Ouest;
		Ouest.opposite = Est;
		Up.opposite=Down; 
		Down.opposite=Up; 
	}		

	public int getShiftX() {
		return shiftX;
	}

	
	public int getShiftY() {
		return shiftY;
	}
	
	public int getShiftZ(){
		return shiftZ; 
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
