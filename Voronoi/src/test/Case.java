/*
 * Created on 30 sept. 2003
 *
 */
package laby.labyrinthe;

import java.util.*;

import laby.entites.*;
/**
 * @author <a href="mailto:routier@lifl.fr">JC Routier</a>
 *
 */
public class Case {

	// associe Direction->Case
	private Map<Direction,Case> neighbours;

	private Position position;

	private boolean visited;

	/** les livings situ�s sur cette case */
	private List<Living> livings;
	/** les thingss situ�s sur cette case */
	private List<Thing> things;

	/** cr�e une case pour la position donn�e, initialement non vue
	 * @param position la position de la case
	 */
	public Case(Position position) {
		this.visited = false;
		this.position = position;
		this.neighbours = new HashMap<Direction,Case>();
		this.livings = new LinkedList<Living>();
		this.things = new LinkedList<Thing>();
	}

	public boolean isVisited() {
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

	/** renvoie le voisin dans la direction donn�e (<t>null</t> si aucun)
	 * @param direction la direction du voisin cherch�
	 * @return le voisin dans la direction donn�e (<t>null</t> si aucun)
	 */
	public Case getNeighbour(Direction direction) {
		return this.neighbours.get(direction);
	}

	public void addNeighbour(Direction direction, Case neighbour) {
		this.neighbours.put(direction, neighbour);
	}

	/**
	 * @return
	 */
	public List<Living> getLivings() {
		return livings;
	}

	/**
		 * @param list
		 */
	public void addLiving(Living living) {
		this.livings.add(living);
	}

	/**
		 * @param list
		 */
	public void removeLiving(Living living) {
		this.livings.remove(living);
	}

	/**
		 * @return
		 */
	public List<Thing> getThings() {
		return things;
	}

	/**
		 * @param list
		 */
	public void addThing(Thing thing) {
		this.things.add(thing);
	}

	/**
		 * @param list
		 */
	public void removeThing(Thing thing) {
		this.things.remove(thing);
	}
	/** retourne une description de cette case (les voisins, les livings, etc. )
	 *
	 *@ return 
	*/
	public String getDescription() {
		String result = "vous �tes " + this.toString() + "\n ici se trouve  : \n";
		for (Living living : this.livings) {
			result = result + "          " + living.toString() + " \n";
		}
		for (Thing thing  :this.things) {
			result = result + "          " + thing.toString() + " \n";
		}
		result = result + "autour c'est :\n";
		for (Direction direction : neighbours.keySet()) {			
			result = result + "          " + direction + " : " + neighbours.get(direction) + "\n";
		}
		return result;
	}

	public String toString() {
		return "case " + this.position.toString();
	}
	

}
