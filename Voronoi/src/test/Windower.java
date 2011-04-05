package test;




import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;

public class Windower{
	
	private PrintStream output; 
	private static int sizeWindow=20; 
	
	public static void main(String[] args) throws Exception{
		File input=new File("/tmp/gspcP.txt"); 
		BufferedReader in = new BufferedReader(new FileReader(input));
		PrintStream  output=new PrintStream("/tmp/window"+sizeWindow+".arff");
		ArrayList<Double> values=new ArrayList<Double>();
		try{
		while(true){
           String ligne = in.readLine();
           Scanner rl=new Scanner(ligne);
           rl.useLocale(Locale.US); 
        
           values.add(rl.nextDouble()); 
		}
		}
		catch(Exception e){
			output.println("@relation window"); 
		    output.println("@attribute day real"); 
			for(int i=0;i<sizeWindow;i++)
				output.println("@attribute day"+i+" real"); 
			output.println("@data");
		
			for(int i=0;i<values.size()-sizeWindow+1;i++){
				output.print(i+","); 
				for(int j=0;j<sizeWindow;j++){
					output.print(values.get(i+j)); 
					if(j<sizeWindow-1) output.print(","); 
				}
				output.println();
			}
		}
       
	}
	
	 




}
