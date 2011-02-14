package impossible;

import utils.Plane;
import utils.Pos3D;
public class IntersectionCube {

	public static void main(String[] args) {
		Pos3D visionPoint=new Pos3D(-1,1.5,5); 	
		Cube c1=new Cube(1); 
	
		Plane ref=Plane.computePlane(visionPoint,
									Pos3D.middle(c1.getVertex(0),c1.getVertex(4)),
									Pos3D.middle(c1.getVertex(6),c1.getVertex(4)));
		Pos3D intersect1=ref.pointInter(c1.getVertex(7),c1.getVertex(5));
		Pos3D intersect2=ref.pointInter(c1.getVertex(5), c1.getVertex(1)); 
		
		System.out.println("camera{ location "+visionPoint+"\n look_at 0}"); 
		System.out.println("sphere{"+intersect1+",0.2 texture{pigment{color Red}}}"); 
		System.out.println("sphere{"+intersect2+",0.2 texture{pigment{color Blue}}}"); 
	
	}
}

/*

	Anneau test2=new Anneau(1,0.6,0.2,new Pos3D(1,1,1));
	System.out.println("#declare anneau2="+test2.toMesh2()); 
	//Plan defini par l'oeil et l'arete (0,10) de l'anneau bleu
	Plane ref=Plane.computePlane(visionPoint, test2.getVertex(0), test2.getVertex(10)); 
	// Point d'intersection de ce plan avec l'arete 0,1 de l'anneau blanc
	Pos3D intersect=ref.pointInter(test1.getVertex(0), test1.getVertex(1));
	System.out.println(intersect); 



*/