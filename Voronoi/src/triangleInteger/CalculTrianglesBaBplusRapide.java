package triangleInteger;

import java.util.ArrayList;

import utilsInt.Point;
import utilsInt.Rationnel;
import utilsInt.Triangle;


public class CalculTrianglesBaBplusRapide {
	
	static int surface(Point A, Point B,Point C){
		int s=(B.getX()-A.getX())*(C.getY()-A.getY()); 
		s=s-(C.getX()-A.getX())*(B.getY()-A.getY()); 
		if(s<0) s=-s; 
		//System.out.println(s); 
		return s; 
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
	
	static public int calculSurface(int i,int j,int k,int l,int m){
		int min=surfaceElem(i,j,k); 
		int s=surfaceElem(i,j,l); if(s<min) min=s; 
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
		int N=40; 
		
		
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
		
		int max=0;
		int lligne=0; 
		//int calculCourant; 
		for(int i=0;i<N*N-4;i++)
			for(int j=i+1;j<N*N-3;j++)
				for(int k=j+1;k<N*N-2;k++){
					// On peut calculer surfaceElem(i,j,k)
					//System.out.println(i+" "+j+" "+k); 
					int calculCourant0=surfaceElem(i,j,k);	
					//if(calculCourant0<max) break;  
					for(int l=k+1;(l<N*N-1)&&(calculCourant0>max);l++){
					//for(int l=k+1;(l<N*N-1);l++){
						int calculCourant1=calculCourant0; 
						// On peut calculer (i,j,l),(i,k,l),(j,k,l)
						//System.out.println("\t\t"+l); 
						int kk=0; 
						int cc1=0; 
						while(kk!=1){
						kk=1;	
						cc1=surfaceElem(i,j,l); 
						//if(cc1<max) break; 
						if(cc1<calculCourant1) {calculCourant1=cc1;}
						if(cc1<max) break; 
						cc1=surfaceElem(i,k,l); 
						//if(cc1<max) break; 
						if(cc1<calculCourant1) {calculCourant1=cc1;}
						if(cc1<max) break; 
						cc1=surfaceElem(j,k,l); 
						//if(cc1<max) break; 
						if(cc1<calculCourant1) {calculCourant1=cc1;}	
						if(cc1<max) break; 
						}
						for(int m=l+1;((m<N*N)&&(calculCourant1>max));m++){
					//	for(int m=l+1;(m<N*N);m++){
                                                // 6 calculs de surface a faire......
							//System.out.println(i+" "+j+" "+k+" "+l+" "+m);
							int calculCourant2=calculCourant1;
							lligne++; 
							int mm=0; 
						while(mm!=1){
								mm=1;
								cc1=surfaceElem(i,j,m); 
								//if(cc1<max) break; 
								if(cc1<calculCourant2) {calculCourant2=cc1;}
								if(cc1<max) break; 
								cc1=surfaceElem(i,k,m); 
								//if(cc1<max) break; 
								if(cc1<calculCourant2) {calculCourant2=cc1;}
								if(cc1<max) break; 
								cc1=surfaceElem(i,l,m); 
								//if(cc1<max) break; 
								if(cc1<calculCourant2) {calculCourant2=cc1;}
								if(cc1<max) break; 
								cc1=surfaceElem(j,k,m); 
								//if(cc1<max) break; 
								if(cc1<calculCourant2) {calculCourant2=cc1;}
								if(cc1<max) break; 
								cc1=surfaceElem(j,l,m); 
								//if(cc1<max) break; 
								if(cc1<calculCourant2) {calculCourant2=cc1;}
								if(cc1<max) break; 
								cc1=surfaceElem(k,l,m); 
								//if(cc1<max) break; 
								if(cc1<calculCourant2) {calculCourant2=cc1;}
								if(cc1<max) break; 
						
							
							if(calculCourant2>max){ 
								max=calculCourant2; 
								System.out.println(); 
								System.out.println("drawTriangle(new int[]"+lesTriangles.get(i).lesX()+",new int[]"+lesTriangles.get(i).lesY()+");");
								System.out.println("drawTriangle(new int[]"+lesTriangles.get(j).lesX()+",new int[]"+lesTriangles.get(j).lesY()+");");
								System.out.println("drawTriangle(new int[]"+lesTriangles.get(k).lesX()+",new int[]"+lesTriangles.get(k).lesY()+");");
								System.out.println("drawTriangle(new int[]"+lesTriangles.get(l).lesX()+",new int[]"+lesTriangles.get(l).lesY()+");");
								System.out.println("drawTriangle(new int[]"+lesTriangles.get(m).lesX()+",new int[]"+lesTriangles.get(m).lesY()+");");
								
								System.out.println(max/(N*N+0.0));
								System.out.println(new Rationnel(max,N*N) ); 
							}
							else {
							
								if(lligne%1000==0) System.out.print("*");
								lligne++; 
								if(lligne==80000){lligne=0; System.out.println(); }
							}
						}
						}// for m
					}// FOR L
				}// for k
				System.out.println(lligne); 
	}

}
