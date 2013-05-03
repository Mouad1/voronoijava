package persistance;

import java.util.Random;

// No classes
public class PersistanceRandom {
	public static int[][][] tables=new int[9][58][58]; 
	public static int[][][] retenues=new int[9][58][58]; 
	public static Random gene=new Random();
	
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
		for(int nb=0;nb<1000;nb++){
			if(nb%100==0) System.out.println("********** "+nb); 
			int i=gene.nextInt(5000)+1000; 
			int j=gene.nextInt(5000)+1000; 
			int k=gene.nextInt(5000)+1000; 
			String s=suite('2',i)+suite('3',j)+suite('7',k); 
			int longueur=persistance(s); 
			if(longueur>10){
				System.out.println("les 2 ->"+i+" les 3 ->"+j+" les 7 ->"+k+" persistance "+longueur+" ");
				 
			}
			}
		} //main		
	}


