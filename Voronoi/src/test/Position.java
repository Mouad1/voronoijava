/*
 * Created on 30 sept. 2003
 *
 */
package laby.labyrinthe;

/**
 * @author <a href="mailto:routier@lifl.fr">JC Routier</a>
 *
 */
public class Position {

	public final int x;

	public final int y;

	/**
	 * 
	 */
	public Position(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public boolean equals(Object o) {
		if (! (o instanceof Position)) {
			return false;
		}
		else {
			Position other = (Position) o;
			return (other.x == this.x) && (other.y == this.y);
		}
	}

	public String toString() {
		return "("+this.x+","+this.y+")";		
	}
	
	/** retourne la (valeur approch�e enti�re) distance euclidienne avec la position donn�e
	 * 
	 * @param p position r�f�rence
	 * @return la distance euclidienne avec la position r�f�rence
	 */
	public int distance(Position p) {
		return (int) Math.sqrt((this.x - p.x)*(this.x - p.x) + (this.y - p.y)*(this.y-p.y)); 
	}
}
