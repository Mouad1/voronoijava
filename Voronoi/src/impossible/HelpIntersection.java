package impossible;

// Pour verifier le placement des anneaux et de la camera avant de lancer le decoupage
import utils.Pos3D;



public class HelpIntersection {
	
	static private String camera(Pos3D v){
		return "camera{\n location"+v+"\n look_at<0.8,0.8,0>\n}"; 
	}
	
	public static void main(String[] args) {
		Anneau test1=new Anneau(0.5,0.3,0.1); 
		Anneau test2=new Anneau(0.5,0.3,0.1,new Pos3D(0.6,0.6,0.3));
		Anneau test3=new Anneau(0.5,0.3,0.1,new Pos3D(1.2,1.2,0.6));
		Anneau test4=new Anneau(0.5,0.3,0.1,new Pos3D(1.8,1.8,0.9));
		
		Pos3D vp=new Pos3D(0.8,0.8,-3); 
		
		System.out.println(camera(vp)); 
		System.out.println("#declare anneau1="+test1.toMesh2()); 
		System.out.println("#declare anneau2="+test2.toMesh2()); 
		System.out.println("#declare anneau3="+test3.toMesh2()); 
		System.out.println("#declare anneau4="+test4.toMesh2()); 
		System.out.println("object{anneau1 texture{pigment{color Green}}}"); 
		System.out.println("object{anneau2 texture{pigment{color Green}}}"); 
		System.out.println("object{anneau3 texture{pigment{color Green}}}"); 
		System.out.println("object{anneau4 texture{pigment{color Green}}}"); 
	}

}
