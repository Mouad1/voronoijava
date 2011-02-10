package impossible;

// Pour verifier le placement des anneaux et de la camera avant de lancer le decoupage
import java.io.PrintStream;

import utils.Pos3D;



public class HelpIntersection {
	
	private static Pos3D visionPoint=new Pos3D(0,0,-10); 
	static private String camera(Pos3D v){
		return "camera{\n location"+v+"\n look_at<0,0,0>\n }\n";  
	}
	
	public static void main(String[] args) {
		double s=0.5; 
		double t=0.3; 
		double e=0.1; 
		
		Pos3D decal=new Pos3D(0.6,0.6,0.3); 
		Pos3D position=new Pos3D(-5,-5,0);
		Anneau liste[]=new Anneau[20];
		for(int i=0;i<20;i++){
		liste[i]=new Anneau(0.5,0.3,0.1,position);
		position=Pos3D.add(position,decal); 
		}
		
		
		try{
			  PrintStream output=new PrintStream("anneaux.inc");
		
		
		output.println(camera(visionPoint)); 
		for(int i=0;i<20;i++){
		output.println("#declare anneau"+i+"="+liste[i].toMesh2()); 
		output.println("object{anneau"+i+" texture{pigment{color Green}}}"); 
	}
	output.close(); 
	}
	catch (Exception ex) {
		System.out.println(ex); 
	}

}
}