package impossible;

import java.io.PrintStream;

import utils.Plane;
import utils.Pos3D;
public class IntersectionCubeWithPlane {

	public static void main(String[] args) {
		Pos3D visionPoint=new Pos3D(2,1.5,-5); 	
	
		Cube c1=new Cube(1,1,1); 
		
	
		Pos3D pointBas=Pos3D.barycenter(c1.getVertex(0),c1.getVertex(4),0.8); //0.8
		Pos3D pointLat=Pos3D.barycenter(c1.getVertex(6),c1.getVertex(4),0.7); //0.7
		
		// Premier cube
		Plane ref=Plane.computePlane(visionPoint,
									pointBas,
									pointLat);
		
		Plane ref2=Plane.computePlane(visionPoint,c1.getVertex(0),c1.getVertex(4)); 
		
		
		System.out.println(ref.relative(Pos3D.ZERO)); 
		// Deuxieme cube
		
		// Calculer sa hauteur
		double dist=Pos3D.distance(pointLat,c1.getVertex(6)); 
	
		Pos3D centerC2=new Pos3D(0.5,-dist/4,-1.25); 
		
		Cube c2=new Cube(0.5,dist/2,0.25,centerC2);
		
		Pos3D centerC3=new Pos3D(0.75,-dist/8,-1.75); 
		
		Cube c3=new Cube(0.25,dist/4,0.25,centerC3);
		
		PrintStream output; 
		
		try{
			
		output=new PrintStream("../pearls/scene/impossible/lescubes.txt"); 
		
		output.println("camera{ location "+visionPoint+"\n look_at 0}"); 
	
		output.println("#declare cubT1="+c1.toMesh2()); 
		output.println("#declare cubT2="+c2.toMesh2());
		output.println("#declare cubT3="+c3.toMesh2());
		
		output.println("intersection{" +
				 		"intersection{\n object{cubT1 texture{pigment{color Blue}}}\n"
						+ref.toPovray()+"}\n" +ref2.toPovray()+"}");
						
		output.println("intersection{" +
		 		"intersection{\n object{cubT2 texture{pigment{color Red}}}\n"
				+ref.toPovray()+"}\n" +ref2.toPovray()+"}");
		
		output.println("intersection{" +
		 		"intersection{\n object{cubT3 texture{pigment{color Yellow}}}\n"
				+ref.toPovray()+"}\n" +ref2.toPovray()+"}");
		
		
		output.close(); 
	}
		catch(Exception e){System.out.println("Probleme "+e); }
}
}