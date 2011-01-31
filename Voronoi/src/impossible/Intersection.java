package impossible;

import utils.Pos3D;

public class Intersection {
	
	
	
	
	
	
	public static void main(String[] args) {
	Pos3D visionPoint=new Pos3D(-1,1.5,5); 	
		
		
	Anneau test=new Anneau(1,0.6,0.2); 
	System.out.println("#declare anneau1="+test.toMesh2()); 
	Anneau test2=new Anneau(1,0.6,0.2,new Pos3D(1,1,1));
	System.out.println("#declare anneau2="+test2.toMesh2()); 
	
}
}
