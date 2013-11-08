package test;

public class PetitCalcul {
	static double alpha=1; 
	static double suite=1.0/512-3.0/128+1.0/16; 
	static double a=alpha/suite; 
	static double b=-3.0*a/2; 
	static double c=a/2.0; 
	
	public static double compute(double x){
		return a*x*x*x+b*x*x+c*x; 
	}
	
	public static void main(String[] args) {
		System.out.println(compute(0)); 
		System.out.println(compute(1)); 
		System.out.println(compute(0.5)); 
		System.out.println(compute(1/8.0)); 
		System.out.println(compute(7/8.0)); 
	}

}
