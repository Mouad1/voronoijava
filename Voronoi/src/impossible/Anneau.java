package impossible;


import java.util.ArrayList;

import utils.Pos3D;

// Un anneau rectangulaire, represente par un mesh2 en povray

public class Anneau {
	private Pos3D center=new Pos3D(0,0,0);
	// taille du cote
	private double side;
	// epaisseur de la tranche
	private double tranche; 
	// epaisseur de l'anneau
	private double epaisseur;
	
	private ArrayList<Pos3D> vertices=new ArrayList<Pos3D>(); 
	private ArrayList<Face> faces=new ArrayList<Face>();
	
	private void setVertices(){
		vertices.add(0,new Pos3D(-side,side,-tranche/2)); 
		vertices.add(1,new Pos3D(side,side,-tranche/2));
		vertices.add(2,new Pos3D(-side,side-epaisseur,-tranche/2)); 
		vertices.add(3,new Pos3D(-side+epaisseur,side-epaisseur,-tranche/2)); 
		vertices.add(4,new Pos3D(side-epaisseur,side-epaisseur,-tranche/2)); 
		vertices.add(5,new Pos3D(side,side-epaisseur,-tranche/2)); 
		vertices.add(6,new Pos3D(-side,-side+epaisseur,-tranche/2)); 
		vertices.add(7,new Pos3D(-side+epaisseur,-side+epaisseur,-tranche/2)); 
		vertices.add(8,new Pos3D(side-epaisseur,-side+epaisseur,-tranche/2)); 
		vertices.add(9,new Pos3D(side,-side+epaisseur,-tranche/2)); 
		vertices.add(10,new Pos3D(-side,-side,-tranche/2)); 
		vertices.add(11,new Pos3D(side,-side,-tranche/2)); 
		for(int i=0;i<12;i++)
			vertices.add(12+i,Pos3D.add(vertices.get(i),new Pos3D(0,0,tranche)));
	}
	
	private void makeFaces(int i,int j,int k,int l){
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
	
	// une face (ici, toujours des rectangles) est une suite de 4 sommets
	private void setFaces(){
		// Avant
		makeFaces(0,1,5,2); 
		makeFaces(2,3,7,6); 
		makeFaces(4,5,9,8); 
		makeFaces(6,9,11,10); 
		//Interne
		makeFaces(3,15,19,7); 
		makeFaces(4,16,20,8); 
		makeFaces(3,15,16,4); 
		makeFaces(7,19,20,8); 
		// externes
		makeFaces(0,12,13,1); 
		makeFaces(1,13,23,11); 
		makeFaces(11,23,22,10); 
		makeFaces(0,12,22,10); 
		//arrieres
		makeFaces(12,13,17,14); 
		makeFaces(14,15,19,18); 
		makeFaces(16,17,21,20); 
		makeFaces(18,21,23,22); 
		
	}
	
	public Pos3D getVertex(int i){return vertices.get(i);}
	
	
	public Anneau(double s,double t,double e){
		this.side=s; 
		this.tranche=t; 
		this.epaisseur=e; 
		setVertices(); 
		setFaces(); 
	}
	
	public Anneau(double s,double t,double e, Pos3D c){
		this(s,t,e);
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
		s+=faces.get(faces.size()-1)+"\n}\n}"; 
		return s; 
	}
	
	public static void main(String[] args) {
		Anneau test=new Anneau(1,0.6,0.2); 
		System.out.println("#declare anneau1="+test.toMesh2()); 
		Anneau test2=new Anneau(1,0.6,0.2,new Pos3D(1,1,1));
		System.out.println("#declare anneau2="+test2.toMesh2()); 
	}

}
