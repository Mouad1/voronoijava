package FDD;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Scanner;

public class addMissing {

	public static void main(String[] args) {
		String source=""; 
		try{
		  BufferedReader in = new BufferedReader(new FileReader(source));
          
          while(true){
        	  String ligne = in.readLine();
          Scanner rl=new Scanner(ligne);
          
          
		}
		catch(Exception e){System.out.println("PB "+e); }
	}
	
}
