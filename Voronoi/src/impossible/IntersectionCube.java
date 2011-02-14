package impossible;

import java.io.PrintStream;

import utils.Plane;
import utils.Pos3D;
public class IntersectionCube {

	public static void main(String[] args) {
		Pos3D visionPoint=new Pos3D(2,1.5,-5); 	
		Pos3D aretesSup[]=new Pos3D[4]; 
		Cube c1=new Cube(1,1,1); 
		
	
		Pos3D pointBas=Pos3D.barycenter(c1.getVertex(0),c1.getVertex(4),0.8); 
		Pos3D pointLat=Pos3D.barycenter(c1.getVertex(6),c1.getVertex(4),0.7); 
		
		// Premier cube
		Plane ref=Plane.computePlane(visionPoint,
									pointBas,
									pointLat);
		Pos3D intersect1=ref.pointInter(c1.getVertex(7),c1.getVertex(5));
		Pos3D intersect2=ref.pointInter(c1.getVertex(5), c1.getVertex(1));
		aretesSup[0]=pointBas;
		aretesSup[1]=pointLat;
		aretesSup[2]=intersect1;
		aretesSup[3]=intersect2;
		
		CubeTronque cubT1=new CubeTronque(1,1,1,aretesSup);
		
		// Deuxieme cube
		
		// Calculer sa hauteur
		double dist=Pos3D.distance(pointLat,c1.getVertex(6)); 
	
		Pos3D centerC2=new Pos3D(0.5,-dist/4,-1.25); 
		
		Cube c2=new Cube(0.5,dist/2,0.25,centerC2);
		
		aretesSup[0]=ref.pointInter(c2.getVertex(0),c2.getVertex(4));
		aretesSup[1]=ref.pointInter(c2.getVertex(6), c2.getVertex(4));
		aretesSup[2]=ref.pointInter(c2.getVertex(7),c2.getVertex(5));
		aretesSup[3]=ref.pointInter(c2.getVertex(5), c2.getVertex(1));
		
		CubeTronque cubT2=new CubeTronque(0.5,dist/2,0.25,centerC2,aretesSup);
		
		
		
		PrintStream output; 
		
		try{
			
		output=new PrintStream("/tmp/lescubes.txt"); 
		
		output.println("camera{ location "+visionPoint+"\n look_at 0}"); 
		/*
		output.println("sphere{"+intersect1+",0.1 texture{pigment{color Red}}}"); 
		output.println("sphere{"+intersect2+",0.1 texture{pigment{color Blue}}}"); 
		output.println("sphere{"+ pointBas+",0.1 texture{pigment{color Yellow}}}"); 
		output.println("sphere{"+ pointLat+",0.1 texture{pigment{color White}}}");
		*/ 
		output.println("#declare cubT1="+cubT1.toMesh2()); 
		output.println("#declare cubT2="+cubT2.toMesh2());
		output.close(); 
	}
		catch(Exception e){System.out.println("Probleme "+e); }
}
}