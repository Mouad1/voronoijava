package stlGeneration;
// ASCII STL cylindre ouvert

public class OpenCylinder {
	
	public static void main(String[] args) {
		double radius=10; 
		int n=10; 
		double a=Math.sqrt(3)*2*Math.PI*radius/(2*n); 
		double j1; 
		double x0=0; // bout du cylindre
		double nbCouches=10; 
		System.out.println("solid cylinder");
		for(int i=1;i<=nbCouches;i++){
			if(i%2==0)
				j1=0.5;
			else j1=0; 
			// Les triangles pointe en avant
			for(int tr=0;tr<n;tr++){
				double sm05=Math.sin(2*Math.PI*(tr-0.5+j1)/n); 
				double cm05=Math.cos(2*Math.PI*(tr-0.5+j1)/n);
				double s05=Math.sin(2*Math.PI*(tr+0.5+j1)/n); 
				double c05=Math.cos(2*Math.PI*(tr+0.5+j1)/n);
				double s1=Math.sin(2*Math.PI*(tr+j1)/n); 
				double c1=Math.cos(2*Math.PI*(tr+j1)/n);
				double s15=Math.sin(2*Math.PI*(tr+1+j1)/n); 
				double c15=Math.cos(2*Math.PI*(tr+1+j1)/n);
				
				System.out.println("facet normal "+0+" "+s05+" "+c05);
				System.out.println("outer loop"); 
				System.out.println("vertex "+(x0+(i-1)*a)+" "+radius*s1+" "+radius*c1); 
				System.out.println("vertex "+(x0+(i-1)*a)+" "+radius*s15+" "+radius*c15);
				System.out.println("vertex "+(x0+i*a)+" "+radius*s05+" "+radius*c05); 
				System.out.println("endloop"); 
				System.out.println("endfacet"); 
				
				System.out.println("facet normal "+0+" "+s1+" "+c1);
				System.out.println("outer loop"); 
				System.out.println("vertex "+(x0+(i-1)*a)+" "+radius*s1+" "+radius*c1); 
				System.out.println("vertex "+(x0+i*a)+" "+radius*sm05+" "+radius*cm05);
				System.out.println("vertex "+(x0+i*a)+" "+radius*s05+" "+radius*c05); 
				System.out.println("endloop"); 
				System.out.println("endfacet"); 
				
				
			}
		
		}// nbcouches
		System.out.println("endsolid cylinder");
	}

}
