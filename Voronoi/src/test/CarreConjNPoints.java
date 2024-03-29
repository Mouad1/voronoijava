package test;

import java.util.Random;



// tester une conjecture
public class CarreConjNPoints {
	
	// carre (0-0),(0,1),(1,0),(1,1)
	
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
		
			
			if(mincourant>0.08257){
			for(int u=0;u<q.length-2;u++)
				for(int v=u+1;v<q.length-1;v++)
					for(int w=v+1;w<q.length;w++)
						System.out.println(u+" "+v+" "+w+" "+surface(q[u],q[v],q[w])+" ** "+mincourant);
			
			}
			
		
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
	
	
	
	
	
	public static void main(String args[]) {
		int NBPOINTS=8; 
		Point p[]=new Point[NBPOINTS];
		
		
		
	
	
	
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
				
				p[0]=new Point(0,0); 
				double l=0.579330+0.000001*gene.nextDouble(); 
				p[1]=new Point(0,l); 
				p[2]=new Point(l,0); 
				
				double a=0.735759+0.000002*(2*gene.nextDouble()-1); 
				p[3]=new Point(1,a); 
				p[4]=new Point(a,1); 
				
				double b=0.2304700+0.000001*gene.nextDouble(); 
				p[5]=new Point(1,b); 
				p[6]=new Point(b,1);
				double u=0.5284819+0.0000001*gene.nextDouble(); 
				
				p[7]=new Point(u,u); 
				
				
				double min=evaluer(p,0,1.0);
				
				
				}//i
				
					
			}//k
		
		
		}
	
		
	}

	
		
	

	
