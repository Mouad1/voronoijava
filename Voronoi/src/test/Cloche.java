package test;

public class Cloche {
	
	public static void main(String[] args) {
		double step=0.02; 
		double xinit=1; 
		int cc=0; 
		while(xinit>0){
			System.out.println("<"+xinit+","+Math.exp(-xinit*xinit)+">,");
			xinit=xinit-step;
			cc++; 
		}
		System.out.println(cc);
	}

}
