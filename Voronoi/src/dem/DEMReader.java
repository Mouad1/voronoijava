// Une classe pour lire les fichier DEM (elevation)
package dem;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.PrintStream;
import java.util.Locale;
import java.util.Scanner;
import java.util.regex.Pattern;

public class DEMReader {
	
	public static void afficheFichierTexte(String nomFichierSource) {
		PrintStream output; 
	   String catena=nomFichierSource; 
      File source = new File(catena);
      int planeUnitCode;
      int elevationUnitCode; 
      int numberOfSides; 
      String minElevation,maxElevation; 
      String angle; 
      
      
      char buffer[]=new char[145]; 
      try {
              BufferedReader in = new BufferedReader(new FileReader(source));
            	  in.read(buffer,0,145);
            	
             
              System.out.println("**"+String.copyValueOf(buffer)+"**"); 
             
             Scanner r=new Scanner(in); 
             r.useLocale(Locale.US); 
             for(int i=0;i<4;i++){
             int n1=r.nextInt(); 
             System.out.println(n1); 
             }
             for(int i=0;i<15;i++){
                 String n1=r.next(); 
                 System.out.println("-->"+n1+"<---"); 
                 }
             planeUnitCode=r.nextInt(); 
             System.out.println("Plane unit code : "+planeUnitCode);
             elevationUnitCode=r.nextInt(); 
             System.out.println("Elevation unit code : "+elevationUnitCode);
             numberOfSides=r.nextInt();
             System.out.println("Number of Sides : "+numberOfSides);
             
             for(int i=0;i<8;i++)
            	 System.out.println("-->"+r.next()+"<--"); 
             minElevation=r.next(); 
             int posD=minElevation.indexOf("D+"); 
             int exposant=Integer.parseInt(minElevation.substring(posD+2)); 
             int minElevationInt=Integer.parseInt(minElevation.substring(2,exposant+1)); 
             maxElevation=r.next(); 
             exposant=Integer.parseInt(maxElevation.substring(posD+2)); 
             int maxElevationInt=Integer.parseInt(maxElevation.substring(2,exposant+1)); 
             System.out.println("Min elevation "+minElevation+" max Elevation "+maxElevation);
             angle=r.next(); 
             System.out.println("Angle "+angle);
             
             // Un entier et 3 flottants colles ensemble
             String pass=r.next(); 
             System.out.println(pass); 
             
             int row=r.nextInt(); 
             int columns=r.nextInt(); 
             System.out.println("Rows : "+row+" Columns : " +columns); 
             int nbRow=r.nextInt(); 
             int curs=r.nextInt(); 
             System.out.println(nbRow+" "+curs); 
             while(curs!=columns){
            	 nbRow=curs; 
            	 curs=r.nextInt();
            	 System.out.println(nbRow+" "+curs); 
             }
             System.out.println("--->"+r.nextInt()); // une colonne, on jette
             String coordA=r.next(); 
             String coordB=r.next(); 
             String elevLocalDatum=r.next(); 
             System.out.println(coordA+" "+coordB+" "+elevLocalDatum);
             String minElev=r.next(); 
             String maxElev=r.next(); 
             System.out.println(minElev+" "+maxElev);
            
             int valeurs[][]=new int[columns][columns];
             
             for(int k=0;k<columns;k++){
            	 System.out.println("K " +k); 
             for(int i=0;i<columns;i++)
            	 valeurs[k][i]=r.nextInt();
            // passer les debuts de lignes	
             if(k<columns-1){
             for(int i=0;i<4;i++){int u=r.nextInt(); if(i==1) System.out.println("U "+u); }
             for(int i=0;i<5;i++)r.next();
             }
             }
            
            /* 
            output=new PrintStream("devil.inc");
            output.println("#declare mountain=union{"); 
            for(int i=0;i<columns;i++)
            	for(int j=0;j<columns;j++)
            		output.println("sphere{<"+i+","+valeurs[i][j]+","+j+">,diam texture{T0} finish{F0}}"); 
             
             output.println("}"); 
             output.close(); 
             */
             output=new PrintStream("../pearls/scene/divers/devilProfil.inc");
             //output=new PrintStream("devilProfil.inc"); 
             output.println("#declare mountain=union{"); 
             for(int i=0;i<columns;i++){
            	 // un profil
            	 output.println("prism{ \n linear_spline\n 0, ep,"+(columns+3)+""); 
            	 output.println("<0,"+minElevationInt+">,"); 
            	 for(int k=0;k<columns;k++){
            		 output.println("<"+k+","+valeurs[i][k]+">,"); 
            	 }//k
            	 output.println("<"+columns+","+minElevationInt+">,"); 
            	 output.println("<0,"+minElevationInt+">"); 
            	 output.println("translate "+i+"*ep2*y");
            	 output.println("texture{pigment{color rgb <"+((i+0.0)/columns)+","+((columns-i-0.0)/columns)+",0>}}}");
             }// i
             output.println("}// union");
             output.close(); 
             
             
      }
      catch(Exception e){System.out.println("Probleme "+e); System.exit(0); }
      }
	
	public static void main(String[] args) {
		//afficheFichierTexte("C:/Users/decomite/Downloads/032g/032g_0100_deme.dem");
		//afficheFichierTexte("C:/Users/decomite/Downloads/083c07/083c07_0101_deme"); 
		afficheFichierTexte("C:/Users/decomite/Downloads/grand_rapids-w/grand_rapids-w");
		
	}
	

}
