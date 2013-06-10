package persistance;
// recenser les points de chute des persistances
public class Tableau {
	public static int base=10; 
	public static int[][][] tables=new int[base-1]['0'+base]['0'+base]; 
	public static int[][][] retenues=new int[base-1]['0'+base]['0'+base]; 
	
	public static String mul(String s,char x){
		if(x=='0')return "0"; 
		String resu=""; 
		int retenue=0; 
		//System.out.println("\t mul "+s+" par "+x);
		for(int i=s.length()-1;i>=0;i--){
			char mychar=(char)tables[retenue][s.charAt(i)][x];
			/*
			if(mychar=='0') {
			System.out.println("Stop "+s+" "+x); 
			return "0";
		
		}
		*/
			resu=mychar+resu; 
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
	
	// retourne le chiffre sur lequel on arrive
	public static int persistance(String s){
		int pers=0; 
		
		while(s.length()!=1){
			pers++; 
			s=suivant(s); 
			
		}
		return Integer.parseInt(s); 
	}
	
	// Construit une chaine de l caracteres identiques
	public static String suite(char x,int l){
		String s=""; 
		for(int i=0;i<l;i++)
			s+=x; 
		return s; 
	}
	
	// Ajoute 1 au nombre represente par la chaine s
	// Ne marche que pour la base 10
	public static String incremente(String s){
		if(s.length()==0) return "1"; 
		int newChar=s.charAt(s.length()-1)+1; 
		if(newChar-'0'==10) {
			newChar=0;
			return incremente(s.substring(0,s.length()-1))+"0"; 
		}
		else
			return s.substring(0,s.length()-1)+(char)newChar; 
	}
	
	public static void main(String[] args) {
		
		 
		for(int k=0;k<base-1;k++)
		for(int i='0';i<='0'+base-1;i++)
			for(int j='0';j<='0'+base-1;j++){
				{
				tables[k][i][j]=((k+(i-'0')*(j-'0'))%base)+'0'; 
				retenues[k][i][j]=((k+(i-'0')*(j-'0'))/base);
				}
			}
		for(int k=0;k<base-1;k++){
		System.out.println("\n Produits ("+k+")");
		System.out.println("    0 1 2 3 4 5 6 7 8 9");
		System.out.println("_______________________");
		for(int i='0';i<='0'+base-1;i++){
			System.out.print((i-'0')+" | " ); 
			for(int j='0';j<='0'+base-1;j++){
				System.out.print((char)tables[k][i][j]+" "); 
			}
			System.out.println(); 
		}
		System.out.println("\n"+"retenues ("+k+")"); 
		System.out.println("    0 1 2 3 4 5 6 7 8 9");
		System.out.println("_______________________");
		for(int i='0';i<='0'+base-1;i++){
			System.out.print((i-'0')+" | " ); 
			for(int j='0';j<='0'+base-1;j++){
				System.out.print(retenues[k][i][j]+" "); 
			}
			System.out.println(); 
		}
		}
		
		System.out.println("\n");
		
		int[][] memoire=new int[11][10]; 
		
		String s="0"; 
		for(int i=0;i<1000000000;i++){
		
			memoire[s.length()][persistance(s)]++;
			s=incremente(s); 
		}
		
		for(int i=1;i<11;i++){
			for(int j=0;j<10;j++)
				memoire[i][j]+=memoire[i-1][j];
		}
		for(int i=0;i<11;i++){
			for(int j=0;j<10;j++)
				System.out.print(memoire[i][j]+"\t");
			System.out.println(); 
		}
		
		
		

}
}