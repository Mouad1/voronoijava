package test;

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
	
	static public double evaluer(Point q[],int indice,double mincourant,double angle,double coef){
		if(indice==q.length){
			if(mincourant<MAXISCHUTZ) return 0;
			for(int i=0;i<q.length;i++)
				System.out.println(q[i]);
			System.out.println("angle : "+angle+" "+(angle*180/Math.PI)+" coef "+coef); 
			/*
			for(int u=0;u<q.length-2;u++)
				for(int v=u+1;v<q.length-1;v++)
					for(int w=v+1;w<q.length;w++)
						System.out.println(surface(q[u],q[v],q[w])+" ** "+mincourant); 
		*/
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
			evaluer(q,indice+1,min,angle,coef);
		}
		
		return 0; 
	}
	
	static public Point rotation(double angle,Point p){
		double x=p.x*Math.cos(angle)-p.y*Math.sin(angle); 
		double y=p.x*Math.sin(angle)+p.y*Math.cos(angle);
		return new Point(x,y);
	}
	
	private static Random gene=new Random();
	
	
	
	
	
	public static void main(String args[]) {
		int NBPOINTS=10; 
		Point p[]=new Point[NBPOINTS];
		
		
		double a=2/Math.sqrt(Math.sqrt(3)); 
		double h=a*Math.sqrt(3)/2;
		double u=a*Math.sqrt(3)/3; 
		
		
		Point p0=new Point(u,0); 
		Point p1=new Point(u*Math.cos(2*Math.PI/3),u*Math.sin(2*Math.PI/3)); 
		Point p2=new Point(u*Math.cos(4*Math.PI/3),u*Math.sin(4*Math.PI/3)); 
		
		System.out.println(p0); 
		System.out.println(p1); 
		System.out.println(p2); 
	
		
	 
		double y=Math.sqrt(2)-1;
		double mx=y-Math.sqrt(3)/3*u; 
		mx=-Math.sqrt(3)*mx; 
		System.out.println(y+" "+mx); 
		
	
		System.out.println(surface(p0,p1,p2));
		
		double coefd1=Math.sin(2*Math.PI/3)/(Math.cos(2*Math.PI/3)-1); 
		double constd1=-u*coefd1; 
		
		double coefd2=Math.sin(4*Math.PI/3)/(Math.cos(4*Math.PI/3)-1); 
		double constd2=-u*coefd2; 
		
		
	
	
	
		int lligne=0; 
		int ml=0; 
		for(int k=0;k<10000000;k++){
			for(int i=0;i<100000;i++){
				lligne++; 
				if(lligne%1000000000==0){
					lligne=0;
					System.out.print("*");
					ml++; 
					if(ml==80){
						System.out.println(); 
						ml=0; 
					}
				}
				System.out.print("--XX--"); 
				//double al=0.9+0.05*gene.nextDouble();
				//double al=Math.sqrt(2*Math.sqrt(3))/20;
				//double al=0.0705*Math.sqrt(Math.sqrt(3))+2*(0.5-gene.nextDouble())*0.005; 
				double al=0.0925868+2*(0.5-gene.nextDouble())/100000000; 
				double ap=al; //gene.nextDouble(); 
				p[0]=new Point(al*p0.x+(1-al)*p1.x,al*p0.y+(1-al)*p1.y); 
				p[1]=new Point((1-ap)*p0.x+ap*p1.x,(1-ap)*p0.y+ap*p1.y); 
				//al=gene.nextDouble();
				//ap=al; //gene.nextDouble(); 
				p[2]=new Point(al*p0.x+(1-al)*p2.x,al*p0.y+(1-al)*p2.y); 
				p[3]=new Point((1-ap)*p0.x+ap*p2.x,(1-ap)*p0.y+ap*p2.y); 
				//al=gene.nextDouble();
				//ap=al; //gene.nextDouble();
				
				p[4]=new Point(al*p1.x+(1-al)*p2.x,al*p1.y+(1-al)*p2.y); 
				p[5]=new Point((1-ap)*p1.x+ap*p2.x,(1-ap)*p1.y+ap*p2.y); 
				p[6]=new Point(0,0); 
				
				double stepalpha=0.00005; 
				double alpha=Math.PI/5-0.05; 
				 
				while(alpha<Math.PI/5+0.05){
					double rad,x,yy; 
					
						x=constd1/(Math.tan(alpha)-coefd1); 
						yy=Math.tan(alpha)*x; 
						
					double steprad=0.000001; 
					double radcoef=0.500; 
					while(radcoef<0.61){
					rad=Math.sqrt(x*x+yy*yy)*radcoef; 
					p[7]=new Point(rad*Math.cos(alpha),rad*Math.sin(alpha));
					p[8]=rotation(2*Math.PI/3, p[7]); 
					p[9]=rotation(4*Math.PI/3, p[7]); 
					
				double min=evaluer(p,0,1.0,alpha,radcoef);
				radcoef+=steprad;
					}
					alpha+=stepalpha; 
				}
				System.out.println("-->"+al); 
					
			}
		
		
		}
	
		
		
	
		
	}

	}
	
