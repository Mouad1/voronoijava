package impossible;


import java.util.ArrayList;

import utils.Pos3D;

// Un anneau carre, represente par un mesh2 en povray

public class Anneau {
	protected Pos3D center=new Pos3D(0,0,0);
	// taille du cote
	protected double side;
	// epaisseur de la tranche
	protected double tranche; 
	// epaisseur de l'anneau
	protected double epaisseur;
	
	protected ArrayList<Pos3D> vertices=new ArrayList<Pos3D>(); 
	protected ArrayList<Face> faces=new ArrayList<Face>();
	
	protected void setVertices(){
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
	
	
	
	// une face (ici, toujours des rectangles ou des trapezes) est une suite de 4 sommets
	// il faut la decouper en triangles	
	protected void setFaces(){
		// haut
		makeFaces(0,1,4,3); 
		makeFaces(12,13,16,15); 
		makeFaces(0,1,13,12); 
		makeFaces(3,4,16,15); 
		//bas
		makeFaces(10,7,8,11); 
		makeFaces(22,19,20,23); 
		makeFaces(10,22,23,11);
		makeFaces(7,18,20,8); 
		// gauche
		makeFaces(0,3,7,10); 
		makeFaces(12,15,19,22); 
		makeFaces(3,15,19,7); 
		makeFaces(0,12,22,10); 
		// droite
		makeFaces(1,11,8,4); 
		makeFaces(13,23,20,16); 
		makeFaces(1,13,23,11); 
		makeFaces(4,16,20,8); 
		
	}
	
	
	
	
	public Pos3D getVertex(int i){return Pos3D.add(vertices.get(i),center);}
	
	
	public Anneau(){}
	
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
