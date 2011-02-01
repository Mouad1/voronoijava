package impossible;

import utils.Pos3D;



public class HelpIntersection {
	
	static private String camera(Pos3D v){
		return "camera{\n location"+v+"\n look_at<0,0,0>\n}"; 
	}
	
	public static void main(String[] args) {
		Anneau test1=new Anneau(1,0.6,0.2); 
		Anneau test2=new Anneau(1,0.6,0.2,new Pos3D(1,1,1));
		Pos3D vp=new Pos3D(-5,0,0); 
		
		System.out.println(camera(vp)); 
		System.out.println("#declare anneau1="+test1.toMesh2()); 
		System.out.println("#declare anneau2="+test2.toMesh2()); 
	}

}
