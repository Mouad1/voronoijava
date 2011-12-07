package graphs;

import java.io.PrintStream;
import java.util.Random;

/** Creer une description de graph en neato pour graphviz
 * ensuite, recuperer le fichier texte dans graphvis pour placer des objets en povray
 * 
 * @author decomite
 *
 */
public class createGraphFile {
	
	private boolean liens[][];
	
	
	private void creer(int n1, int n2,double proba, int nblinks){
		Random generator=new Random(); 
		this.liens=new boolean[n1][n2];
		for(int i=0; i<nblinks;i++){
			int m1=generator.nextInt(n1); 
			int m2=generator.nextInt(n2); 
			this.liens[m1][m2]=true; 
		}
		// tableau cree, on le sauve
		try{
			PrintStream output=new PrintStream("C:/Users/decomite/Documents/tampongraphes/mygraph.gv");  
			output.println("graph g {"); 
			for(int i=0;i<n1;i++){
				for(int j=0;j<n2;j++){
					if(this.liens[i][j]){
						output.println("N"+i+" -- "+"N"+j+";"); 
					}// if
				}// for j
			}// for i
			output.println("}");
			output.close(); 
		}
		catch(Exception e){System.out.println(e); System.exit(0); }
		
	}
	
	public static void main(String[] args) {
		createGraphFile mine=new createGraphFile(); 
		mine.creer(60,60,0.5,90); 
	}

}
