// Une classe pour lire les fichier DEM (elevation)
package dem;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.PrintStream;
import java.util.Scanner;
import java.util.regex.Pattern;

public class DEMReader {
	
	public static void afficheFichierTexte(String nomFichierSource) {
	
	   String catena=nomFichierSource; 
      File source = new File(catena);
      char buffer[]=new char[144]; 
      try {
              BufferedReader in = new BufferedReader(new FileReader(source));
            	  in.read(buffer,0,144);
            	
             
              System.out.println("**"+String.copyValueOf(buffer)+"**"); 
             Scanner r=new Scanner(in); 
             Pattern p = Pattern.compile(".");
             for(int i=0;i<3;i++)System.out.println(r.nextInt());
             for(int i=0;i<10;i++){
             String u=r.next(p);
             System.out.println("*"+u+"*");
      }
             for(int i=0;i<15;i++)System.out.println(r.nextFloat());
            
      }
      catch(Exception e){System.out.println("Probleme "+e); System.exit(0); }
      }
	
	public static void main(String[] args) {
		afficheFichierTexte("C:/Users/decomite/Downloads/032g/032g_0100_deme.dem");
	}
	

}
