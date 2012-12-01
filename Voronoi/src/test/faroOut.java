package test;



public class faroOut {
	public static void affiche(int t[]){
		System.out.print("{");
		for(int i=0;i<t.length;i++){
			System.out.print(t[i]+" "); 
			if(i<t.length-1) System.out.print(","); 
		}
		System.out.println("},"); 
			
	}
	
	public static int[] faro(int t[]){
		int aux[]=new int[t.length]; 
		for (int i=0;i<t.length/2;i++)
			aux[2*i]=t[i]; 
		for(int i=t.length/2;i<t.length;i++)
			aux[1+2*(i-t.length/2)]=t[i];
		return aux; 
	}
	public static void main(String[] args) {
		int tab[]=new int[12]; 
		for(int i=0;i<tab.length;i++) tab[i]=i; 
		affiche(tab); 
		for(int i=0;i<10;i++){
		tab=faro(tab); 
		affiche(tab);
		}
	}

}
