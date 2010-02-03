/*
 * Created on 30 sept. 2003
 *
 */
package test;

/**
 * @author <a href="mailto:routier@lifl.fr">JC Routier</a>
 *
 */
public class Position {

	public final int x;

	public final int y;
	
	public final int z; 

	/**
	 * 
	 */
	public Position(int x, int y,int z) {
		this.x = x;
		this.y = y;
		this.z=z; 
	}
	
	public boolean equals(Object o) {
		if (! (o instanceof Position)) {
			return false;
		}
		else {
			Position other = (Position) o;
			return (other.x == this.x) && (other.y == this.y)&&(other.z==this.z);
		}
	}

	public String toString() {
		return "("+this.x+","+this.y+","+this.z+")";		
	}
	
	
	
}
