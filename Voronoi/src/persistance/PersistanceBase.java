package persistance;
// No classes
public class PersistanceBase {
	public static int base=3; 
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
	
	public static int persistance(String s){
		int pers=0; 
		System.out.println("\t"+s); 
		while(s.length()!=1){
			pers++; 
			s=suivant(s); 
			System.out.println("\t"+s); 
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
		
		String s1="1"; 
		for(int i=1;i<100000;i++){
			if(i%1000==0)System.out.println("--->"+i); 
			//String s=suite('2',i); 
			//String powerBase3=suivant(s); 
			
			String pb2=suivant(s1); 
			s1=mul(s1,'2');
			//System.out.println(s+" "+powerBase3+" "+s1+" "+pb2); 
			
			if(!s1.contains("0")) System.out.println(i+" "+s1); 
	}


}
}