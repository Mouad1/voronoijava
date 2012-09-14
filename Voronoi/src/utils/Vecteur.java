package utils;

public class Vecteur extends Vertex {

	public Vecteur(double x, double y, double z) {
		super(x, y, z);
	}
	
	public static Vecteur creeVecteur(Pos3D A,Pos3D B){
		return new Vecteur(B.getX()-A.getX(),B.getY()-A.getY(),B.getZ()-A.getZ()); 
	}

	
	public static Vecteur creeVecteurNorme(Pos3D A,Pos3D B){
	 Vecteur pro=new  Vecteur(B.getX()-A.getX(),B.getY()-A.getY(),B.getZ()-A.getZ()); 
	 double sq=pro.norme(); 
	 return new Vecteur(pro.x/sq,pro.y/sq,pro.z/sq); 
	}	
	
	public static Vecteur produitVectoriel(Vecteur A,Vecteur B){
		double coordX=A.y*B.z-A.z*B.y; 
		double coordY=A.z*B.x-A.x*B.z; 
		double coordZ=A.x*B.y-A.y*B.x;	
		return new Vecteur(coordX,coordY,coordZ); 
	}
	
	public void normalize(){
		double coef=this.norme(); 
		this.x=x/coef; 
		this.y=y/coef; 
		this.z=z/coef; 
	}
}
