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
	
	protected void makeFaces(int i,int j,int k,int l){
		Pos3D mid1=Pos3D.middle(vertices.get(i),vertices.get(j));
		Pos3D mid2=Pos3D.middle(vertices.get(k),vertices.get(l));
		Pos3D mid=Pos3D.middle(mid1,mid2); 
		int indice=vertices.size();
		vertices.add(mid);
		faces.add(new Face(i,j,indice));
		faces.add(new Face(j,k,indice));
		faces.add(new Face(k,l,indice));
		faces.add(new Face(l,i,indice));
		
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
		makeFaces(0,1,3,2); 
		makeFaces(0,4,6,2); 
		makeFaces(0,1,5,4); 
		makeFaces(4,6,7,5);
		makeFaces(3,7,5,1); 
		makeFaces(2,6,7,3); 
	}
	
	
	public Cube(double sx,double sy,double sz, Pos3D c){
		this(sx,sy,sz);
		this.center=c; 
	}
	
	public String toMesh2(){
		String s="mesh2{\n vertex_vectors{\n"+vertices.size()+",\n"; 
		for(int i=0;i<vertices.size()-1;i++)
			s+=Pos3D.add(vertices.get(i),this.center)+",\n";
		s+=Pos3D.add(vertices.get(vertices.size()-1),this.center)+"\n}"+"\n";
		s+="face_indices{\n"+faces.size()+",\n"; 
		for(int i=0;i<faces.size()-1;i++)
			s+=faces.get(i)+",\n"; 
		s+=faces.get(faces.size()-1)+"}\n inside_vector <1,1,1>\n}"; 
		return s; 
	}
	
	public static void main(String[] args) {
		Cube c1=new Cube(1,1,1); 
		System.out.println(c1.toMesh2()); 
	}

}
