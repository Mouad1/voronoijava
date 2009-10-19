package test;

import java.util.ArrayList;

import utils.Point;
import utils.Triangle;


public class CalculTrianglesBaBplusRapide4points {
	
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
	
	static public double calculSurface(int i,int j,int k,int l){
		double min=surfaceElem(i,j,k); 
		double s=surfaceElem(i,j,l); if(s<min) min=s;  
		s=surfaceElem(i,k,l); if(s<min) min=s; 
		s=surfaceElem(j,k,l); if(s<min) min=s; 
		
		return min;
	}

	
	
	static ArrayList<Triangle> lesTriangles=new ArrayList<Triangle>(); 
	public static void main(String[] args) {
		int N=100; 
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
		
		double max=0;
		int lligne=0; 
		//double calculCourant; 
		for(int i=0;i<N*N-3;i++)
			for(int j=i+1;j<N*N-2;j++)
				for(int k=j+1;k<N*N-1;k++){
					// On peut calculer surfaceElem(i,j,k)
					//System.out.println(i+" "+j+" "+k); 
					double calculCourant0=surfaceElem(i,j,k);	
				
					for(int l=k+1;(l<N*N)&&(calculCourant0>max);l++){
					//for(int l=k+1;(l<N*N-1);l++){
						double calculCourant1=calculCourant0; 
						lligne++;
						// On peut calculer (i,j,l),(i,k,l),(j,k,l)
						//System.out.println("\t\t"+l); 
						int kk=0; 
						double cc1=0; 
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
						
							if(calculCourant1>max){ 
								max=calculCourant1; 
								System.out.println(); 
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(i).lesX()+",new double[]"+lesTriangles.get(i).lesY()+");");
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(j).lesX()+",new double[]"+lesTriangles.get(j).lesY()+");");
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(k).lesX()+",new double[]"+lesTriangles.get(k).lesY()+");");
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(l).lesX()+",new double[]"+lesTriangles.get(l).lesY()+");");
								System.out.println(max);
							}
							else {
								if(lligne%10000000==0) System.out.print("*");
								//lligne++; 
								if(lligne==800000000){lligne=0; System.out.println(); }
							}
						}
									}// FOR L
				}// for k
				
	}


