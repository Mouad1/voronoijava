package impossible;

import java.io.PrintStream;

import utils.Plane;
import utils.Pos3D;
public class ChainOfCube {

	public static void main(String[] args) {

		//Pos3D visionPoint=new Pos3D(2,1.5,-5); 	
		Pos3D visionPoint=new Pos3D(2*0.7,1.5,-5*0.7); 	
		int nbCubes=15; 

		Cube listOfCubes[]=new Cube[nbCubes];
		double xinit=1; 
		double yinit=1; 
		double zinit=0.5; 
		
		double xcour=xinit; 
		double ycour=yinit; 
		double zcour=zinit; 
		
		double xcoef=0.8; 
		double ycoef=0.99; 
		double zcoef=0.7;  // 0.68
		
		double coefcoef=1.0005; 
	
		listOfCubes[0]=new Cube(xcour,ycour,zcour);  
		double decalez=zinit; 
		for(int i=1;i<nbCubes;i++){
			
			xcour=xcour*xcoef; 
			ycour=ycour*ycoef; 
			zcour=zcour*zcoef;
			xcoef*=coefcoef; 
			
			zcoef*=coefcoef; 
			decalez=decalez+zcour*0.707; 
			Pos3D center=new Pos3D(xinit-xcour,ycour-yinit,-decalez);
			decalez=decalez+zcour*0.707; 
			listOfCubes[i]=new Cube(xcour,ycour,zcour*0.707,center);
		}
		Pos3D pointBas=Pos3D.barycenter(listOfCubes[0].getVertex(0),listOfCubes[0].getVertex(4),0.8); //0.8
		Pos3D pointLat=Pos3D.barycenter(listOfCubes[0].getVertex(6),listOfCubes[0].getVertex(4),0.7); //0.7

		Plane ref=Plane.computePlane(visionPoint,
									pointBas,
									pointLat);
		
		Plane ref2=Plane.computePlane(visionPoint,listOfCubes[0].getVertex(0),listOfCubes[0].getVertex(4)); 
		
		PrintStream output; 		
		try{	
		output=new PrintStream("../pearls/scene/impossible/lescubes.txt");
		//output=new PrintStream("/tmp/lescubes.txt"); 	
		output.println("#declare visionPoint="+visionPoint+";\n");
		//output.println("camera{ location "+visionPoint+"\n look_at 0}"); 
		for(int i=0;i<nbCubes;i++){
			output.println("#declare cube"+i+"="+listOfCubes[i].toMesh2()); 
			output.println("intersection{" +
			 		//"intersection{\n object{cube"+i+" texture{pigment{color rgb<"+(0.5+0.5*(nbCubes-i+0.0)/nbCubes)+",0,"+(0.5+0.5*(i+0.0)/nbCubes)+">}}}\n"
			 		"intersection{\n object{cube"+i+" }\n"
					+"object{"+ref.toPovray()+" texture{T0}}\n" 
					+"object{"+ref2.toPovray()+" texture{T2}}}}");
		}
		output.close(); 
	}
		catch(Exception e){System.out.println("Probleme "+e); }
}
}