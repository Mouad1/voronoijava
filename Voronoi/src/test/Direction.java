/*
 * Created on 30 sept. 2003
 *
 */
package test;
//essai
/**
 * @author <a href="mailto:routier@lifl.fr">JC Routier</a>
 *
 */
public enum Direction {
	
	Nord( 0 , -1,0),Sud( 0, 1,0),Ouest(  -1, 0,0),Est(  1, 0,0),
	Up(0,0,-1),Down(0,0,1),

	UNW(-1,-1,-1),UNE(1,-1,-1),USE(1,1,-1),USW(-1,1,-1),
	DSE(1,1,1),DSW(-1,1,1),DNW(-1,-1,1),DNE(1,-1,1),
	NE(1,-1,0),NW(-1,-1,0),SE(1,1,0),SW(-1,1,0),
	NU(0,-1,-1),ND(0,-1,1),SU(0,1,-1),SD(0,1,1),
	WU(-1,0,-1),WD(-1,0,1),EU(1,0,-1),ED(1,0,1)
	
	;
			
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
		
		UNW.opposite=DSE; 
		UNE.opposite=DSW; 
		USE.opposite=DNW;
		USW.opposite=DNE; 
		DSE.opposite=UNW; 
		DSW.opposite=UNE;
		DNW.opposite=USE;
		DNE.opposite=USW; 
		NE.opposite=SW; 
		NW.opposite=SE; 
		SE.opposite=NW;
		SW.opposite=NE;
		NU.opposite=SD;
		ND.opposite=SU;
		SU.opposite=ND;
		SD.opposite=NU;
		WU.opposite=ED;
		WD.opposite=EU;
		EU.opposite=WD;
		ED.opposite=WU;
		
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
