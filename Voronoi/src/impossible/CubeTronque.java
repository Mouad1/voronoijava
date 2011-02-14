package impossible;

import utils.Pos3D;

public class CubeTronque extends Cube {
	
	public CubeTronque(double sx,double sy,double sz,Pos3D newAretes[]){
		this.sidex=sx; 
		this.sidey=sy; 
		this.sidez=sz; 
		setVertices(newAretes); 
		setFaces();
	}
	
	public CubeTronque(double sx,double sy,double sz,Pos3D center,Pos3D newAretes[]){
		this.sidex=sx; 
		this.sidey=sy; 
		this.sidez=sz; 
		this.center=center; 
		setVertices(newAretes); 
		setFaces();
	}
	
	protected void setVertices(Pos3D[] tab){
		super.setVertices();
		for(int i=0;i<4;i++) vertices.add(8+i,Pos3D.sub(tab[i],center)); 
	}
	
	protected void makeFaces(int i0,int i1,int i2,int i3,int i4){
		makeFaces(i0,i1,i2,i3); 
		faces.add(new Face(i0,i3,i4)); 
	}
	
	protected void setFaces(){
		makeFaces(6,7,3,2); 
		makeFaces(0,1,3,2);
		makeFaces(0,8,9,6,2); 
		makeFaces(1,11,10,7,3); 
		makeFaces(8,9,10,11);
		makeFaces(9,10,7,6); 
		makeFaces(0,1,11,8);
	}

}
