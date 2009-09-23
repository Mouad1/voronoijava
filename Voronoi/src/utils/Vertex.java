package utils;

import java.util.HashSet;
import java.util.Iterator;

public class Vertex extends Pos3D {
	private HashSet<Vertex> neighbours=new HashSet<Vertex>();
	private boolean istraced=false; 

	/**
	 * @return the istraced
	 */
	public boolean isIstraced() {
		return istraced;
	}

	/**
	 * @param istraced the istraced to set
	 */
	public void setIstraced(boolean istraced) {
		this.istraced = istraced;
	}

	public Vertex(double x, double y, double z) {
		super(x, y, z);
	}
	
	public void setNeighbour(Vertex v){
		neighbours.add(v); 
	}
	public Iterator<Vertex> getIterator(){
		return neighbours.iterator(); 	
}
	public boolean isNeighbours(Vertex v){
		return neighbours.contains(v);
	}

	public int nbNeighbours() {
		return neighbours.size();
	}
	
	public static Vertex add(Vertex a,Vertex b){
		Vertex resu=new Vertex(a.x+b.x,a.y+b.y,a.z+b.z);
		return resu; 
	}
	
	public static Vertex mul(Vertex a,double m){
		return new Vertex(a.x*m,a.y*m,a.z*m); 
	}
}