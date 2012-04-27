/*
 * Created on 30 sept. 2003
 *
 */
package test;

import java.util.*;


/**
 * @author <a href="mailto:routier@lifl.fr">JC Routier</a>
 *
 */
public class Case {

	// associe Direction->Case
	private Map<Direction,Case> neighbours;

	private Position position;

	private boolean visited;
	
	private static int nbVisited=0;

	
	/** cree une case pour la position donnee, initialement non vue
	 * @param position la position de la case
	 */
	public Case(Position position) {
		this.visited = false;
		this.position = position;
		this.neighbours = new HashMap<Direction,Case>();
		
	}

	public boolean isVisited() {
		nbVisited++; 
		System.out.println(nbVisited);
		return this.visited;
	}

	public void visit() {
		this.visited = true;
	}

	public void notVisited() {
		this.visited = false;
	}

	public Map<Direction,Case> getNeighbours() {
		return neighbours;
	}

	public void setNeighbours(Map<Direction,Case> neighbours) {
		this.neighbours = neighbours;
	}

	public Position getPosition() {
		return position;
	}

	/** renvoie le voisin dans la direction donnee (<t>null</t> si aucun)
	 * @param direction la direction du voisin cherche
	 * @return le voisin dans la direction donnee (<t>null</t> si aucun)
	 */
	public Case getNeighbour(Direction direction) {
		return this.neighbours.get(direction);
	}

	public void addNeighbour(Direction direction, Case neighbour) {
		this.neighbours.put(direction, neighbour);
	}

	public void remove(Direction d){
		this.neighbours.remove(d);
	}
	public String toString() {
		return "case " + this.position.toString();
	}
	

}
