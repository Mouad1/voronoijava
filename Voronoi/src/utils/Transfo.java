package utils;

public class Transfo {
	/**
	 * @param alpha
	 * @param beta
	 * @param trans
	 */
	public Transfo(double alpha, double beta, Vertex trans) {
		this.alpha = alpha;
		this.beta = beta;
		this.trans = trans;
		Vertex base=new Vertex(Math.cos(-beta)*Math.cos(-alpha),Math.sin(-beta),Math.cos(-beta)*Math.sin(-alpha));
		axe=new Vertex(Math.cos(-beta)*Math.sin(-alpha),Math.sin(-beta),Math.cos(-beta)*Math.cos(-alpha)); 
		double monCos=Vertex.produitScalaire(base,trans)/trans.norme();
		this.gamma=Math.acos(monCos)*180/Math.PI; 
	
		
	}
	private double alpha,beta,gamma;
	private Vertex trans,axe; 
	
	public String toString(){
		String s="\n#declare Victor=<0,1,0>; \n";
		s+="#declare Victor=vrotate(Victor,<0,0,"+(-beta)+">);\n";
		s+="#declare Victor=vrotate(Victor,<0,"+(-alpha)+",0>);\n";
		s+="#declare transy=<"+trans.x+","+trans.y+","+trans.z+">;\n";
		s+="#declare normetransy=vlength(transy);\n";
		s+="#declare gamo=vdot(Victor,transy)/normetransy*180/pi;\n";
		s+="#debug \"Beta :\"" ; 
		s+="#debug str("+beta+",3,3)\n";
		s+="#debug \"\n Alpha :\"" ; 
		s+="#debug str("+alpha+",3,3) \n";
		s+="#debug \"\n\"" ; 
		s+="#debug str(Victor.x,3,3)\n";
		s+="#debug \"\n\"" ; 
		s+="#debug str(Victor.y,3,3)\n";
		s+="#debug \"\n\"" ;  
		s+="#debug str(Victor.z,3,3)\n";
		s+="#debug \"\n\"" ; 
		//String s="transform{\n translate"+Vertex.mul(trans,-1)+"\nrotate " +(-beta)+"*z\n rotate "+(-alpha)+"*y\n translate "+trans+"}";
		 s+="transform{ rotate "+(-beta)+"*z rotate "+(-alpha)+"*y ";
		s+="Axis_Rotate_Trans(Victor,gamo-90) "; 
		s+=" translate "+Vertex.mul(trans,-1)+"}";
		return s; 
	}

}
