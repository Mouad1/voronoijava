package impossible;

import java.util.ArrayList;

import utils.Pos3D;

// un cube de base, pour construire des cubes tronques

public class Cube {
	
	protected Pos3D center=new Pos3D(0,0,0);
	// taille du cote
	protected double sidex,sidey,sidez;
	
	
	protected ArrayList<Pos3D> vertices=new ArrayList<Pos3D>(); 
	protected ArrayList<Face> faces=new ArrayList<Face>();
	
	protected void makeFaces(int i,int j,int k,int l,int color){
		Pos3D mid1=Pos3D.middle(vertices.get(i),vertices.get(j));
		Pos3D mid2=Pos3D.middle(vertices.get(k),vertices.get(l));
		Pos3D mid=Pos3D.middle(mid1,mid2); 
		int indice=vertices.size();
		vertices.add(mid);
		faces.add(new Face(i,j,indice,color));
		faces.add(new Face(j,k,indice,color));
		faces.add(new Face(k,l,indice,color));
		faces.add(new Face(l,i,indice,color));
		
	}
	
	protected void setVertices(){
		vertices.add(0,new Pos3D(-sidex,-sidey,-sidez)); 
		vertices.add(1,new Pos3D(-sidex,-sidey,sidez));
		vertices.add(2,new Pos3D(-sidex,sidey,-sidez)); 
		vertices.add(3,new Pos3D(-sidex,sidey,sidez)); 
		vertices.add(4,new Pos3D(sidex,-sidey,-sidez)); 
		vertices.add(5,new Pos3D(sidex,-sidey,sidez)); 
		vertices.add(6,new Pos3D(sidex,sidey,-sidez)); 
		vertices.add(7,new Pos3D(sidex,sidey,sidez)); 
	}
	
	
	
	public Pos3D getVertex(int i){return Pos3D.add(vertices.get(i),center);}
	
	
	public Cube(){}
	
	public Cube(double sx,double sy,double sz){
		this.sidex=sx;
		this.sidey=sy; 
		this.sidez=sz; 
		
		setVertices(); 
		setFaces(); 
	}
	
	
	protected void setFaces(){
		makeFaces(0,1,3,2,1); 
		makeFaces(0,4,6,2,2); 
		makeFaces(0,1,5,4,0); 
		makeFaces(4,6,7,5,1);
		makeFaces(3,7,5,1,2); 
		makeFaces(2,6,7,3,0); 
	}
	
	
	public Cube(double sx,double sy,double sz, Pos3D c){
		this(sx,sy,sz);
		this.center=c; 
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
		s+="cylinder{"+Pos3D.add(vertices.get(6),this.center)+","+Pos3D.add(vertices.get(4),this.center)+",0.01*"+sidex
						+" texture{pigment{color Black} finish{reflection 0.5}}}\n"; 
		s+="cylinder{"+Pos3D.add(vertices.get(7),this.center)+","+Pos3D.add(vertices.get(5),this.center)+",0.01*"+sidex
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
		s+="}";
	
		return s; 
	}
	
	public static void main(String[] args) {
		Cube c1=new Cube(1,1,1); 
		System.out.println(c1.toMesh2()); 
	}

}
