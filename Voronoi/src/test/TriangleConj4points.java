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
		double alpha=0.5841; 
		double beta=0.2936;
		double step=0.000001; 
		
		while(alpha<0.5860){
			beta=0.2936; 
			while(beta<0.30){
				p[0]=new Point(0,0); 
				double mouve=r2*alpha; //r2/phi; 
				p[1]=new Point(0,mouve);
				p[2]=new Point(mouve,0);
				double xixi=beta*r2;
				p[3]=new Point(xixi,r2-xixi); 
				p[4]=new Point(r2-xixi,xixi); 
				 s[0]=surface(p[0],p[1],p[2]);
					double min=s[0]; 
					indmin=0; 
					 s[1]=surface(p[0],p[1],p[3]);
					if(s[1]<min) {min=s[1]; indmin=1;} 
					s[2]=surface(p[0],p[1],p[4]); 
					if(s[2]<min) {min=s[2]; indmin=2;} 
					s[3]=surface(p[0],p[2],p[3]); 
					if(s[3]<min) {min=s[3]; indmin=3;} 
					s[4]=surface(p[0],p[2],p[4]);
					if(s[4]<min) {min=s[4]; indmin=4;} 
					s[5]=surface(p[0],p[3],p[4]);
					if(s[5]<min) {min=s[5];indmin=5;} 
					s[6]=surface(p[1],p[2],p[3]);
					if(s[6]<min) {min=s[6]; indmin=6; }
					s[7]=surface(p[1],p[2],p[4]);
					if(s[7]<min) {min=s[7]; indmin=7;} 
					s[8]=surface(p[1],p[3],p[4]);
					if(s[8]<min) {min=s[8];indmin=8;} 
					 s[9]=surface(p[2],p[3],p[4]);
					if(s[9]<min) {min=s[9]; indmin=9; }
					
					
					
					if(min>=max){
						max=min;
						indminmax=indmin;
						for(int j=0;j<5;j++) resu[j]=new Point(p[j]); 
						for(int j=0;j<10;j++) smax[j]=s[j]; 
						System.out.println(alpha+" "+beta+" "+max); 
						
					}
					beta=beta+step;
					output.println(alpha+" "+beta+" "+min); 
			}
			output.println();
			
			alpha=alpha+step; 
		}
		output.close();
		}
		catch(Exception e){System.out.println(e); }
		for(int i=0;i<5;i++) {
			System.out.println("Point "+i+"("+couleurs[i]+") : "+resu[i].x+","+resu[i].y); 
	}
		for(int i=0;i<10;i++) System.out.println("    "+smax[i]+" "+ chaine[i]); 
		
	}

	}
	
