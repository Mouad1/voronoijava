package AlgoGenetiques;

import java.util.Random;

/**
 * une classe pour contenir deux enfants
* @author decomite
 *
 */

public class Sibling {
	private Individu f1,f2; 
	private Random generateur=new Random(); 
	
	public Sibling(Individu papa,Individu maman){
		String sf1=""; 
		String sf2=""; 
		for(int i=0;i<papa.getSize();i++){
			if(generateur.nextDouble()<0.5){
				sf1+=papa.getGenome().charAt(i); 
				sf2+=maman.getGenome().charAt(i); 
			}
			else
			{
				sf2+=papa.getGenome().charAt(i); 
				sf1+=maman.getGenome().charAt(i); 
			}
		}// for
		f1=new Individu(sf1);
		f2=new Individu(sf2); 
	}

	public Individu getF1() {
		return f1;
	}

	public Individu getF2() {
		return f2;
	}

}
