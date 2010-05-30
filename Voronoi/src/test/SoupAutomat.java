package test;

import java.io.PrintStream;




public class SoupAutomat {
	private int length=100;
	private char[] ligne; 
	private int[] auxi;
	private int xmin=1000; 
	private int minligne; 
	private int maxligne; 
	
	public SoupAutomat(int l,int debut,String motif){
		this.length=l; 
		ligne=new char[length]; 
		for(int i=0;i<length;i++) ligne[i]='.'; 
		for(int i=debut;i<debut+motif.length();i++) ligne[i]=motif.charAt(i-debut); 
		maxligne=0; 
		minligne=1000; 
		for(int i=0;i<length;i++)
			if(ligne[i]!='.'){minligne=i; break;}
		for(int i=length-1;i>=0;i--)
			if(ligne[i]!='.'){maxligne=i; break;}	
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
			
				if((posindex>=0)&&(posindex<length)){ // ya du taf a faire
					if(auxi[posindex]==-1) auxi[posindex]=val+1; 
					else auxi[posindex]+=(val+1); 
				}// if posindex
			}
		}// auxi est rempli, il faut transformer en caracteres
		
		int auxibis[]=new int[length]; 
		for(int i=0;i<length;i++) auxibis[i]=-1; 
		minligne=length; 
		maxligne=0;
		for(int i=0;i<length;i++){
			if(auxi[i]>0){
				if(i<minligne)minligne=i; 
				if(i>maxligne)maxligne=i;
				if(i<xmin) xmin=i; 
				if(auxi[i]<10) {
					if(auxibis[i]!=-1) auxibis[i]+=auxi[i];
					else auxibis[i]=auxi[i];
				}
				else{
					{
					if(auxibis[i]!=-1)
					auxibis[i]+=auxi[i]/10;
					else
					auxibis[i]=auxi[i]/10;
					}
					if(i<length-1){
					if(i==maxligne)maxligne++;	
					if(auxibis[i+1]!=-1)	
					auxibis[i+1]+=auxi[i]%10;
					else
					auxibis[i+1]=auxi[i]%10;	
					}
				}// else
			}// if
		}// for
			
		
		for(int i=0;i<length;i++){// transformer les nombre en car
			if(auxibis[i]==-1) ligne[i]='.'; 
			else
			{if(auxibis[i]<10) ligne[i]=charFor(auxibis[i]); 
			else{
			addVal(i+1,auxibis[i]%10);	
			ligne[i]=charFor(auxibis[i]/10); 
			}
			}
			
		}// for
	
	}
	
	public String toString(){
		String s=new String(ligne); 
		return s; 
	}
	
	public static void main(String[] args) {

		
		
		//String s="........................................................................................2..................."; 
		String s="88664422210137577998866442251013557799..............";
		PrintStream output;  
		int dist=80;
		SoupAutomat sa=new SoupAutomat(200,dist,s); 

		try{
			  output=new PrintStream("F:/Povray/soupautomat3.txt");
			//output=new PrintStream("/tmp/soupautomat2.txt");
			//output=new PrintStream("/tmp/soupautomat.txt");
		System.out.println("\""+sa+"\""); 
		output.println("\""+sa+"\","+sa.minligne+","+sa.maxligne+",");
		int maxiter=50; 
		for(int i=0;i<maxiter;i++){
			sa.mutate(); 
			System.out.println("\""+sa+"\""+"\n"+sa.minligne+" "+sa.maxligne); 
			output.print("\""+sa+"\""+","+sa.minligne+","+sa.maxligne);
			if(i<maxiter-1) output.println(",");
			else output.println(); 
		}
	}
		catch(Exception e){System.out.println(e+ " probleme"); }
		System.out.println(sa.xmin); 
}
}
