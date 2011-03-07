package FDD;

import java.io.PrintStream;
import java.util.Random;

import utils.Point2D;

public class GenererNuage {
	
	private static String povSphere(Point2D x,String col){
		return "sphere{"+x.toPovray()+",diam texture{pigment{color "+col+"}}}"; 
	}
	
	public static void main(String[] args) {
		Random g=new Random();
		PrintStream output,arffOutput; 
		Rectangle U1=new Rectangle(new Point2D(0,3),new Point2D(1,3),new Point2D(0,0),new Point2D(1,0)); 
		Rectangle U2=new Rectangle(new Point2D(1,3),new Point2D(4,3),new Point2D(1,2),new Point2D(4,2)); 
		Rectangle U3=new Rectangle(new Point2D(4,3),new Point2D(5,3),new Point2D(4,0),new Point2D(5,0)); 
		
		Rectangle L1=new Rectangle(new Point2D(-2,1),new Point2D(-1,1),new Point2D(-2,-2),new Point2D(-1,-2)); 
		Rectangle L2=new Rectangle(new Point2D(-1,-1),new Point2D(2,-1),new Point2D(-1,-2),new Point2D(2,-2)); 
		Rectangle L3=new Rectangle(new Point2D(2,1),new Point2D(3,1),new Point2D(2,-2),new Point2D(3,-2)); 
		
		try{
			output=new PrintStream("/tmp/nuage.txt"); 
			arffOutput=new PrintStream("/tmp/nuage.arff"); 
			arffOutput.println("@relation UU"); 
			arffOutput.println("attribute abscisse numeric"); 
			arffOutput.println("attribute ordonnee numeric"); 
			arffOutput.println("attribute class {upper,lower}");
			arffOutput.println("@data"); 
			for(int i=0;i<5000;i++){
				double de1=g.nextDouble();
				int de2=g.nextInt(3);
				Point2D u=null; 
				if(de1<0.5){
					switch(de2){
					case 0: u=U1.generatePoint(); 
						
						break; 
					case 1: u=U2.generatePoint(); break; 
					case 2: u=U3.generatePoint();  break; 
					}
					output.println(povSphere(u,"Blue")); 
					System.out.println(povSphere(u,"Blue"));
					arffOutput.println(u.getX()+","+u.getY()+",upper"); 
				}
				else{
					switch(de2){
					case 0: u=L1.generatePoint();  break; 
					case 1: u=L2.generatePoint();  break; 
					case 2: u=L3.generatePoint();  break; 
					}
					output.println(povSphere(u,"Yellow")); 
					System.out.println(povSphere(u,"Yellow"));
					arffOutput.println(u.getX()+","+u.getY()+",lower"); 
					
				}
			}
			output.close(); 
			arffOutput.close();
			
		}
		catch(Exception e){System.out.println(e); System.exit(0); }
		
	}

}
