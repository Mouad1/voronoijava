package test;
import utils.Point;

public class Deltoid {
	
	
	
	public static void main(String[] args) {
		double phi=(1+Math.sqrt(5))/2; 
		double rac2=Math.sqrt(2); 
		double fm1=(phi-1)/2; 
		double h=Math.sqrt(2-fm1*fm1); 
		Point A=new Point(-0.5,0);
		Point B=new Point(0.5,0);
		Point C=new Point(-phi/2,h); 
		Point D=new Point(phi/2,h); 
		Point Center=new Point(0,h/2+(phi*phi-1)/(8*h)); 
		double radius=Point.distance(A,Center); 
		System.out.println(radius); 
		radius=Point.distance(D,Center); 
		System.out.println(radius); 
		double sinalpha=phi/(2*radius);
		double singamma=rac2/(2*radius); 
		double sintheta=1/(2*radius); 
		double alpha=Math.PI-2*Math.asin(sinalpha);
		System.out.println(alpha);
		System.out.println("alpha :"+alpha*180/Math.PI); 
		double gamma=Math.PI-2*Math.asin(singamma); 
		System.out.println("gamma "+gamma*180/Math.PI);
		double theta=Math.PI-2*Math.asin(sintheta); 
		System.out.println("theta :"+theta*180/Math.PI); 
		System.out.println(alpha+2*gamma+theta); 
		
		double S1=1.0/11*Math.sqrt(5*(85-31*Math.sqrt(5))); 
		double S2=1.0/3.0*Math.sqrt(25-5*Math.sqrt(5));
		double d1=S1*S1+S2*S2-2*S1*S2*Math.cos(gamma); 
		d1=Math.sqrt(d1); 
		double d2=2*S1*S1-2*S1*S1*Math.cos(theta); 
		d2=Math.sqrt(d2); 
		System.out.println(S1+" "+S2+" "+S1/S2+" "+d1+" "+d2); 
		System.out.println(d1*d2/2+" "+S1*S2*Math.sin(gamma)); 
		
		double surf=100.0/11*Math.sqrt(79-16*Math.sqrt(5))/60;
		System.out.println(surf);
		
	}

}
