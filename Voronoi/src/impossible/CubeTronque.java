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
	
	protected void makeFaces(int i0,int i1,int i2,int i3,int i4,int col){
		makeFaces(i0,i1,i2,i3,col); 
		faces.add(new Face(i0,i3,i4,col)); 
	}
	
	protected void setFaces(){
		makeFaces(6,7,3,2,0); 
		makeFaces(0,1,3,2,1);
		makeFaces(0,8,9,6,2,2); 
		makeFaces(1,11,10,7,3,2); 
		makeFaces(8,9,10,11,1);
		makeFaces(9,10,7,6,1); 
		makeFaces(0,1,11,8,0);
	}
	
	
	public String toMesh2(){
		String s="union{\n"; 
		s+="mesh2{\n vertex_vectors{\n"+vertices.size()+",\n"; 
		for(int i=0;i<vertices.size()-1;i++)
			s+=Pos3D.add(vertices.get(i),this.center)+",\n";
		s+=Pos3D.add(vertices.get(vertices.size()-1),this.center)+"\n}"+"\n";
		s+="texture_list{\n"; 
		s+="3,\n"+"texture{T0},texture{T1},texture{T2} } \n";
		s+="face_indices{\n"+faces.size()+",\n"; 
		for(int i=0;i<faces.size()-1;i++)
			s+=faces.get(i)+",\n"; 
		s+=faces.get(faces.size()-1)+"}\n inside_vector <1,1,1>\n}";
		s+="cylinder{"+Pos3D.add(vertices.get(6),this.center)+","+Pos3D.add(vertices.get(9),this.center)+",0.01*"+sidex
						+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(7),this.center)+","+Pos3D.add(vertices.get(10),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(0),this.center)+","+Pos3D.add(vertices.get(2),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(2),this.center)+","+Pos3D.add(vertices.get(3),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(6),this.center)+","+Pos3D.add(vertices.get(7),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(6),this.center)+","+Pos3D.add(vertices.get(2),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(7),this.center)+","+Pos3D.add(vertices.get(3),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		
		s+="cylinder{"+Pos3D.add(vertices.get(8),this.center)+","+Pos3D.add(vertices.get(11),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(9),this.center)+","+Pos3D.add(vertices.get(10),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(8),this.center)+","+Pos3D.add(vertices.get(9),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(0),this.center)+","+Pos3D.add(vertices.get(8),this.center)+",0.01*"+sidex
		+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		
		
		
		
		
		
		
		
		
		s+="}";
	
		return s; 
	}
	
	

}
