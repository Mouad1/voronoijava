package test;

import java.util.ArrayList;

import utils.Point;
import utils.Segment;
import utils.Triangle;


public class CalculSegmentsBaBplusRapide {
	
	static double surface(Point A, Point B,Point C){
		double s=(B.getX()-A.getX())*(C.getY()-A.getY()); 
		s=s-(C.getX()-A.getX())*(B.getY()-A.getY()); 
		s=0.5*Math.abs(s);
		//System.out.println(s); 
		return s; 
	}
	
	static public double surfaceElem(int i,int j,int k){
		Segment T0=lesSegments.get(i); 
		Segment T1=lesSegments.get(j); 
		Segment T2=lesSegments.get(k); 
		double max=0; 
		for(int ia=0;ia<2;ia++)
			for(int ib=0;ib<2;ib++)
				for(int ic=0;ic<2;ic++){
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

	
	
	static ArrayList<Segment> lesSegments=new ArrayList<Segment>(); 
	public static void main(String[] args) {
		int N=1000; 
		double r2=Math.sqrt(2);
		
		for(int k=0;k<N;k++)
			{
				Point A=new Point(0,k*r2/N); 
				Point B=new Point(0,(k+1)*r2/N);
				lesSegments.add(new Segment(A,B)); 
				
			}
	
			for(int k=1;k<N;k++){
				Point A=new Point(k*r2/N,0);
				Point B=new Point((k+1)*r2/N,0);
				lesSegments.add(new Segment(A,B)); 
			}
			// la diagonale
			for(int k=0;k<N;k++)
			{
				Point A=new Point(k*r2/N,(N-k)*r2/N);
				Point B=new Point((k+1)*r2/N,(N-k-1)*r2/N);
				lesSegments.add(new Segment(A,B)); 
			}
		
	
	System.out.println(lesSegments.size()); 
	int taille=lesSegments.size();
		
		double max=0;
		int lligne=0; 
		//double calculCourant; 
		for(int i=0;i<taille-4;i++)
			for(int j=i+1;j<taille-3;j++)
				for(int k=j+1;k<taille-2;k++){
					// On peut calculer surfaceElem(i,j,k)
					//System.out.println(i+" "+j+" "+k); 
					double calculCourant0=surfaceElem(i,j,k);	
					//if(calculCourant0<max) break; 
					for(int l=k+1;(l<taille-1)&&(calculCourant0>max);l++){
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
						for(int m=l+1;((m<taille)&&(calculCourant1>max));m++){
					//	for(int m=l+1;(m<N*N);m++){
                                                // 6 calculs de surface a faire......
							//System.out.println(i+" "+j+" "+k+" "+l+" "+m);
							double calculCourant2=calculCourant1;
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
								System.out.println("drawSegment(new double[]"+lesSegments.get(i).lesX()+",new double[]"+lesSegments.get(i).lesY()+");");
								System.out.println("drawSegment(new double[]"+lesSegments.get(j).lesX()+",new double[]"+lesSegments.get(j).lesY()+");");
								System.out.println("drawSegment(new double[]"+lesSegments.get(k).lesX()+",new double[]"+lesSegments.get(k).lesY()+");");
								System.out.println("drawSegment(new double[]"+lesSegments.get(l).lesX()+",new double[]"+lesSegments.get(l).lesY()+");");
								System.out.println("drawSegment(new double[]"+lesSegments.get(m).lesX()+",new double[]"+lesSegments.get(m).lesY()+");");							
								System.out.println(max);
							}
							else {
								if(lligne%10000000==0) System.out.print("*");
								//lligne++; 
								if(lligne==800000000){lligne=0; System.out.println(); }
							}
						}
						}// for m
					}// FOR L
				}// for k
				System.out.println(lligne); 
	}

}
