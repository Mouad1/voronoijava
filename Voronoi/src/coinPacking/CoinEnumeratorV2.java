// La methode enumerate(n) construit tous les ensembles possibles 
// de pieces d'un set de pieces donne...
// Nouvelle version : on fixe la liste de piece au depart

package coinPacking;


import java.util.ArrayList;

import test.Couronne;

public class CoinEnumeratorV2 {
	
	public ArrayList<SolutionV2> lesSolutions=new ArrayList<SolutionV2>(); 
	
	private int nbCoins; 
	private Coin[] listOfCoins; 
	private int compteur=0; 
	public void enumerate(int n){
		remplir(null,n); 
	}
	
	public CoinEnumeratorV2(String[] names,String[] povrayNames,double[] values){
		this.nbCoins=names.length;
		this.listOfCoins=new Coin[this.nbCoins]; 
		for(int i=0;i<nbCoins;i++)
			this.listOfCoins[i]=new Coin(names[i],povrayNames[i],values[i]); 
	}
	

	protected void verify(ArrayList<Coin> t){
		for(Coin e: t)
			System.out.print(e+",");
		System.out.println(); 
		
	}

	
	protected void imprimeSolution(){
		System.out.println("*************"); 
		for(SolutionV2 s : lesSolutions)
			System.out.println(s); 
		System.out.println("***************"); 
	}
	
	private boolean bonneSolution(SolutionV2 p){
		int taille=p.getList().size(); 
		ArrayList<Coin> t=p.getList(); 
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
	
	
	
	
	
	
	protected void remplir(ArrayList<Coin> tableau,int n){
		if(tableau==null){
			for(int i=0;i<nbCoins;i++){
				ArrayList<Coin> t=new ArrayList<Coin>(); 
				t.add(0,listOfCoins[i]); 
				remplir(t,n);
				
			}// for i
			return;
		}	
		//System.out.println("remplir " +tableau.length); 
		if(tableau.size()==n){
			//compute(tableau);
			compteur++; 
			if(compteur%1000000==0) System.out.println(compteur); 
			for(int i=0;i<nbCoins;i++){
			SolutionV2 provi=new SolutionV2(tableau,listOfCoins[i]); 
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
		for(int j=0;j<nbCoins;j++){
			ArrayList<Coin> tp=new ArrayList<Coin>(); 
			for(int i=0;i<tableau.size();i++)
			tp.add(i,tableau.get(i));  
			tp.add(tableau.size(),listOfCoins[j]);
			remplir(tp,n); 
		}// for j
	}

 public static void main(String[] args) {
	 System.out.println("debut");
	 String names[]={"un","deux","trois","quatre","cinq","six","sept"}; 
	 String povnames[]={"one","two","three","four","five","six","seven"}; 
	 double diam[]={1.0,2.0,3.0,4.0,5.0,6.0,7.0}; 
	 CoinEnumeratorV2 toto=new CoinEnumeratorV2(names,povnames,diam); 
	 toto.enumerate(10);
	 for(SolutionV2 e: toto.lesSolutions)
		 System.out.println(e.toPovray()); 
	 System.out.println(toto.lesSolutions.size()+" "+toto.compteur); 
	
}



}