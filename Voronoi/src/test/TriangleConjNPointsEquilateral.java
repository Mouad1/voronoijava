package test;

import java.awt.Color;
import java.io.PrintStream;
import java.util.Random;



// tester une conjecture
public class TriangleConjNPointsEquilateral {
	
	// Triangle de base : triangle rectangle isocele sqrt(2) : surface 1
	
	static private class Point{
		/**
		 * @param x
		 * @param y
		 */
		protected Point(double x, double y) {
			this.x = x;
			this.y = y;
		}
		
		protected Point(Point p){
			this(p.x,p.y); 
		}

		private double x,y;

		/**
		 * @return the x
		 */
		public double getX() {
			return x;
		}

		/**
		 * @param x the x to set
		 */
		public void setX(double x) {
			this.x = x;
		}

		/**
		 * @return the y
		 */
		public double getY() {
			return y;
		}

		/**
		 * @param y the y to set
		 */
		public void setY(double y) {
			this.y = y;
		} 
		public String toString(){
			return "drawPoint("+this.x+","+this.y+");"; 
		}
		
	}



	private static double MAXISCHUTZ=0;
	
	static public double surface(Point a, Point b, Point c){
		return 0.5*Math.abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y)); 
	}
	
	static public double evaluer(Point q[],int indice,double mincourant){
		if(indice==q.length){
			if(mincourant<MAXISCHUTZ) return 0;
			for(int i=0;i<q.length;i++)
				System.out.println(q[i]);
			System.out.println(alx+" "+aly); 
			MAXISCHUTZ=mincourant; 
			System.out.println(MAXISCHUTZ);
			return MAXISCHUTZ; 
		}
		else
		{
			double min=mincourant; 
			for(int u=0;u<indice-1;u++)
				for(int v=u+1;v<indice;v++){
					double s=surface(q[u], q[v], q[indice]); 
					if(s<min)min=s; 
					if(min<MAXISCHUTZ) return 0; 
				}
			evaluer(q,indice+1,min);
		}
		
		return 0; 
	}
	
	static public Point rotation(double angle,Point p){
		double x=p.x*Math.cos(angle)-p.y*Math.sin(angle); 
		double y=p.x*Math.sin(angle)+p.y*Math.cos(angle);
		return new Point(x,y);
	}
	
	private static Random gene=new Random();
	private static double alx;
	private static double aly;
	
	
	
	public static void main(String args[]) {
		Point p[]=new Point[7];
		Point resu[]=new Point[7]; 
		double r2=Math.sqrt(2);
		double max=0;
		
		
		double a=2/Math.sqrt(Math.sqrt(3)); 
		double h=a*Math.sqrt(3)/2;
		double u=a*Math.sqrt(3)/3; 
		
		Point p0=new Point(u,0); 
		Point p1=new Point(u*Math.cos(2*Math.PI/3),u*Math.sin(2*Math.PI/3)); 
		Point p2=new Point(u*Math.cos(4*Math.PI/3),u*Math.sin(4*Math.PI/3)); 
		System.out.println(p0); 
		System.out.println(p1); 
		System.out.println(p2); 
		
		Point rr[]={p0,p1,p2};
		
		double coefDroite=Math.sin(Math.PI*2/3)/(Math.cos(2*Math.PI/3)-1); 
		double cstDroite=-coefDroite*u; 
		
		Point p6=new Point(0.5,0.5*coefDroite+cstDroite); 
		System.out.println(p6); 
		
		
		System.out.println(surface(p0,p1,p2));
		
	
	
		int lligne=0; 
		int ml=0; 
		for(int k=0;k<10000000;k++){
			for(int i=0;i<100000;i++){
				lligne++; 
				if(lligne%1000000==0){
					lligne=0;
					System.out.print("*");
					ml++; 
					if(ml==80){
						System.out.println(); 
						ml=0; 
					}
				}
				
				/*
				for(int l=0;l<7;l++){
				 //Un point quelconque dans le triangle
				double alpha=2*Math.PI/3*gene.nextDouble(); 
                double maxX=cstDroite/(Math.tan(alpha)-coefDroite); 
                double ri=maxX*gene.nextDouble();
                p[l]=new Point(ri*Math.cos(alpha),ri*Math.sin(alpha));
				}
				*/
				
				
				
				
				double aj=gene.nextDouble()*h+Math.cos(2*Math.PI/3);
				//p[0]=new Point(aj,0);
				
				double alpha=2*Math.PI/3*gene.nextDouble(); 
                double maxX=cstDroite/(Math.tan(alpha)-coefDroite); 
                double ri=maxX*gene.nextDouble();
                //p[0]=new Point(ri*Math.cos(alpha),ri*Math.sin(alpha));
                p[0]=new Point(0,0); 
				
				
				//alx=gene.nextDouble(); // 0.2+(gene.nextDouble()-0.5)/5;
				//aly=gene.nextDouble(); //2.0/3+(gene.nextDouble()-0.5)/5;
                alx=1.0/4; //+(gene.nextDouble()-0.5)/5; 
                aly=5.0/6.0; //+(gene.nextDouble()-0.5)/5; 
				for(int l=0;l<3;l++){
					
					p[2*l+2]=new Point(alx*rr[l].x+(1-alx)*rr[(l+1)%3].x,alx*rr[l].y+(1-alx)*rr[(l+1)%3].y); 
					p[2*l+1]=new Point(aly*rr[l].x+(1-aly)*rr[(l+1)%3].x,aly*rr[l].y+(1-aly)*rr[(l+1)%3].y);
				}
				
				
			
				double min=evaluer(p,0,1.0); 
				
				
					
			}
		
		
		}
	
		
		
	
		
	}

	}
	
