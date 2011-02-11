package FDD;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;

public class addMissing {

	public static void main(String[] args) {
		String source="C:/Users/decomite/Documents/rapidminer/iris.data"; 
		Double proba[]={0.1,0.04,0.05,0.1}; 
		Random gene=new Random();
		try{
		  BufferedReader in = new BufferedReader(new FileReader(source));
          
          while(true){
        	  String ligne = in.readLine();
          Scanner rl=new Scanner(ligne).useDelimiter(",");
          rl.useLocale(Locale.US);
          //System.out.println(ligne); 
          for(int i=0;i<4;i++) {
        	  double u=rl.nextDouble();
        	  if(gene.nextDouble()<proba[i])
        		  System.out.print("?,"); 
        	  else
        		  System.out.print(u+","); 
          }
          System.out.println(rl.next()); 
          }
		}
		catch(Exception e){System.out.println("PB "+e); }
	}
	
}
