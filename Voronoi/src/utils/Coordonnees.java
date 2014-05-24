/* Couple d'entiers pour les coordonnees des points parcourus par un golygone, afin de voir les lignes qui se recoupent
  */
package utils;
/* @author francesco
 *
 */

public class Coordonnees {
	private int x,y;

	public Coordonnees(int x, int y) {
		super();
		this.x = x;
		this.y = y;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + x;
		result = prime * result + y;
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Coordonnees other = (Coordonnees) obj;
		if (x != other.x)
			return false;
		if (y != other.y)
			return false;
		return true;
	} 
	
	@Override
	public String toString() {
		return x+" "+y; 
	}

}
