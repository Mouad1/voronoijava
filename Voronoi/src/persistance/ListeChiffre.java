package persistance;

import java.util.ArrayList;

public class ListeChiffre {
	private ArrayList<Integer>chiffres; 
	private boolean contient5=false; 
	private boolean contientPair=false; 
	
	public ListeChiffre(int a){
		chiffres=new ArrayList<Integer>(); 
		do{
		this.chiffres.add(a%10); 
		if(a%10==5) contient5=true; 
		if((a%10)%2==0) contientPair=true;
		a=a/10; 
		}
		while(a!=0);
	}
	
	public ListeChiffre mul(int a){
		ListeChiffre resu=new ListeChiffre(1); 
		int retenue=0; 
		for(int i=0;i<this.chiffres.size();i++){
			int res=resu.chiffres.get(i)*a+retenue; 
			resu.chiffres.set(i,res%10); 
			retenue=res/10; 
		}
		return resu; 
	}
	
	@Override
	public String toString() {
		String s=""; 
		for(int i=0;i<chiffres.size();i++)
			s+=chiffres.get(i)+""; 
	    return s; 
	}
	
	public static void main(String[] args) {
		ListeChiffre essai=new ListeChiffre(12); 
		System.out.println(essai); 
	}

}
