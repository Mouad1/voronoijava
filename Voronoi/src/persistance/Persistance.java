package persistance;
// No classes
public class Persistance {
	public static int[][][] tables=new int[9][58][58]; 
	public static int[][][] retenues=new int[9][58][58]; 
	public static String mul(String s,char x){
		String resu=""; 
		int retenue=0; 
		for(int i=s.length()-1;i>=0;i--){
			System.out.println("--->"+i);
			resu=(char)tables[retenue][s.charAt(i)][x]+resu; 
			retenue=retenues[retenue][s.charAt(i)][x]; 
		}// i
		if(retenue!=0)
			resu=(char)retenue+resu; 
		return resu; 
	}
	
	public static void main(String[] args) {
		
		System.out.println((int)'3'+" "+(int)'9');
		System.out.println('3'*'5'); 
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
		
		System.out.println(mul("1230021334",'4'));
		
	}// main

}
