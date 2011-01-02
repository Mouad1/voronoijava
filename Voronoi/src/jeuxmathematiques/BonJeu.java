package jeuxmathematiques;

import java.util.ArrayList;

public class BonJeu {
	
	private static int maxi=0; 
	private static void affiche(ArrayList<Integer> op){
		System.out.println("***"); 
		for(int i=0;i<op.size();i++)
			System.out.print(op.get(i));
		System.out.println();
	}
	
	private static void construit(int i,ArrayList<Integer> deja){
		if(deja==null) {
			deja=new ArrayList<Integer>();
			deja.add(i); 
		}
		if(deja.size()==10) {
			int resu=2011+(100*deja.get(0)+10*deja.get(1)+deja.get(2))+(100*deja.get(3)+10*deja.get(4)+deja.get(5)); 
			int resu2=1000*deja.get(6)+100*deja.get(7)+10*deja.get(8)+deja.get(9); 
			if(resu==resu2){
			affiche(deja); 
			if(resu2>maxi){
			maxi=resu2; 	
			System.out.println(maxi);
			}
			}
			
		}
		for (int j=0;j<10;j++){
			if(!deja.contains(j)){
				ArrayList<Integer> dbis=new ArrayList<Integer>(deja); 
				dbis.add(j); 
				construit(j,dbis); 
			
			}
			
		}
	}
	
	public static void main(String[] args) {
		System.out.println("debut"); 
	for(int i=0;i<10;i++){
	 construit(i,null); 
		System.out.println(maxi);
	}
	System.out.println("fin"); 
	}

}
