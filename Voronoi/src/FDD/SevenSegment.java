package FDD;
import java.io.PrintStream;
public class SevenSegment {
	
	private static String image(int i){
		String s=""; 
		for(int j=0;j<7;j++){
			if(i%2==0)
				s="0,"+s; 
			else
				s="1,"+s;
		i=i/2; 
		}
		return s; 
	}
	public static void main(String[] args) {
		PrintStream arffOutput; 
	
		
		try{
			arffOutput=new PrintStream("C:/users/decomite/Documents/sevenSegments.arff"); 
			arffOutput.println("@relation SevenSegment"); 
			arffOutput.println("attribute l1 {0,1}"); 
			arffOutput.println("attribute l2 {0,1}"); 
			arffOutput.println("attribute l3 {0,1}"); 
			arffOutput.println("attribute l4 {0,1}"); 
			arffOutput.println("attribute l5 {0,1}"); 
			arffOutput.println("attribute l6 {0,1}"); 
			arffOutput.println("attribute l7 {0,1}"); 
			
			arffOutput.println("attribute class {chiffre,non chiffre}");
			arffOutput.println("@data"); 
			for(int i=0;i<128;i++)
				arffOutput.println(image(i)+" non chiffre"); 
			arffOutput.close(); 
		}
		catch (Exception e) {
			System.out.println(e);System.exit(0); 
		}
		
		System.out.println("fini"); 
		
	}

}
