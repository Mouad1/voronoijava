package test;

public class RayonCodreArc {
	
	public static void main(String[] args) {
		double step=0.001; 
		double r=5.4; 
		while(r<5.8){
			double resu=2*r*Math.sin(11.0/(2*r))-9.2; 
			System.out.println(r+" "+resu); 
			r=r+step; 
		}
	}

}
