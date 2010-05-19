package test;

import java.io.PrintStream;



public class SoupAutomat {
	private int length=100;
	private char[] ligne; 
	private int[] auxi;
	
	public SoupAutomat(int l,int debut,String motif){
		this.length=l; 
		ligne=new char[length]; 
		for(int i=0;i<length;i++) ligne[i]='.'; 
		for(int i=debut;i<debut+motif.length();i++) ligne[i]=motif.charAt(i-debut); 
	}
	
	public char charFor(int i){
		return (char)((int)'0'+i);
	}
	
	public void addVal(int index,int va){
		if(index<length)
			if(auxi[index]==-1)  auxi[index]=va; 
			else
				auxi[index]+=va; 
	}
	
	public void mutate(){
		auxi=new int[length]; 
		for(int i=0;i<length;i++)auxi[i]=-1; // les points
		for(int i=0;i<length;i++){ // traiter un caractere chiffre
			if (ligne[i]!='.'){
				int val=(int)ligne[i]-(int)'0'; 
				int posindex; 
				if(val%2==0) posindex=i+val; 
				else posindex=i-val; 
				if(val==0) posindex=i;
				// version torique
				//if(posindex<0) posindex+=length;
				//if(posindex>=length) posindex-=length; 
				if((posindex>=0)&&(posindex<length)){ // ya du taf a faire
					if(auxi[posindex]==-1) auxi[posindex]=val+1; 
					else auxi[posindex]+=(val+1); 
				}// if posindex
			}
		}// auxi est rempli, il faut transformer en caracteres
		
		for(int i=0;i<length;i++){// transformer les nombre en car
			if(auxi[i]==-1) ligne[i]='.'; 
			else
			{if(auxi[i]<10) ligne[i]=charFor(auxi[i]); 
			else {
					addVal(i+1,auxi[i]%10); 
					ligne[i]=charFor(auxi[i]/10); 
				
			}
			}
		}// for
	
	}
	
	public String toString(){
		String s=new String(ligne); 
		return s; 
	}
	
	public static void main(String[] args) {
		String s="........9999991199111119...9.7.....11322..9.....23.63..8....19.2.9";
		//String s="0";
		PrintStream output;  
		SoupAutomat sa=new SoupAutomat(100,30,s); 
		try{
			  output=new PrintStream("F:/Povray/soupautomat.txt");
		System.out.println("\""+sa+"\""); 
		output.println("\""+sa+"\",");
		int maxiter=100; 
		for(int i=0;i<maxiter;i++){
			sa.mutate(); 
			System.out.println("\""+sa+"\""); 
			output.print("\""+sa+"\"");
			if(i<maxiter-1) output.println(",");
			else output.println(); 
		}
	}
		catch(Exception e){System.out.println(e+ " probleme"); }

}
}
