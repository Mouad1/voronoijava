package jeuxmathematiques;

import java.util.ArrayList;

public class Multi {
	private static ArrayList<Integer>lesU=new ArrayList<Integer>(); 
	private static ArrayList<Integer>lesV=new ArrayList<Integer>(); 
	private static int chiffres[]={2,3,5,7};
	
	private static void construireU(int i,int courant){
		if(i==3) lesU.add(courant); 
		else
			for(int k=0;k<4;k++){
				construireU(i+1,10*courant+chiffres[k] ); 
			}
	}
	
	private static void construireV(int i,int courant){
		if(i==2) lesV.add(courant); 
		else
			for(int k=0;k<4;k++){
				construireV(i+1,10*courant+chiffres[k] ); 
			}
	}
	
	private static boolean chiffreValide(int u){
		return (u==2)||(u==3)||(u==5)||(u==7); 
	}
	private static boolean valid(int p){
		int q=p; 
		while(q!=0){
			if (!chiffreValide(q%10)) return false; 
			q=q/10; 
		}
		return true; 	
		
	}
	public static void main(String[] args) { 
		construireU(0,0); 
		construireV(0,0); 
		for(int u:lesU) System.out.println(u); 
		for(int v:lesV) System.out.println(v); 
	
	for(int u:lesU)
		for(int v:lesV){
			int prod=u*v; 
			int p1=u*(v%10); 
			int p2=u/10;
			if(valid(prod)&&valid(p1)&&valid(p2))
				System.out.println(u+" "+v); 
		}
	}
}
