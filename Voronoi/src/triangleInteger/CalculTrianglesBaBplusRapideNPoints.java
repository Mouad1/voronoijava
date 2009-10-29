package triangleInteger;

import java.util.ArrayList;

import utilsInt.Point;
import utilsInt.Rationnel;
import utilsInt.Triangle;


public class CalculTrianglesBaBplusRapideNPoints {
	
	static int MAXISCHUTZ=0; 
	
	static int surface(Point A, Point B,Point C){
		int s=(B.getX()-A.getX())*(C.getY()-A.getY()); 
		s=s-(C.getX()-A.getX())*(B.getY()-A.getY());
		if(s<0) s=-s; 
		return s; 
	}
	static int dubdub=0; 
	
	static void enumere(int P[],int indice,int nbpoints,int taille){
		if(indice==nbpoints){
			int minx=10000; 
			for(int i=0;i<nbpoints-2;i++)
				for(int j=i+1;j<nbpoints-1;j++)
					for(int k=j+1;k<nbpoints;k++){
						int s=surfaceElem(P[i], P[j], P[k]);
						if(s<minx) minx=s; 
						if(minx<=MAXISCHUTZ) return; 
					}
			for(int i=0;i<nbpoints;i++)
				System.out.print(P[i]+" "); 
			System.out.println(minx+" "+MAXISCHUTZ); 
			if(minx>MAXISCHUTZ) MAXISCHUTZ=minx; 
			return; 
		}
		else
		
		for(int k=P[indice-1]+1; k<taille-nbpoints+indice+1;k++)
		{
			P[indice]=k; 	
			enumere(P,indice+1,nbpoints,taille); 
		}
		
	}
	
	
	
	static void enumere2(int P[],int indice,int nbpoints,int taille,int minAA){
		if(indice==nbpoints){
			int minx=minAA;
			if(minAA<=MAXISCHUTZ) return; 
			/*
			for(int i=0;i<nbpoints-2;i++)
				for(int j=i+1;j<nbpoints-1;j++)
					for(int k=j+1;k<nbpoints;k++){
						int s=surfaceElem(P[i], P[j], P[k]);
						if(s<minx) minx=s; 
						if(minx<MAXISCHUTZ) return; 
					}
					*/
			for(int i=0;i<nbpoints;i++)
				System.out.print(P[i]+" "); 
			System.out.println(minx+" "+MAXISCHUTZ); 
			if(minx>MAXISCHUTZ) MAXISCHUTZ=minx; 
			
			for(int i=0;i<indice;i++)
				System.out.println("drawTriangle(new double[]"+lesTriangles.get(P[i]).lesX()+",new double[]"+lesTriangles.get(P[i]).lesY()+");");

			return; 
		}
		else
		
		for(int k=P[indice-1]+1; k<taille-nbpoints+indice+1;k++){
			
			P[indice]=k; 
			int min=minAA; 
			 
			for(int u=0;(u<indice-1);u++)
			{
				for(int v=u+1;v<indice;v++){
					int s=surfaceElem(P[u],P[v],P[indice]);
					if(s<min) min=s;
					if(min<MAXISCHUTZ)break; 
				}
				if(min<MAXISCHUTZ)break; 
			}
			if(min>MAXISCHUTZ)  
			enumere2(P,indice+1,nbpoints,taille,min); 
			
		}//k
		
	}
	
	
	static public int surfaceElem(int i,int j,int k){
		Triangle T0=lesTriangles.get(i); 
		Triangle T1=lesTriangles.get(j); 
		Triangle T2=lesTriangles.get(k);
		int max=0; 
		for(int ia=0;ia<3;ia++)
			for(int ib=0;ib<3;ib++)
				for(int ic=0;ic<3;ic++){
					int s=surface(T0.get(ia),T1.get(ib),T2.get(ic)); 
					if(s>max)max =s; 
				}
		
		return max; 
	}
	
	

		
	
	
	static ArrayList<Triangle> lesTriangles=new ArrayList<Triangle>(); 
	
	public static void main(String[] args) {
		int N=20; 

		for(int k=0;k<N;k++)
			for(int l=0;l<N-k;l++){
				Point A=new Point(k,l);
				Point B=new Point(k+1,l);
				Point C=new Point(k,l+1);
				lesTriangles.add(new Triangle(A,B,C)); 
				
			}
		for(int l=1;l<N;l++)
			for(int k=1;k<N-l+1;k++){
				Point A=new Point(k,l);
				Point B=new Point(k,l-1);
				Point C=new Point(k-1,l);
				lesTriangles.add(new Triangle(A,B,C)); 
				
			}
		
	
	System.out.println(lesTriangles.size()); 
	int TAILLE=lesTriangles.size();
	Triangle.setSize(N);
	int NBPOINTS=8;
		
		
		int P[]=new int [NBPOINTS];
		for(int i=0;i<TAILLE-NBPOINTS+1;i++){
		P[0]=i; 			
		enumere2(P,1,NBPOINTS,TAILLE,TAILLE);
		//enumere(P,1,NBPOINTS,TAILLE);
		}
		System.out.println(MAXISCHUTZ/(N*N+0.0));
		System.out.println(new Rationnel(MAXISCHUTZ,N*N));
	}
}
		
