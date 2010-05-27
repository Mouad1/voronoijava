package stlGeneration;

//ASCII STL cylindre ferme (???)
import java.io.PrintStream;



public class ClosedCylinderBinary {
	
	public static void main(String[] args) throws Exception{
		PrintStream issue=new PrintStream("/tmp/closedCylinderv2.stl"); 
		double radius=10;
		double length=50; 
		int n=10; 
		double a=Math.sqrt(3)*2*Math.PI*radius/(2*n); 
		double j1; 
		double x0=0; // bout du cylindre
		int nbCouches=(int)(length/a); 
		issue.println("solid cylinder");
		/*
		// les couvercles
		// face arriere
		for(int i=0;i<n;i++){
			issue.println("facet normal -1 0 0"); 
			issue.println("outer loop"); 
			issue.println("vertex "+x0+" 0 0");
			issue.println("vertex "+x0+" "+radius*Math.sin(2*Math.PI*i/n)+" "+radius*Math.cos(2*Math.PI*i/n));
			issue.println("vertex "+x0+" "+radius*Math.sin(2*Math.PI*(i+1)/n)+" "+radius*Math.cos(2*Math.PI*(i+1)/n));
			issue.println("endloop"); 
			issue.println("endfacet");
		}
		// face arriere
		for(int i=0;i<n;i++){
			issue.println("facet normal 1 0 0"); 
			issue.println("outer loop"); 
			issue.println("vertex "+(x0+nbCouches*a)+" 0 0");
			issue.println("vertex "+(x0+nbCouches*a)+" "+radius*Math.sin(2*Math.PI*i/n)+" "+radius*Math.cos(2*Math.PI*i/n));
			issue.println("vertex "+(x0+nbCouches*a)+" "+radius*Math.sin(2*Math.PI*(i+1)/n)+" "+radius*Math.cos(2*Math.PI*(i+1)/n));
			issue.println("endloop"); 
			issue.println("endfacet");
		}
		*/
		// La paroi cylindrique
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
				
				issue.println("facet normal "+0+" "+s05+" "+c05);
				issue.println("outer loop"); 
				issue.println("vertex "+(x0+(i-1)*a)+" "+radius*s1+" "+radius*c1); 
				issue.println("vertex "+(x0+(i-1)*a)+" "+radius*s15+" "+radius*c15);
				issue.println("vertex "+(x0+i*a)+" "+radius*s05+" "+radius*c05); 
				issue.println("endloop"); 
				issue.println("endfacet"); 
				
				issue.println("facet normal "+0+" "+s1+" "+c1);
				issue.println("outer loop"); 
				issue.println("vertex "+(x0+(i-1)*a)+" "+radius*s1+" "+radius*c1); 
				issue.println("vertex "+(x0+i*a)+" "+radius*sm05+" "+radius*cm05);
				issue.println("vertex "+(x0+i*a)+" "+radius*s05+" "+radius*c05); 
				issue.println("endloop"); 
				issue.println("endfacet"); 
				
				
			}
		
		}// nbcouches
		issue.println("endsolid cylinder");
		issue.close(); 
	}

}
