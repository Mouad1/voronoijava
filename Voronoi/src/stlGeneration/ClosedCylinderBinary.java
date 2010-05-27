package stlGeneration;

//ASCII STL cylindre ferme (???)
import java.io.DataOutputStream;
import java.io.FileOutputStream;
import java.io.PrintStream;



public class ClosedCylinderBinary {
	
	public static DataOutputStream issue;  
	public static String invert(String num){
		if(num.equals("0"))return "00000000"; 
		String resu=""; 
		
		for(int i=0;i<4;i++)
			resu=num.substring(2*i,2*i+2)+resu; 
		System.out.println("chaine : "+num+" "+num.length()+" "+resu); 
		return resu;
	}
	
	public static void writeFloat(float x) throws Exception{
		issue.writeChars(invert(Integer.toString(Float.floatToRawIntBits(x),16)));
	}
	
	public static void main(String[] args) throws Exception{
	
		FileOutputStream fos = new FileOutputStream("/tmp/closedCylinderv2.stl");
	
		issue= new DataOutputStream(fos);
		
		
		
		float radius=10;
		float length=50; 
		int n=10; 
		float a=(float)(Math.sqrt(3)*2*Math.PI*radius/(2*n)); 
		float j1; 
		float x0=0; // bout du cylindre
		int nbCouches=(int)(length/a); 
		for(int i=0;i<80;i++) issue.writeByte(0);
		issue.writeInt(nbCouches*2*n);
		System.out.println(nbCouches); 
		//issue.println("solid cylinder");
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
				j1=0.5f;
			else j1=0; 
			// Les triangles pointe en avant
			for(int tr=0;tr<n;tr++){
				float sm05=(float)Math.sin(2*Math.PI*(tr-0.5+j1)/n); 
				float cm05=(float)Math.cos(2*Math.PI*(tr-0.5+j1)/n);
				float s05=(float)Math.sin(2*Math.PI*(tr+0.5+j1)/n); 
				float c05=(float)Math.cos(2*Math.PI*(tr+0.5+j1)/n);
				float s1=(float)Math.sin(2*Math.PI*(tr+j1)/n); 
				float c1=(float)Math.cos(2*Math.PI*(tr+j1)/n);
				float s15=(float)Math.sin(2*Math.PI*(tr+1+j1)/n); 
				float c15=(float)Math.cos(2*Math.PI*(tr+1+j1)/n);
				
			
				writeFloat(0); 
				writeFloat(s05); 
				writeFloat(c05); 
			
				//issue.println("vertex "+(x0+(i-1)*a)+" "+radius*s1+" "+radius*c1); 
				writeFloat(x0+(i-1)*a);
				//System.out.println(x0+(i-1)*a+"**"+Integer.toString(Float.floatToRawIntBits(x0+(i-1)*a),16)+"**"+invert(Integer.toString(Float.floatToRawIntBits(x0+(i-1)*a),16))+"**");
				writeFloat(radius*s1); 
				writeFloat(radius*c1);
				//issue.println("vertex "+(x0+(i-1)*a)+" "+radius*s15+" "+radius*c15);
				writeFloat(x0+(i-1)*a);
				writeFloat(radius*s15);
				writeFloat(radius*c15); 
				//issue.println("vertex "+(x0+i*a)+" "+radius*s05+" "+radius*c05);
				writeFloat(x0+i*a); 
				writeFloat(radius*s05);  
				writeFloat(radius*c05);
				issue.writeShort(0);
				
				//issue.println("endloop"); 
				//issue.println("endfacet"); 
				/*
				issue.println("facet normal "+0+" "+s1+" "+c1);
				issue.println("outer loop"); 
				issue.println("vertex "+(x0+(i-1)*a)+" "+radius*s1+" "+radius*c1); 
				issue.println("vertex "+(x0+i*a)+" "+radius*sm05+" "+radius*cm05);
				issue.println("vertex "+(x0+i*a)+" "+radius*s05+" "+radius*c05); 
				issue.println("endloop"); 
				issue.println("endfacet"); 
				*/
				writeFloat(0); 
				writeFloat(s1); 
				writeFloat(c1); 
			
				//issue.println("vertex "+(x0+(i-1)*a)+" "+radius*s1+" "+radius*c1); 
				writeFloat(x0+(i-1)*a);
				writeFloat(radius*s1); 
				writeFloat(radius*c1);
				//issue.println("vertex "+(x0+i*a)+" "+radius*sm05+" "+radius*cm05);
				writeFloat(x0+i*a);
				writeFloat(radius*sm05);
				writeFloat(radius*cm05); 
				//issue.println("vertex "+(x0+i*a)+" "+radius*s05+" "+radius*c05);
				writeFloat(x0+i*a); 
				writeFloat(radius*s05);  
				writeFloat(radius*c05);
				issue.writeShort(0);
			}
		
		}// nbcouches
		//issue.println("endsolid cylinder");
		issue.close(); 
	}

}
