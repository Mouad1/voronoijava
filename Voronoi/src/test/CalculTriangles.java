package test;

import java.util.ArrayList;

import utils.Point;
import utils.Triangle;

public class CalculTriangles {
	
	public static void main(String[] args) {
		int N=5; 
		double r2=Math.sqrt(2);
		ArrayList<Triangle> lesTriangles=new ArrayList<Triangle>(); 
		for(int k=0;k<N;k++)
			for(int l=0;l<N-k;l++){
				Point A=new Point(k*r2/N,l*r2/N);
				Point B=new Point((k+1)*r2/N,l*r2/N);
				Point C=new Point(k*r2/N,(l+1)*r2/N);
				lesTriangles.add(new Triangle(A,B,C)); 
			}
		for(int l=1;l<N;l++)
			for(int k=1;k<N-l;k++){
				Point A=new Point(k*r2/N,l*r2/N);
				Point B=new Point(k*r2/N,(l-1)*r2/N);
				Point C=new Point((k-1)*r2/N,l*r2/N);
				lesTriangles.add(new Triangle(A,B,C)); 
			}
		System.out.println(lesTriangles.size()); 
				
	}

}
