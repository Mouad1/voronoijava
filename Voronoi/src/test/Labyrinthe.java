/*
 * Created on 30 sept. 2003
 *
 */
package laby.labyrinthe;

import java.util.*;

import laby.afficheur.AfficheurTexte;
/**
 * @author <a href="mailto:routier@lifl.fr">JC Routier</a>
 *
 */
public class Labyrinthe {

	private Case[][] laby;

	private int width;

	private int height;

	/**
	 * 
	 */
	public Labyrinthe(int width, int height) {
		this.width = width;
		this.height = height;
		this.laby = new Case[height][width];
	}

	public int getWidth() {
		return width;
	}

	public int getHeight() {
		return height;
	}

	public Case getCaseAt(Position position) {
		return laby[position.x][position.y];
	}
	public Case getCaseAt(int x, int y) {
		return laby[x][y];
	}

	/** pour la case courante, pour chaque voisin "non vu", on va vers ce voisin, donc cr�ation des liaisons, 
	 * et on y applique le m�me processus r�cursivement. Si il n'y a pas de voisin non vu on revient au dernier
	 * voisin laiss� en attente (backtrack g�rer par r�cursivit�)
	*/
	public void generate() {
		// on remplit de cases non li�es
		for (int i = 0; i < this.width; i++) {
			for (int j = 0; j < this.height; j++) {
				laby[i][j] = new Case(new Position(i, j));
			}
		}
		// on choisit une case de d�part
		Random alea = new Random(System.currentTimeMillis());
		int startX = Math.abs(alea.nextInt()) % this.width;
		int startY = Math.abs(alea.nextInt()) % this.height;
		// et on la visite 
		visit(startX, startY);
	}

	/** on visite la case de coordonn�es x et y et on cherhce � aller vers ses voisins (si non vus)
	 * @param x x courant
	 * @param y y courant
	 */
	private void visit(int x, int y) {
		// visit�e donc vue
		laby[x][y].visit();
		// on parcourt les 4 cases autour pour trouver les "not seen" 
		Direction[] allDirections = Direction.shuffleAllDirections();
		for (int dir = 0; dir < allDirections.length; dir++) {
			testDirection(allDirections[dir], x, y);
		}
	}

	/** test si on peut aller ves le voisin de (x,y) (si existe et non vu) et on le visite (l'appel r�cursif est ici)
	 * @param direction la direction vis�e
	 * @param x x courant
	 * @param y y courant
	 */
	private void testDirection(Direction direction, int x, int y) {
		int dx = direction.getShiftX();
		int dy = direction.getShiftY();
		if ((x + dx >= 0)
			&& (x + dx < this.width)
			&& (y + dy >= 0)
			&& (y + dy < this.height)
			&& !laby[x + dx][y + dy].isVisited()) { // si case voisine non vue
			//	alors on y va, donc on cr�e *les* liaisons
			laby[x][y].addNeighbour(direction, laby[x + dx][y + dy]);
			laby[x + dx][y + dy].addNeighbour(direction.getOpposite(), laby[x][y]);
			// et on la visite
			visit(x + dx, y + dy);
		}
	}


	/** toutes les cases sont positionn�es � "non visit�es"
	 */
	public void notVisited() {
		for (int i = 0; i < this.width; i++) {
			for (int j = 0; j < this.height; j++) {
				laby[i][j].notVisited();
			}
		}
	}

	public static void main(String[] args) {
		Labyrinthe l = new Labyrinthe(20, 20);
		l.generate();
		new AfficheurTexte().affiche(l);
	}

}
