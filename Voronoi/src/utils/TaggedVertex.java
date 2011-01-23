package utils;

public class TaggedVertex extends Vertex {
	private boolean tag=false; 
	public TaggedVertex(double x, double y, double z) {
		super(x, y, z);
		this.tag=true; 
		// TODO Auto-generated constructor stub
	}

	public TaggedVertex(Pos3D a) {
		super(a);
		this.tag=true; 
		// TODO Auto-generated constructor stub
	}
	public TaggedVertex(double x, double y, double z,boolean t) {
		super(x, y, z);
		this.tag=t; 
		// TODO Auto-generated constructor stub
	}
	public TaggedVertex(Pos3D a,boolean t) {
		super(a);
		this.tag=t; 
		// TODO Auto-generated constructor stub
	}
	
	public boolean isTagged(){return this.tag; }
}
