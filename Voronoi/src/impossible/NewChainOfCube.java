package impossible;

import java.io.PrintStream;

import utils.Plane;
import utils.Pos3D;
public class NewChainOfCube {

	public static void main(String[] args) {

		//Pos3D visionPoint=new Pos3D(2,1.5,-5); 	
	
		int nbCubes=1; 

		Cube listOfCubes[]=new Cube[nbCubes];
		double xinit=1; 
		double yinit=1; 
		double zinit=0.5; 
		
		double xcour=xinit; 
		double ycour=yinit; 
		double zcour=zinit; 
		
		double xcoef=2/3; 
		double ycoef=2/3; 
		double zcoef=2/3;  
		
		Pos3D aretes[]=new Pos3D[4]; 
		aretes[0]=new Pos3D(xcour/6,-ycour,-zcour);
		aretes[1]=new Pos3D(xcour,-ycour/6,-zcour); 
		aretes[2]=new Pos3D(xcour,-ycour/6,zcour); 
		aretes[3]=new Pos3D(xcour/6,-ycour,zcour);
		
		Plane ref=Plane.computePlane(aretes[0],aretes[1],aretes[2]); 
		System.out.println(ref); 
		
		listOfCubes[0]=new CubeTronque(xcour,ycour,zcour,aretes);  
		
		PrintStream output; 		
		try{	
		output=new PrintStream("../pearls/scene/impossible/lescubes.txt");
		//output=new PrintStream("/tmp/lescubes.txt"); 	
	
		
		for(int i=0;i<nbCubes;i++){
			output.println("#declare cube"+i+"="+listOfCubes[i].toMesh2()); 
		
		}
		output.close(); 
	}
		catch(Exception e){System.out.println("Probleme "+e); }
}
}