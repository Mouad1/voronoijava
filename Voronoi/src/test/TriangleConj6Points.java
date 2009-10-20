package test;

import java.awt.Color;
import java.io.PrintStream;
import java.util.Random;



// tester une conjecture
public class TriangleConj6Points {
	
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
		Point p[]=new Point[6];
		Point resu[]=new Point[6]; 
		double r2=Math.sqrt(2);
		double max=0;
		String couleurs[]={"RED","BLUE","GREEN","ORANGE","BLACK","PINK"};
		String chaine[]={"0,1,2","0,1,3","0,1,4","0,2,3","0,2,4","0,3,4","1,2,3","1,2,4","1,3,4","2,3,4"
					,"0,1,5","0,2,5","0,3,5","0,4,5","1,2,5","1,3,5","1,4,5","2,3,5","2,4,5","3,4,5"};
		int indmin=0; 
		int indminmax=0;
		double smax[]=new double[20]; 
		double s[]=new double[20];
		
		
		double a=2*Math.sqrt(Math.sqrt(3))/Math.sqrt(3); 
		double h=a*Math.sqrt(3)/2; 
		
		try{
			 PrintStream output=new PrintStream("/tmp/points.txt"); 
	
		
		for(int k=0;k<10000000;k++){
			for(int i=0;i<100000;i++){
				double mx=r2*gene.nextDouble(); 
				p[0]=new Point(r2-1,0); 
				mx=r2*gene.nextDouble(); 
				p[1]=new Point(0,r2-1); 
				mx=r2*gene.nextDouble(); 
				p[2]=new Point(mx,r2-mx); 
				mx=r2*gene.nextDouble();
				double my=(r2-mx)*gene.nextDouble(); 
				p[3]=new Point(mx,my);
				//p[3]=new Point(2.0/3,2.0/3); 
				mx=r2*gene.nextDouble(); 
				my=(r2-mx)*gene.nextDouble(); 
				p[4]=new Point(mx,my); 
				//p[4]=new Point(2.0/3,1.0/6); 
				mx=r2*gene.nextDouble(); 
				my=(r2-mx)*gene.nextDouble();
				
				p[5]=new Point(mx,my);
				//p[5]=new Point(1.0/6,2.0/3); 
				
				/*
				for(int v=0;v<6;v++){
					double mx=r2*gene.nextDouble(); 
					double my=(r2-mx)*gene.nextDouble();
					p[v]=new Point(mx,my); 
				}
			*/
				 s[0]=surface(p[0],p[1],p[2]);
					double min=s[0]; 
					if(min<max) continue; 
					indmin=0; 
					 s[1]=surface(p[0],p[1],p[3]);
					if(s[1]<min) {min=s[1]; indmin=1;} 
					if(min<max) continue; 
					s[2]=surface(p[0],p[1],p[4]); 
					if(s[2]<min) {min=s[2]; indmin=2;} 
					if(min<max) continue; 
					s[3]=surface(p[0],p[2],p[3]); 
					if(s[3]<min) {min=s[3]; indmin=3;} 
					if(min<max) continue; 
					s[4]=surface(p[0],p[2],p[4]);
					if(s[4]<min) {min=s[4]; indmin=4;} 
					if(min<max) continue; 
					s[5]=surface(p[0],p[3],p[4]);
					if(s[5]<min) {min=s[5];indmin=5;} 
					if(min<max) continue; 
					s[6]=surface(p[1],p[2],p[3]);
					if(s[6]<min) {min=s[6]; indmin=6; }
					if(min<max) continue; 
					s[7]=surface(p[1],p[2],p[4]);
					if(s[7]<min) {min=s[7]; indmin=7;} 
					if(min<max) continue; 
					s[8]=surface(p[1],p[3],p[4]);
					if(s[8]<min) {min=s[8];indmin=8;} 
					if(min<max) continue; 
					 s[9]=surface(p[2],p[3],p[4]);
					if(s[9]<min) {min=s[9]; indmin=9; }
					if(min<max) continue; 
					 s[10]=surface(p[0],p[1],p[5]);
					if(s[10]<min) {min=s[10]; indmin=10; }
					if(min<max) continue; 
					s[11]=surface(p[0],p[2],p[5]);
					if(s[11]<min) {min=s[11]; indmin=11; }
					if(min<max) continue; 
					s[12]=surface(p[0],p[3],p[5]);
					if(s[12]<min) {min=s[12]; indmin=12; }
					if(min<max) continue; 
					s[13]=surface(p[0],p[4],p[5]);
					if(s[13]<min) {min=s[13]; indmin=13; }
					if(min<max) continue; 
					s[14]=surface(p[1],p[2],p[5]);
					if(s[14]<min) {min=s[14]; indmin=14; }
					if(min<max) continue; 
					s[15]=surface(p[1],p[3],p[5]);
					if(s[15]<min) {min=s[15]; indmin=15; }
					if(min<max) continue; 
					s[16]=surface(p[1],p[4],p[5]);
					if(s[16]<min) {min=s[16]; indmin=16; }
					if(min<max) continue; 
					s[17]=surface(p[2],p[3],p[5]);
					if(s[17]<min) {min=s[17]; indmin=17; }
					if(min<max) continue; 
					s[18]=surface(p[2],p[4],p[5]);
					if(s[18]<min) {min=s[18]; indmin=18; }
					if(min<max) continue; 
					s[19]=surface(p[3],p[4],p[5]);
					if(s[19]<min) {min=s[19]; indmin=19; }
					if(min<max) continue; 
					if(min>=max){
						max=min;
						indminmax=indmin;
						for(int j=0;j<6;j++) resu[j]=new Point(p[j]); 
						for(int j=0;j<20;j++) smax[j]=s[j]; 
						System.out.println(); 
						System.out.println(" "+max); 
						for(int ix=0;ix<6;ix++){
							System.out.println("primeIP.setColor(Color."+couleurs[ix]+");"); 
							System.out.println(resu[ix]);
						}
						System.out.println(); 
					}
					
			}
			output.println();
		
		}
		output.close();
		}
		catch(Exception e){System.out.println(e); }
		for(int i=0;i<6;i++) {
			System.out.println("Point "+i+"("+couleurs[i]+") : "+resu[i].x+","+resu[i].y); 
	}
		for(int i=0;i<6;i++){
			System.out.println("primeIP.setColor(Color."+couleurs[i]+");"); 
			System.out.println(resu[i]);
		}
			
		for(int i=0;i<20;i++) System.out.println("    "+smax[i]+" "+ chaine[i]); 
		
	}

	}
	
