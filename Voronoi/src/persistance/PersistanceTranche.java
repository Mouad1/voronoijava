package persistance;

import java.io.PrintStream;

// No classes
public class PersistanceTranche {
	public static int[][][] tables=new int[9][58][58]; 
	public static int[][][] retenues=new int[9][58][58]; 
	public static int tranche=6; 
	public static int radix=1000000; 
	
	public static String remplir[]={"","0","00","000","0000","00000","000000","0000000","00000000","000000000"};
	
	public static PrintStream output; 
	
	public static String chaineInit(int a,int b, int c){
		return suite('2',a)+suite('3',b)+suite('7',c); 
	}
	
	public static String mul(String s,char x){
		if(x=='0')return "0"; 
		int facteur=x-'0'; 
		String resu=""; 
		int retenue=0; 
		//System.out.println("\t mul "+s+" par "+x);
		int i=0; 
		//System.out.println(s.length()-1-tranche); 
		for(i=s.length()-1-tranche;i>=0;i-=tranche){
			int bout=Integer.parseInt(s.substring(i+1,i+tranche+1)); 
			if(bout<0) {System.out.println(bout); System.exit(0); }
			//System.out.println("*** "+bout); 
			int prod=facteur*bout+retenue; 
			String chaine=(prod%radix)+""; 
			if(chaine.length()<tranche)chaine=remplir[tranche-chaine.length()]+chaine; 
			resu=chaine+resu; 
			retenue=prod/radix; 
		}// i
		if(i<0){
			int bout=Integer.parseInt(s.substring(0,i+tranche+1)); 
			//System.out.println("fin "+bout+" retenue "+retenue); 
			int prod=facteur*bout+retenue; 
			
			retenue=prod/radix; 
			if(retenue!=0){
			String chaine=(prod%radix)+""; 
			if(chaine.length()<tranche)chaine=remplir[tranche-chaine.length()]+chaine; 
			resu=chaine+resu;
			}
			else
				resu=(prod%radix)+""+resu; 
		}
		if(retenue!=0){
			//System.out.println("\t Une retenue "+retenue); 
			resu=retenue+""+resu;
		}
		return resu; 
	}
	
	// Pour un nombre donne, calcule le produit de ses chiffres
	public static String suivant(String s){
		if(s.contains("0"))return "0";
		String init="1"; 
		for(int i=0;i<s.length();i++){
			init=mul(init,s.charAt(i));  
		}// i
		return init; 
	}
	
	public static int persistance(String s){
		int pers=1; 
		while(s.length()!=1){
			//System.out.println("\t"+s); 
			pers++; 
			
			//System.out.println(s);
			s=suivant(s); 
		}
		return pers; 
	}
	
	public static String suite(char x,int l){
		String s=""; 
		for(int i=0;i<l;i++)
			s+=x; 
		return s; 
	}
	
	public static void main(String[] args) {
		//try { output=new PrintStream("C:/Users/p�p�re/Dropbox/persistance2.txt");}
		try { output=new PrintStream("C:/Users/decomite/Dropbox/persistance4.txt");}
		catch(Exception e){System.out.println(e); System.exit(0); }
		 //System.out.println(mul("48123456123456",'7')); 
		
		
		for(int i=0;i<1500;i++){
			if(i%10==0)System.out.println("--->"+i); 
			String lesDeux=suivant(suite('2',i)); 
			for(int j=0;j<1000;j++){
				//if(j%100==0)System.out.println("\t--->"+j); 
				String deuxEtTrois=lesDeux; 
				//System.out.println(lesDeux);
				for(int l=0;l<j;l++)
					deuxEtTrois=mul(deuxEtTrois,'3'); 
				//System.out.println("\t"+deuxEtTrois);
				String s0=deuxEtTrois; 
			
				for(int k=0;k<1000;k++)
				 {
				 //if(k%100==0)System.out.println("\t\t--->"+k); 
				
			     int longueur=persistance(s0); 
			    
			     if(longueur>5){
				  System.out.println(s0+"\t\t\t"+i+" "+j+" "+k+" persistance "+longueur+" ");
				  output.println(s0+"\t\t\t"+i+" "+j+" "+k+" persistance "+longueur+" ");
				 // output.println("les 3 ->"+i+" les 5 ->"+j+" les 7 ->"+k+" persistance "+longueur+" ");
			}
			     s0=mul(s0,'7'); 
			}
		}
		}
		
		System.out.println(persistance(chaineInit(0,3,3)) ); 
		
		
	}// main

}
