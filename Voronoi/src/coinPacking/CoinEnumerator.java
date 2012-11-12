// La methode enumerate(n) construit tous les ensembles possibles 
// de pieces d'un set de pieces donne...

package coinPacking;


import java.util.ArrayList;

import test.Couronne;

public class CoinEnumerator<E extends FiboCoin> {
	
	public ArrayList<Solution<E>> lesSolutions=new ArrayList<Solution<E>>(); 
	
	private int compteur=0; 
	public void enumerate(int n){
		remplir(null,n); 
	}

	protected void verify(ArrayList<E> t){
		for(E e: t)
			System.out.print(e+",");
		System.out.println(); 
		
	}

	
	protected void imprimeSolution(){
		System.out.println("*************"); 
		for(Solution s : lesSolutions)
			System.out.println(s); 
		System.out.println("***************"); 
	}
	
	private boolean bonneSolution(Solution p){
		int taille=p.getList().size(); 
		ArrayList<E> t=p.getList(); 
		double cr=p.getCenter().getSize();
		double sumAngles=0; 
		for(int j=0;j<taille;j++){
			double resu=(cr+t.get(j).getSize())*(cr+t.get(j).getSize()); 
			resu+=(cr+t.get((j+1)%taille).getSize())*(cr+t.get((j+1)%taille).getSize()); 
			resu-=(t.get(j).getSize()+t.get((j+1)%taille).getSize())*(t.get(j).getSize()+t.get((j+1)%taille).getSize()); 
			resu/=2*(cr+t.get(j).getSize())*(cr+t.get((j+1)%taille).getSize());
			double angle=Math.acos(resu); 
			sumAngles+=angle;
		}// for j
		
		return (Math.abs(sumAngles-2*Math.PI)<1e-8); 
	}
	
	
	
	
	
	
	protected void remplir(ArrayList<E> tableau,int n){
		if(tableau==null){
			for(int i=0;i<E.nbCoins;i++){
				ArrayList<E> t=new ArrayList<E>(); 
				t.add(0,(E) E.listOfCoins[i]); 
				remplir(t,n);
				
			}// for i
			return;
		}	
		//System.out.println("remplir " +tableau.length); 
		if(tableau.size()==n){
			//compute(tableau);
			compteur++; 
			if(compteur%1000000==0) System.out.println(compteur); 
			for(int i=0;i<E.nbCoins;i++){
			Solution provi=new Solution(tableau,(E)E.listOfCoins[i]); 
			if(!lesSolutions.contains(provi))
				// tester
			if(bonneSolution(provi)){
				lesSolutions.add(provi); 
				System.out.println("On ajoute "+provi); 
				System.out.println(provi.toPovray()); 
			}
			}
			return; 
		}
		
	// ici, on est en cours de construction
		for(int j=0;j<E.nbCoins;j++){
			ArrayList<E> tp=new ArrayList<E>(); 
			for(int i=0;i<tableau.size();i++)
			tp.add(i,tableau.get(i));  
			tp.add(tableau.size(),(E)E.listOfCoins[j]);
			remplir(tp,n); 
		}// for j
	}

 public static void main(String[] args) {
	 System.out.println("debut");
	 CoinEnumerator<FiboCoin> toto=new CoinEnumerator<FiboCoin>(); 
	 toto.enumerate(6);
	 for(Solution e: toto.lesSolutions)
		 System.out.println(e.toPovray()); 
	 System.out.println(toto.lesSolutions.size()+" "+toto.compteur); 
	
}



}