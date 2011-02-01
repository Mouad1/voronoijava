package impossible;

import utils.Plane;
import utils.Pos3D;

public class Intersection3 {
	
	static private String camera(Pos3D v){
		return "camera{\n location"+v+"\n look_at<0.8,0.8,0>\n}"; 
	}
	
	static private Pos3D visionPoint=new Pos3D(0.8,0.8,-3); 	
	
	static private Anneau test1=new Anneau(0.5,0.3,0.1); 
	static private Anneau test2=new Anneau(0.5,0.3,0.1,new Pos3D(0.6,0.6,0.3));
	static private Anneau test3=new Anneau(0.5,0.3,0.1,new Pos3D(1.2,1.2,0.6));
	static private Anneau test4=new Anneau(0.5,0.3,0.1,new Pos3D(1.8,1.8,0.9));
	
	
	

	static private Pos3D pointInter(int a1,int a2,int b1,int b2,Anneau A1,Anneau A2){
		// arete verticale du bleu : a1,a2 (A2)
		// arete horizontale du blanc : b1,b2
		//Plan defini par l'oeil et l'arete (a1,a2) de l'anneau qui sera coupe A2
		Plane ref=Plane.computePlane(visionPoint, A2.getVertex(a1), A2.getVertex(a2)); 
		// Point d'intersection de ce plan avec l'arete a de l'anneau A1
		Pos3D intersect=ref.pointInter(A1.getVertex(b1), A1.getVertex(b2));
		// Le point interessant sur l'arete a1,a2 de l'anneau bleu est sur la droite oeil-intersect
		// u=alpha*oeil+(1-alpha)*intersect : determiner alpha avec u.z=test2.getVertex(a1).getZ()
		double alpha=(A2.getVertex(a1).getZ()-intersect.getZ())/(visionPoint.getZ()-intersect.getZ()); 
		Pos3D u=Pos3D.add(Pos3D.mul(visionPoint,alpha), Pos3D.mul(intersect,1-alpha));
		// Intersection de l'arete arriere droite avec la limite horizontale
		return u;  
	}
	
	
	
	
	public static void main(String[] args) {
	System.out.println("#declare anneau2="+test2.toMesh2()); 
	System.out.println("#declare anneau3="+test3.toMesh2()); 
	System.out.println("#declare anneau4="+test4.toMesh2()); 
	//System.out.println("#declare anneau2="+test2.toMesh2());
	int b1=19; 
	int b2=20; 
	Pos3D aretes[]=new Pos3D[8]; 
	aretes[0]=pointInter(4,8,b1,b2,test2,test1); 
	aretes[1]=pointInter(1,11,b1,b2,test2,test1); 
	aretes[2]=pointInter(13,23,b1,b2,test2,test1); 
	aretes[3]=pointInter(16,20,b1,b2,test2,test1); 
	
	// les memes aretes verticales avec la barre (15,19) de l'anneau blanc
	b1=10; 
	b2=11; 
	aretes[4]=pointInter(4,8,b1,b2,test2,test1); 
	aretes[5]=pointInter(1,11,b1,b2,test2,test1); 
	aretes[6]=pointInter(13,23,b1,b2,test2,test1); 
	aretes[7]=pointInter(16,20,b1,b2,test2,test1);
	
	AnneauCoupe test1Coupe=new AnneauCoupe(1,0.6,0.2,new Pos3D(0.6,0.6,0.3),1,aretes); 
	System.out.println("#declare anneau1="+test1Coupe.toMesh2());
	
	
	 
	
}
}
