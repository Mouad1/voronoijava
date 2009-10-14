package test;

import java.util.ArrayList;

import utils.Point;
import utils.Triangle;

public class CalculTriangles {
	static ArrayList<Triangle> lesTriangles=new ArrayList<Triangle>(); 
	public static void main(String[] args) {
		int N=7; 
		double r2=Math.sqrt(2);
		
		for(int k=0;k<N;k++)
			for(int l=0;l<N-k;l++){
				Point A=new Point(k*r2/N,l*r2/N);
				Point B=new Point((k+1)*r2/N,l*r2/N);
				Point C=new Point(k*r2/N,(l+1)*r2/N);
				lesTriangles.add(new Triangle(A,B,C)); 
				System.out.println(k+" "+l); 
			}
		for(int l=1;l<N;l++)
			for(int k=1;k<N-l+1;k++){
				Point A=new Point(k*r2/N,l*r2/N);
				Point B=new Point(k*r2/N,(l-1)*r2/N);
				Point C=new Point((k-1)*r2/N,l*r2/N);
				lesTriangles.add(new Triangle(A,B,C)); 
				System.out.println(k+" "+l);
			}
		int nb=0; 
		for(int i=0;i<N-4;i++)
			for(int j=i+1;j<N-3;j++)
				for(int k=j+1;k<N-2;k++)
					for(int l=k+1;l<N-1;l++)
						for(int m=l+1;m<N;m++){
							nb++; 
							
						}
				System.out.println(N+" "+nb); 
	}

}
