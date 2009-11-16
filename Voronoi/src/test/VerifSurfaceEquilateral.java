package test;

import java.awt.Color;
import java.io.PrintStream;
import java.util.Random;



// verifier un calcul de surface
public class VerifSurfaceEquilateral {
	
	
	
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
			
			for(int u=0;u<q.length-2;u++)
				for(int v=u+1;v<q.length-1;v++)
					for(int w=v+1;w<q.length;w++)
						System.out.println(surface(q[u],q[v],q[w])+" ** "+mincourant); 
		
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
		Point p[]=new Point[10];
		Point resu[]=new Point[8]; 
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
	
		
	 
		double y=Math.sqrt(2)-1;
		double mx=y-Math.sqrt(3)/3*u; 
		mx=-Math.sqrt(3)*mx; 
		System.out.println(y+" "+mx); 
		
		double x2=Math.sqrt(Math.sqrt(3))/3; 
		
		System.out.println(surface(p0,p1,p2));
		
	
		/*
		// Ma solution pour n=5
		p[0]=new Point(p0);
		double al=2*(Math.sqrt(2)-1)/Math.sqrt(2); 
		p[1]=new Point(al*p1.x+(1-al)*p0.x,al*p1.y+(1-al)*p0.y);
		p[2]=new Point(al*p2.x+(1-al)*p0.x,al*p2.y+(1-al)*p0.y);
		al=1/Math.sqrt(2); 
		p[3]=new Point(al*p1.x+(1-al)*p2.x,al*p1.y+(1-al)*p2.y);
		p[4]=new Point(al*p2.x+(1-al)*p1.x,al*p2.y+(1-al)*p1.y);
		*/
		/*
		p[0]=new Point(p0);
		double al=0.5; 
		p[1]=new Point(al*p1.x+(1-al)*p0.x,al*p1.y+(1-al)*p0.y);
		p[2]=new Point(al*p2.x+(1-al)*p0.x,al*p2.y+(1-al)*p0.y);
		al=1/3.0; 
		p[3]=new Point(al*p1.x+(1-al)*p2.x,al*p1.y+(1-al)*p2.y);
		p[4]=new Point(al*p2.x+(1-al)*p1.x,al*p2.y+(1-al)*p1.y);
		*/
		p[0]=new Point(-0.3168402247621914,0.6894849128242813);
		p[1]=new Point(0.7555315624130224,0.07035077282731131);
		p[2]=new Point(-0.316840224762192,-0.689484912824281);
		p[3]=new Point(0.7555315624130224,-0.07035077282731128);
		p[4]=new Point(-0.4386913376508311,-0.6191341399969698);
		p[5]=new Point(-0.4386913376508306,0.61913413999697);
		p[6]=new Point(0.0,0.0);
		p[7]=new Point(0.2368347879130569,0.16787237979590036);
		p[8]=new Point(-0.2637991394535276,0.12116875293465686);
		p[9]=new Point(0.026964351540470666,-0.2890411327305572);
		
		
		double borne=0.03649; 
		
		
		double min=1; 
		for(int i=0;i<8;i++)
			for(int j=i+1;j<9;j++)
				for(int k=j+1;k<10;k++){
					double s=surface(p[i], p[j], p[k]);
					if(s<0.037) 
					System.out.println(i+","+j+","+k+" | "+s); 
					if(s<min) min=s; 
				}
		System.out.println("----->"+min); 
		
		
	
		
	
		
	}

	}
	
