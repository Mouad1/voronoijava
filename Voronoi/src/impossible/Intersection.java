package impossible;

import utils.Plane;
import utils.Pos3D;

public class Intersection {
	
	
	
	
	
	
	public static void main(String[] args) {
	Pos3D visionPoint=new Pos3D(-1,1.5,5); 	
		
		
	Anneau test1=new Anneau(1,0.6,0.2); 
	System.out.println("#declare anneau1="+test1.toMesh2()); 
	Anneau test2=new Anneau(1,0.6,0.2,new Pos3D(1,1,1));
	System.out.println("#declare anneau2="+test2.toMesh2()); 
	Plane ref=Plane.computePlane(visionPoint, test2.getVertex(0), test2.getVertex(10)); 
	Pos3D intersect=ref.pointInter(test1.getVertex(0), test1.getVertex(1));
	// TODO c'est pas fini : il faut reutiliser ces infos pour voir ou on coupe sur test2
	System.out.println(intersect); 
}
}
