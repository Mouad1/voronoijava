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
	
	/** retourne la (valeur approchée entière) distance euclidienne avec la position donnée
	 * 
	 * @param p position référence
	 * @return la distance euclidienne avec la position référence
	 */
	public int distance(Position p) {
		return (int) Math.sqrt((this.x - p.x)*(this.x - p.x) + (this.y - p.y)*(this.y-p.y)); 
	}
}
