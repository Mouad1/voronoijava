package impossible;

// Deux anneaux impossibles
import utils.Plane;
import utils.Pos3D;

public class Intersection2 {
	static private Pos3D visionPoint=new Pos3D(-1,1.5,5); 	
	static private Anneau test1=new Anneau(1,0.6,0.2); 
	static private Anneau test2=new Anneau(1,0.6,0.2,new Pos3D(1,1,1));
	static private Pos3D pointInter(int a1,int a2,int b1,int b2){
		// arete verticale du bleu : a1,a2
		// arete horizontale du blanc : b1,b2
		//Plan defini par l'oeil et l'arete (a1,a2) de l'anneau bleu
		Plane ref=Plane.computePlane(visionPoint, test2.getVertex(a1), test2.getVertex(a2)); 
		// Point d'intersection de ce plan avec l'arete a de l'anneau blanc
		Pos3D intersect=ref.pointInter(test1.getVertex(b1), test1.getVertex(b2));
		// Le point interessant sur l'arete a1,a2 de l'anneau bleu est sur la droite oeil-intersect
		// u=alpha*oeil+(1-alpha)*intersect : determiner alpha avec u.z=test2.getVertex(a1).getZ()
		double alpha=(test2.getVertex(a1).getZ()-intersect.getZ())/(visionPoint.getZ()-intersect.getZ()); 
		Pos3D u=Pos3D.add(Pos3D.mul(visionPoint,alpha), Pos3D.mul(intersect,1-alpha));
		// Intersection de l'arete arriere droite avec la limite horizontale
		return u;  
	}
	
	
	
	
	public static void main(String[] args) {
	System.out.println("#declare anneau1="+test1.toMesh2()); 
	//System.out.println("#declare anneau2="+test2.toMesh2());
	int b1=0; 
	int b2=1; 
	Pos3D aretes[]=new Pos3D[8]; 
	aretes[0]=pointInter(0,10,b1,b2); 
	aretes[1]=pointInter(3,7,b1,b2); 
	aretes[2]=pointInter(15,19,b1,b2); 
	aretes[3]=pointInter(12,22,b1,b2); 
	/*
	System.out.println("sphere{"+pointInter(0,10,b1,b2)+",0.03 texture{pigment{color Green}}}");
	System.out.println("sphere{"+pointInter(12,22,b1,b2)+",0.03 texture{pigment{color Green}}}");
	System.out.println("sphere{"+pointInter(15,19,b1,b2)+",0.03 texture{pigment{color Green}}}");
	System.out.println("sphere{"+pointInter(3,7,b1,b2)+",0.03 texture{pigment{color Green}}}");
	*/
	// les memes aretes verticales avec la barre (15,19) de l'anneau blanc
	b1=15; 
	b2=16; 
	aretes[4]=pointInter(0,10,b1,b2); 
	aretes[5]=pointInter(3,7,b1,b2); 
	aretes[6]=pointInter(15,19,b1,b2); 
	aretes[7]=pointInter(12,22,b1,b2);
	/*
	System.out.println("sphere{"+pointInter(0,10,b1,b2)+",0.03 texture{pigment{color Yellow}}}");
	System.out.println("sphere{"+pointInter(12,22,b1,b2)+",0.03 texture{pigment{color Yellow}}}");
	System.out.println("sphere{"+pointInter(15,19,b1,b2)+",0.03 texture{pigment{color Yellow}}}");
	System.out.println("sphere{"+pointInter(3,7,b1,b2)+",0.03 texture{pigment{color Yellow}}}");
	*/
	AnneauCoupe t2Coupe=new AnneauCoupe(1,0.6,0.2,new Pos3D(1,1,1),3,aretes); 
	System.out.println("#declare anneau2="+t2Coupe.toMesh2());
	
	System.out.println("sphere{"+aretes[0]+",0.03 texture{pigment{color Green}}}");
	System.out.println("sphere{"+aretes[1]+",0.03 texture{pigment{color Green}}}");
	System.out.println("sphere{"+aretes[2]+",0.03 texture{pigment{color Green}}}");
	System.out.println("sphere{"+aretes[3]+",0.03 texture{pigment{color Green}}}");
	
	/*
	  <0.2325581395348837,1.0,-0.3>
<-2.7755575615628914E-17,1.0943396226415096,0.7>
<-1.1102230246251565E-16,1.150943396226415,1.3>
<0.19999999999999996,1.150943396226415,1.3>

*/
	 
	
}
}
