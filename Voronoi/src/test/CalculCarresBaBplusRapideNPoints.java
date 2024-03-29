package test;

import java.util.ArrayList;

import utils.Point;
import utils.Triangle;


public class CalculCarresBaBplusRapideNPoints {
	
	static double MAXISCHUTZ=0; 
	
	static double surface(Point A, Point B,Point C){
		double s=(B.getX()-A.getX())*(C.getY()-A.getY()); 
		s=s-(C.getX()-A.getX())*(B.getY()-A.getY()); 
		s=0.5*Math.abs(s);
		//System.out.println(s); 
		return s; 
	}
	static int dubdub=0; 
	
	static void enumere2(int P[],int indice,int nbpoints,int taille){
		if(indice==nbpoints){
			double minx=1; 
			for(int i=0;i<nbpoints-2;i++)
				for(int j=i+1;j<nbpoints-1;j++)
					for(int k=j+1;k<nbpoints;k++){
						double s=surfaceElem(P[i], P[j], P[k]);
						if(s<minx) minx=s; 
						if(minx<MAXISCHUTZ) return; 
					}
			for(int i=0;i<nbpoints;i++)
				System.out.print(P[i]+" "); 
			System.out.println(minx+" "+MAXISCHUTZ); 
			if(minx>MAXISCHUTZ) MAXISCHUTZ=minx; 
			return; 
		}
		else
		
		for(int k=P[indice-1]+1; k<taille-nbpoints+indice+1;k++){
			
			P[indice]=k; 
			for(int u=0;u<indice-2;u++)
				for(int v=0;v<indice-1;v++){
					double s=surfaceElem(P[u],P[v],P[indice]); 
					if(s<MAXISCHUTZ) return;  
				}
			enumere2(P,indice+1,nbpoints,taille); 
			
		}//k
		
		
		
		
		
	}
	static void enumere(int P[],int indice,int nbpoints,int taille,double minactu){
	
		if(indice==nbpoints){
			dubdub++; 
			
			if(minactu>MAXISCHUTZ) {
			
				MAXISCHUTZ=minactu;
				System.out.println("\t\t\t\t "+minactu);
			}
			
			for(int i=0;i<nbpoints;i++)
				System.out.print(P[i]+" "); 
			System.out.println(); 
		//}
			return; 
		}

		// else
		
		for(int k=P[indice-1]+1; k<taille-nbpoints+indice+1;k++){
			double min=minactu; 
			P[indice]=k; 
			for(int u=0;u<indice-2;u++)
				for(int v=0;v<indice-1;v++){
					double s=surfaceElem(P[u],P[v],P[indice]); 
					//System.out.println(s); 
					if(s<min)  min=s; 
					//if(min<MAXISCHUTZ) return; 
				}
			
			enumere(P,indice+1,nbpoints,taille,min); 
			
		}//k
		
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
		int N=10; 
		
		// construire les triangles recouvrant un carre
		double r2=Math.sqrt(2);
	
		
		for(int k=0;k<N;k++)
			for(int l=0;l<N;l++){
				Point A=new Point(k*r2/N,l*r2/N);
				Point B=new Point((k+1)*r2/N,l*r2/N);
				Point C=new Point(k*r2/N,(l+1)*r2/N);
				lesTriangles.add(new Triangle(A,B,C)); 
				
			}
		for(int l=1;l<N;l++)
			for(int k=1;k<N+1;k++){
				Point A=new Point(k*r2/N,l*r2/N);
				Point B=new Point(k*r2/N,(l-1)*r2/N);
				Point C=new Point((k-1)*r2/N,l*r2/N);
				lesTriangles.add(new Triangle(A,B,C)); 
				
			}
		
	
	System.out.println(lesTriangles.size()); 
	int TAILLE=lesTriangles.size();
	int NBPOINTS=5;
		
		
		int P[]=new int [NBPOINTS];
		for(int i=0;i<TAILLE-NBPOINTS+1;i++){
		P[0]=i; 			
		enumere2(P,1,NBPOINTS,TAILLE);
		}
		System.out.println(MAXISCHUTZ+" "+dubdub);
	}
}
		
