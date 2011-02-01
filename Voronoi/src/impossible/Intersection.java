package impossible;

import utils.Plane;
import utils.Pos3D;

public class Intersection {
	
	
	
	
	
	
	public static void main(String[] args) {
	Pos3D visionPoint=new Pos3D(-1,1.5,5); 	
		
		
	// anneau blanc
	Anneau test1=new Anneau(1,0.6,0.2); 
	System.out.println("#declare anneau1="+test1.toMesh2());
	// Anneau bleu
	Anneau test2=new Anneau(1,0.6,0.2,new Pos3D(1,1,1));
	System.out.println("#declare anneau2="+test2.toMesh2()); 
	//Plan defini par l'oeil et l'arete (0,10) de l'anneau bleu
	Plane ref=Plane.computePlane(visionPoint, test2.getVertex(0), test2.getVertex(10)); 
	// Point d'intersection de ce plan avec l'arete 0,1 de l'anneau blanc
	Pos3D intersect=ref.pointInter(test1.getVertex(0), test1.getVertex(1));
	System.out.println(intersect); 
	// Le point interessant sur l'arete 0,10 de l'anneau bleu est sur la droite oeil-intersect
	// u=alpha*oeil+(1-alpha)*intersect : determiner alpha avec u.z=test2.getVertex(0).getZ()
	double alpha=(test2.getVertex(0).getZ()-intersect.getZ())/(visionPoint.getZ()-intersect.getZ()); 
	Pos3D u1=Pos3D.add(Pos3D.mul(visionPoint,alpha), Pos3D.mul(intersect,1-alpha));
	// Intersection de l'arete arriere droite avec la limite horizontale
	System.out.println(u1); 
	// Plan oeil et arete (12,22) de l'anneau bleu
	ref=Plane.computePlane(visionPoint, test2.getVertex(12), test2.getVertex(22)); 
	// Point d'intersection de ce plan avec l'arete 0,1 de l'anneau blanc
	intersect=ref.pointInter(test1.getVertex(0), test1.getVertex(1));
	// Le point interessant sur l'arete 12,22 de l'anneau bleu est sur la droite oeil-intersect
	// u=alpha*oeil+(1-alpha)*intersect : determiner alpha avec u.z=test2.getVertex(12).getZ()
	alpha=(test2.getVertex(12).getZ()-intersect.getZ())/(visionPoint.getZ()-intersect.getZ()); 
	Pos3D u2=Pos3D.add(Pos3D.mul(visionPoint,alpha), Pos3D.mul(intersect,1-alpha));
	// Intersection de l'arete arriere droite avec la limite horizontale
	System.out.println(u2); 
	// Plan oeil et arete (15,19) de l'anneau bleu
	ref=Plane.computePlane(visionPoint, test2.getVertex(15), test2.getVertex(19)); 
	// Point d'intersection de ce plan avec l'arete 0,1 de l'anneau blanc
	intersect=ref.pointInter(test1.getVertex(0), test1.getVertex(1));
	// Le point interessant sur l'arete 15,19 de l'anneau bleu est sur la droite oeil-intersect
	// u=alpha*oeil+(1-alpha)*intersect : determiner alpha avec u.z=test2.getVertex(15).getZ()
	alpha=(test2.getVertex(15).getZ()-intersect.getZ())/(visionPoint.getZ()-intersect.getZ()); 
	Pos3D u3=Pos3D.add(Pos3D.mul(visionPoint,alpha), Pos3D.mul(intersect,1-alpha));
	// Intersection de l'arete arriere droite avec la limite horizontale
	System.out.println(u3); 
	
	
	
}
}
