package utils;

import java.util.ArrayList;

public class DistList {
	private Double dist; 
	private ArrayList<VertexCouple> lesCouples=new ArrayList<VertexCouple>(); 
	
	public DistList(Double d){
		this.dist=d; 
	}
	public int size(){return this.lesCouples.size(); }
	
	public Double getDist() {
		return dist;
	}

	public ArrayList<VertexCouple> getLesCouples() {
		return lesCouples;
	}
	public void add(VertexCouple vc){
		lesCouples.add(vc); 
	}

}
