package AlgoGenetiques;

import java.util.Arrays;
import java.util.Random;

/** Une population c'est un ensemble d'individus
 * et une fonction pour calculer la generation suivante
 * @author decomite
 *
 */
public class Population {
	private Random generateur=new Random();
	private int size; 
	private Individu[] laMasse; 
	public Population(int s,int nbc,int len){
		this.size=s; 
		laMasse=new Individu[size]; 
		Individu.setNbCarac(nbc);
		for(int i=0;i<size;i++) laMasse[i]=new Individu(len); 	
		this.sort(); 
	}
	
	private void sort(){
		Arrays.sort(this.laMasse); 
	}
	
	private double scoreMoyen(){
		double somme=0; 
		for(int i=0;i<this.size;i++)
			somme+=laMasse[i].score();
		return somme/this.size; 
	}
	
	public void nextGeneration(){
		Individu[] nouvos=new Individu[this.size];
		Individu papa,maman; 
		
		for(int i=0;i<size/2;i++){
			// selectionner un papa
			int p1=generateur.nextInt(size); 
			int p2=generateur.nextInt(size); 
			if(laMasse[p1].score()<laMasse[p2].score())
				papa=laMasse[p1]; 
			else
				papa=laMasse[p2]; 
			p1=generateur.nextInt(size); 
			p2=generateur.nextInt(size); 
			if(laMasse[p1].score()<laMasse[p2].score())
				maman=laMasse[p1]; 
			else
				maman=laMasse[p2]; 
			Sibling tempo=new Sibling(papa,maman);
			nouvos[2*i]=tempo.getF1(); 
			nouvos[2*i+1]=tempo.getF2(); 
			}
		this.laMasse=nouvos; 
		this.mutate(); 
	}
	
	private void mutate(){
		for(int i=0;i<size/10;i++){
			Individu n=this.laMasse[generateur.nextInt(size)];
			int taille=n.getNbCarac(); 
			String s=n.getGenome(); 
			int indice=1+generateur.nextInt(s.length()-1); 
			char c=Individu.getLesCaracteres().charAt(generateur.nextInt(2*taille)); 
			String niou=s.substring(0,indice-1)+c+s.substring(indice+1,s.length()-1);
			System.out.println(niou); 
		}
	}
	public static void main(String[] args) {
		Population city=new Population(1000,4,30); 
		for(int i=0;i<100;i++)System.out.println(city.laMasse[i]+" "+city.laMasse[i].score()); 
		for(int i=0;i<1000;i++){
			System.out.println(i+" "+city.scoreMoyen()); 
			city.nextGeneration(); 
		}
		city.sort(); 
		/*
		for(int i=0;i<100;i++)
			System.out.println(i+" "+city.laMasse[i]+" "+city.laMasse[i].score());
			*/ 
	}

}
