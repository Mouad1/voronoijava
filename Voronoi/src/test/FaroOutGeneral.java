package test;



public class FaroOutGeneral {
	
	public static void affiche(int t[]){
		System.out.print("{");
		for(int i=0;i<t.length;i++){
			System.out.print(t[i]+" "); 
			if(i<t.length-1) System.out.print(","); 
		}
		System.out.println("},"); 
			
	}
	
	public static boolean isSorted(int t[]){
		for(int i=0;i<t.length;i++)
			if(t[i]!=i) return false; 
		return true; 
	}
	
	// calcule la longueur du cycle de faro pour 2*n cartes
	public static int makeFaro(int n){
		int tab[]=new int[2*n];
		int turn=0; 
		for(int i=0;i<2*n;i++) tab[i]=i;
		do{
			//affiche(tab); 
			int aux[]=new int[2*n]; 
			for (int j=0;j<n;j++)
				aux[2*j]=tab[j]; 
			for(int j=n;j<2*n;j++)
				aux[1+2*(j-n)]=tab[j];
		System.arraycopy(aux,0,tab, 0,2*n);
		turn++; 
		}while(!isSorted(tab));
		//affiche(tab); 
		return turn; 
	}
	
	
	public static void main(String[] args) {
		double rapmin=10000; 
		for(int i=1;i<7500;i++){
			int u=makeFaro(i);
			if(2.0*i/u<rapmin){
				rapmin=2.0*i/u; 
				System.out.println(2*i+" "+u+" "+rapmin);
			}
		
		}
	}

}
