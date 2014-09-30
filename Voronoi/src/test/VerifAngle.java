package test;

public class VerifAngle {
	private static double a,c,b,mu,pi; 
	private static double calcul(double th){
		double denom=1/(a-c*Math.cos(th)); 
		double mdenom=1/(a+c*Math.cos(th)); 
		double x0=(mu*(c-a*Math.cos(th))+b*b*Math.cos(th))*denom;
		double x1=(mu*(c+a*Math.cos(th))-b*b*Math.cos(th))*mdenom;
		double y0=(b*Math.sin(th)*(a-mu))*denom;
		double y1=(b*Math.sin(th)*(mu-a))*mdenom;
		double coef=(x1-x0)/(y1-y0); 
		double verif=pi*Math.cos(th)/(a-c*Math.cos(th)); 
		System.out.println("\n**** "+verif+" "+(coef*y0)+"\n"); 
		return x0-coef*y0; 
	}
	public static void main(String[] args) {
		double theta=0; 
		a=8; 
		c=4; 
		mu=3; 
		b=Math.sqrt(a*a-c*c);
		pi=(mu*c*c+a*b*b-a*a*mu)/a; 
		
		int nbSteps=100;
		double inc=2*Math.PI/nbSteps; 
		for(int i=0;i<nbSteps;i++){
			
			System.out.println(i+" "+theta+" "+calcul(theta)+" "+(mu*c/a)); 
			
			theta=theta+inc; 
		}
	}

}
