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
		
		
	}
	private double alpha,beta;
	private Vertex trans,axe; 
	
	public String toString(){
		String s="\n#declare Victor=<0,1,0>; \n";
		s+="#declare Victor=vrotate(Victor,<0,0,"+(-beta)+">);\n";
		s+="#declare Victor=vrotate(Victor,<0,"+(-alpha)+",0>);\n";
		s+="#declare Hugo=<0,0,1>;\n";
		s+="#declare Hugo=vrotate(Hugo,<0,0,"+(-beta)+">);\n";
		s+="#declare Hugo=vrotate(Hugo,<0,"+(-alpha)+",0>);\n";
		s+="#declare transy=<"+trans.x+","+trans.y+","+trans.z+">;\n";
		s+="#declare provi=vdot(Hugo,transy)/sqrt(vdot(transy,transy));";
		s+="#declare provi=acos(provi)*180/pi;";
		s+="#if(transy.y>0) #declare provi=-provi; #end ";
		s+="#debug \"provi :\"" ; 
		s+="#debug str(provi,3,3)\n";
		
		//String s="transform{\n translate"+Vertex.mul(trans,-1)+"\nrotate " +(-beta)+"*z\n rotate "+(-alpha)+"*y\n translate "+trans+"}";
		 s+="transform{ rotate "+(-beta)+"*z rotate "+(-alpha)+"*y ";
		s+="Axis_Rotate_Trans(Victor,provi) "; 
		s+=" translate "+Vertex.mul(trans,-1)+"}";
		return s; 
	}

}
