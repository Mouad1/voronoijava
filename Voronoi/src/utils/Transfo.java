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
	}
	private double alpha,beta;
	private Vertex trans; 
	
	public String toString(){
		//String s="transform{\n translate"+Vertex.mul(trans,-1)+"\nrotate " +(-beta)+"*z\n rotate "+(-alpha)+"*y\n translate "+trans+"}";
		String s="transform{\n rotate "+(-beta)+"*z rotate "+(-alpha)+"*y translate "+Vertex.mul(trans,-1)+"}";
		return s; 
	}

}
