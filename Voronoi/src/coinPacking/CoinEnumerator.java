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
		System.out.print("Candidat ");
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
		int taille=E.listOfCoins.length; 
		double cr=p.getCenter().getSize();
		double sumAngles=0; 
		for(int j=0;j<E.listOfCoins.length;j++){
			double resu=(cr+E.listOfCoins[j].getSize())*(cr+E.listOfCoins[j].getSize()); 
			resu+=(cr+E.listOfCoins[(j+1)%taille].getSize())*(cr+E.listOfCoins[(j+1)%taille].getSize()); 
			resu-=(E.listOfCoins[j].getSize()+E.listOfCoins[(j+1)%taille].getSize())*(E.listOfCoins[j].getSize()+E.listOfCoins[(j+1)%taille].getSize());
			resu/=2*(cr+E.listOfCoins[j].getSize())*(cr+E.listOfCoins[(j+1)%taille].getSize());
			double angle=Math.acos(resu); 
			sumAngles+=angle;
		}// for j
		
		return (Math.abs(sumAngles-2*Math.PI)==0); 
	}
	
	/*
	 * for(int i=0;i<diam.length;i++){
			// choisir la piece centrale
			double cr=diam[i];
			// sommer les angles
			double sumAngles=0; 
			for(int j=0;j<t.length;j++){
				// ajouter l'angle forme par l'adjonction de la piece j
				double resu=(cr+diam[t[j]])*(cr+diam[t[j]])+(cr+diam[t[(j+1)%t.length]])*(cr+diam[t[(j+1)%t.length]]);
				resu=resu-(diam[t[j]]+diam[t[(j+1)%t.length]])*(diam[t[j]]+diam[t[(j+1)%t.length]]); 
				resu=resu/(2*(cr+diam[t[j]])*(cr+diam[t[(j+1)%t.length]]));
				double angle=Math.acos(resu); 
				sumAngles+=angle; 
			}// j	
			
			if(Math.abs(sumAngles-2*Math.PI)==0){
				nb++; 
				Couronne candidat=new Couronne(i,t);
				
	 * 
	 * */
	 
	
	
	
	
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
			verify(tableau); 
			for(int i=0;i<E.nbCoins;i++){
			Solution provi=new Solution(tableau,(E)E.listOfCoins[i]); 
			if(!lesSolutions.contains(provi))
				// tester
			if(bonneSolution(provi)){
				lesSolutions.add(provi); 
				System.out.println("On ajoute "+provi); 
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
	 CoinEnumerator<EuroCoin> toto=new CoinEnumerator<EuroCoin>(); 
	 toto.enumerate(7);
	 for(Solution e: toto.lesSolutions)
		 System.out.println(e); 
	 System.out.println(toto.lesSolutions.size()+" "+toto.compteur); 
	
}



}