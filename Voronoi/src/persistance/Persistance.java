package persistance;

import java.io.PrintStream;

// No classes
public class Persistance {
	public static int[][][] tables=new int[9][58][58]; 
	public static int[][][] retenues=new int[9][58][58]; 
	
	public static PrintStream output; 
	
	
	public static String mul(String s,char x){
		if(x=='0')return "0"; 
		String resu=""; 
		int retenue=0; 
		//System.out.println("\t mul "+s+" par "+x);
		for(int i=s.length()-1;i>=0;i--){
			resu=(char)tables[retenue][s.charAt(i)][x]+resu; 
			retenue=retenues[retenue][s.charAt(i)][x]; 
		}// i
		if(retenue!=0){
			//System.out.println("\t Une retenue "+retenue); 
			resu=(char)(retenue+'0')+resu;
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
		int pers=0; 
		while(s.length()!=1){
			//System.out.println("\t"+s); 
			pers++; 
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
		try { output=new PrintStream("C:/Users/pépère/Dropbox/persistance2.txt");}

		catch(Exception e){System.out.println(e); System.exit(0); }
		 
		for(int k=0;k<9;k++)
		for(int i='0';i<='9';i++)
			for(int j='0';j<='9';j++){
				{
				tables[k][i][j]=((k+(i-'0')*(j-'0'))%10)+'0'; 
				retenues[k][i][j]=((k+(i-'0')*(j-'0'))/10);
				}
			}
		for(int k=0;k<9;k++){
		System.out.println("\n Produits ("+k+")");
		System.out.println("    0 1 2 3 4 5 6 7 8 9");
		System.out.println("_______________________");
		for(int i='0';i<='9';i++){
			System.out.print((i-'0')+" | " ); 
			for(int j='0';j<='9';j++){
				System.out.print((char)tables[k][i][j]+" "); 
			}
			System.out.println(); 
		}
		System.out.println("\n"+"retenues ("+k+")"); 
		System.out.println("    0 1 2 3 4 5 6 7 8 9");
		System.out.println("_______________________");
		for(int i='0';i<='9';i++){
			System.out.print((i-'0')+" | " ); 
			for(int j='0';j<='9';j++){
				System.out.print(retenues[k][i][j]+" "); 
			}
			System.out.println(); 
		}
		}
		
		System.out.println("\n");
		
		for(int i=1;i<1300;i++){
			System.out.println("--->"+i); 
			String lesDeux=suivant(suite('2',i)); 
			for(int j=1;j<1300;j++){
				if(j%100==0)System.out.println("\t--->"+j); 
				String deuxEtTrois=lesDeux; 
				//System.out.println(lesDeux);
				for(int l=0;l<j;l++)
					deuxEtTrois=mul(deuxEtTrois,'3'); 
				//System.out.println("\t"+deuxEtTrois);
				String s0=deuxEtTrois; 
				for(int k=1;k<1300;k++)
				 {
				 //if(k%100==0)System.out.println("\t\t--->"+k); 
				 String s=mul(s0,'7');
				 s0=s; 
			     int longueur=persistance(s); 
			     if(longueur>5){
				  System.out.println("les 2 ->"+i+" les 3 ->"+j+" les 7 ->"+k+" persistance "+longueur+" ");
				  output.println("les 2 ->"+i+" les 3 ->"+j+" les 7 ->"+k+" persistance "+longueur+" ");
			}
			}
		}
		}
		
		
	}// main

}
