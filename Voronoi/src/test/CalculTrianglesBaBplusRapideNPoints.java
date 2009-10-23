package test;

import java.util.ArrayList;

import utils.Point;
import utils.Triangle;


public class CalculTrianglesBaBplusRapideNPoints {
	
	static double surface(Point A, Point B,Point C){
		double s=(B.getX()-A.getX())*(C.getY()-A.getY()); 
		s=s-(C.getX()-A.getX())*(B.getY()-A.getY()); 
		s=0.5*Math.abs(s);
		//System.out.println(s); 
		return s; 
	}
	
	static public double surfaceElem(int i,int j,int k){
		Triangle T0=lesTriangles.get(i); 
		Triangle T1=lesTriangles.get(j); 
		Triangle T2=lesTriangles.get(k);
		double max=0; 
		for(int ia=0;ia<3;ia++)
			for(int ib=0;ib<3;ib++)
				for(int ic=0;ic<3;ic++){
					double s=surface(T0.get(ia),T1.get(ib),T2.get(ic)); 
					if(s>max)max =s; 
				}
		
		return max; 
	}
	
	static public double calculSurface(int i,int j,int k,int l,int m){
		double min=surfaceElem(i,j,k); 
		double s=surfaceElem(i,j,l); if(s<min) min=s; 
		s=surfaceElem(i,j,m); if(s<min) min=s; 
		s=surfaceElem(i,k,l); if(s<min) min=s; 
		s=surfaceElem(i,k,m); if(s<min) min=s; 
		s=surfaceElem(i,l,m); if(s<min) min=s; 
		s=surfaceElem(j,k,l); if(s<min) min=s; 
		s=surfaceElem(j,k,m); if(s<min) min=s; 
		s=surfaceElem(j,l,m); if(s<min) min=s; 
		s=surfaceElem(k,l,m); if(s<min) min=s; 
		
		return min;
	}

	
	
	static ArrayList<Triangle> lesTriangles=new ArrayList<Triangle>(); 
	public static void main(String[] args) {
		int N=20; 
		double r2=Math.sqrt(2);
		
		for(int k=0;k<N;k++)
			for(int l=0;l<N-k;l++){
				Point A=new Point(k*r2/N,l*r2/N);
				Point B=new Point((k+1)*r2/N,l*r2/N);
				Point C=new Point(k*r2/N,(l+1)*r2/N);
				lesTriangles.add(new Triangle(A,B,C)); 
				
			}
		for(int l=1;l<N;l++)
			for(int k=1;k<N-l+1;k++){
				Point A=new Point(k*r2/N,l*r2/N);
				Point B=new Point(k*r2/N,(l-1)*r2/N);
				Point C=new Point((k-1)*r2/N,l*r2/N);
				lesTriangles.add(new Triangle(A,B,C)); 
				
			}
		
	
	System.out.println(lesTriangles.size()); 
	int TAILLE=lesTriangles.size();
	int NBPOINTS=5;
		
		double max=0.0;
		double CC[]=new double[NBPOINTS];
		int P[]=new int [NBPOINTS];
		for(int i=0;i<TAILLE-NBPOINTS+1;i++)
		{
			P[0]=i; 
			for(int j=i+1;j<TAILLE-NBPOINTS+2; j++)
			{
			P[1]=j; 
			for(int k=j+1; k<TAILLE-NBPOINTS+3; k++)
			{
			P[2]=k;
			CC[2]=surfaceElem(P[0],P[1],P[2]);
			for(int u=3;u<NBPOINTS;u++)
			{
				// TODO cette boucle est fausse
				for(int l=P[u-1]+1; l<TAILLE-NBPOINTS+u+1;l++)
				{
					CC[u]=CC[u-1];
				double vc=0; 
				for(int v=0;(v<u-1);v++)
				{
					for(int w=v+1; (w<u);w++)
					{
						vc=surfaceElem(l, P[v], P[w]); 
						if(vc<CC[u]){CC[u]=vc; }
					}//w
				}//v
				
					P[u]=l;
					
					
					/*
					if(u==NBPOINTS-1){
						
						max=CC[u]; 
						System.out.println("-------------------->"+max);
						for(int u1=0;u1<NBPOINTS-2;u1++)
							for(int u2=u1+1;u2<NBPOINTS-1;u2++)
								for(int u3=u2+1;u3<NBPOINTS;u3++)
									System.out.println(P[u1]+" "+P[u2]+" "+P[u3]+" "+surfaceElem(P[u1], P[u2], P[u3]));
						
						
					}
					*/
					for(int uu=0;uu<=u;uu++) System.out.print(P[uu]+" ");
					System.out.println(); 
					
				}//l
			}//u
			if(CC[NBPOINTS-1]>max){
				max=CC[NBPOINTS-1]; 
				System.out.println("*************************> "+max); 
				//for(int u=0;u<NBPOINTS;u++)	
				//	System.out.println("drawTriangle(new double[]"+lesTriangles.get(P[u]).lesX()+",new double[]"+lesTriangles.get(P[u]).lesY()+");");
				
			}// if max
			}// k
			}//j
		}// i
	}
	}
		
