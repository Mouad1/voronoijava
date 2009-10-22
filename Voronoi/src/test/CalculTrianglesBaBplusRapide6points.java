package test;

import java.util.ArrayList;

import utils.Point;
import utils.Triangle;


public class CalculTrianglesBaBplusRapide6points {
	
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
		int N=250; 
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
		
		double max=0.0;
		int lligne=0; 
		//double calculCourant; 
		for(int i=0;i<N*N-5;i++){
		
		
			for(int j=i+1;j<N*N-4;j++)
				for(int k=j+1;k<N*N-3;k++){
					// On peut calculer surfaceElem(i,j,k)
					//System.out.println(i+" "+j+" "+k); 
					double calculCourant0=surfaceElem(i,j,k);	
					//if(calculCourant0<max) break;  
					for(int l=k+1;(l<N*N-2)&&(calculCourant0>max);l++){
					//for(int l=k+1;(l<N*N-1);l++){
						double calculCourant1=calculCourant0; 
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
						for(int m=l+1;((m<N*N-1)&&(calculCourant1>max));m++){
					//	for(int m=l+1;(m<N*N);m++){
                                                // 6 calculs de surface a faire......
							//System.out.println(i+" "+j+" "+k+" "+l+" "+m);
							double calculCourant2=calculCourant1;
							
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
						}
						for(int p=m+1; (p<N*N)&&(calculCourant2>max);p++){
							double calculCourant3=calculCourant2; 
							int pp=0; 
							lligne++;
							while(pp!=1){
								pp=1; 
								cc1=surfaceElem(i,j,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(i,k,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(i,l,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(i,m,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(j,k,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(j,l,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(j,m,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(k,l,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(k,m,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								cc1=surfaceElem(l,m,p); 
								if(cc1<calculCourant3){calculCourant3=cc1;}
								if(cc1<max)break; 
								
							
							
							if(calculCourant3>max){ 
								max=calculCourant3; 
								System.out.println(); 
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(i).lesX()+",new double[]"+lesTriangles.get(i).lesY()+");");
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(j).lesX()+",new double[]"+lesTriangles.get(j).lesY()+");");
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(k).lesX()+",new double[]"+lesTriangles.get(k).lesY()+");");
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(l).lesX()+",new double[]"+lesTriangles.get(l).lesY()+");");
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(m).lesX()+",new double[]"+lesTriangles.get(m).lesY()+");");
								System.out.println("drawTriangle(new double[]"+lesTriangles.get(p).lesX()+",new double[]"+lesTriangles.get(p).lesY()+");");
								
						
								
								System.out.println(max);
							}
							else{
								if(lligne%1000000==0) System.out.print("*");
								if(lligne%8000000==0) {System.out.println(); lligne=0; }
							}
							
						}
						}
						}// for m
					}// FOR L
				}// for k
		} 
		
	}

}
