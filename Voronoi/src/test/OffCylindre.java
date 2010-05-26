package test;

public class OffCylindre {
	
	public static void main(String[] args) {
		double radius=10; 
		int n=10; 
		double a=Math.sqrt(3)*2*Math.PI*radius/(2*n); 
		double j1; 
		double x0=0; // bout du cylindre
		double nbCouches=10; 
		for(int i=1;i<=nbCouches;i++){
			if(i%2==0)
				j1=0.5;
			else j1=0; 
			// Les triangles pointe en avant
			for(int tr=0;tr<n;tr++){
				double s05=Math.sin(2*Math.PI*(tr+0.5+j1)); 
				double c05=Math.cos(2*Math.PI*(tr+0.5+j1));
				double s1=Math.sin(2*Math.PI*(tr+j1)); 
				double c1=Math.cos(2*Math.PI*(tr+j1));
				double s15=Math.sin(2*Math.PI*(tr+1+j1)); 
				double c15=Math.cos(2*Math.PI*(tr+1+j1));
				
				System.out.println("facet normal "+0+" "+s05+" "+c5);
				System.out.println("outer loop"); 
				System.out.println("vertex "+(x0-(i-1)*a)+" "+s1+" "+c1); 
				System.out.println("vertex "+(x0-(i-1)*a)+" "+s1+" "+c1); 
			}
		
		}// nbcouches
	}

}
