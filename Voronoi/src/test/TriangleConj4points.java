package test;

import java.awt.Color;
import java.io.PrintStream;
import java.util.Random;

// tester une conjecture
public class TriangleConj4points {
	
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
	
	static public double surface(Point a, Point b, Point c){
		return 0.5*Math.abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y)); 
	}
	
	private static Random gene=new Random();
	
	public static void main(String args[]) {
		Point p[]=new Point[5];
		Point resu[]=new Point[5]; 
		double r2=Math.sqrt(2);
		double max=0;
		String couleurs[]={"RED","BLUE","GREEN","ORANGE","BLACK"};
		String chaine[]={"0,1,2","0,1,3","0,1,4","0,2,3","0,2,4","0,3,4","1,2,3","1,2,4","1,3,4","2,3,4"};
		int indmin=0; 
		int indminmax=0;
		double smax[]=new double[10]; 
		double s[]=new double[10];
		
		try{
			 PrintStream output=new PrintStream("/tmp/points.txt"); 
		
		
		for(int k=0;k<10000;k++){
			
			for(int i=0;i<10000;i++){
				//p[0]=new Point(0,0); 
				double mouve=r2*gene.nextDouble(); //r2/phi; 
				p[1]=new Point(0,mouve);
				mouve=r2*gene.nextDouble(); 
				p[2]=new Point(mouve,0);
				double xixi=gene.nextDouble()*r2;
				p[3]=new Point(xixi,r2-xixi); 
				xixi=gene.nextDouble()*r2;
				p[0]=new Point(r2-xixi,xixi); 
				 s[0]=surface(p[0],p[1],p[2]);
					double min=s[0]; 
					indmin=0; 
					 s[1]=surface(p[0],p[1],p[3]);
					if(s[1]<min) {min=s[1]; indmin=1;} 
					
					s[2]=surface(p[0],p[2],p[3]); 
					if(s[2]<min) {min=s[2]; indmin=3;} 
					
					
					s[3]=surface(p[1],p[2],p[3]);
					if(s[3]<min) {min=s[3]; indmin=6; }
					
					
					
					
					if(min>=max){
						max=min;
						indminmax=indmin;
						for(int j=0;j<4;j++) resu[j]=new Point(p[j]); 
						for(int j=0;j<4;j++) smax[j]=s[j]; 
						System.out.println(max); 
						
					}
					
			} //beta
			output.println();
			
		
		} // alpha
		output.close();
		}
		catch(Exception e){System.out.println(e); }
		for(int i=0;i<4;i++) {
			System.out.println("Point "+i+"("+couleurs[i]+") : "+resu[i].x+","+resu[i].y); 
	}
		for(int i=0;i<4;i++) System.out.println("    "+smax[i]+" "+ chaine[i]); 
		
	}

	}
	
