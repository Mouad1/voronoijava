package atomes;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Scanner;

public class DecomposeWord {
	static public void afficheUneSolution(ArrayList<Element> s){
		System.out.println("affiche solution "+s.size()); 
		String symbols=""; 
		String names=""; 
		for(Element e: s){
			symbols+=e.getSymbole()+" "; 
			names+=e.getNomFrancais()+" "; 
		}
		System.out.println(symbols+"/"+names); 
	}
	
	static public void affiche(ArrayList<ArrayList<Element>> resultats,String ref){
		System.out.println("affiche "+ref) ; 
		for(ArrayList<Element> solution : resultats){
			//if(solution.size()==9)
			afficheUneSolution(solution); 
		}
	}
	
	static public void decompose(ArrayList<ArrayList<Element>> debuts,String reste,String ref){
		//System.out.println("-->"+ref); 
		if(reste.length()==0)
			affiche(debuts,ref); 
		for(Element e: Element.values()){
			if (reste.startsWith(e.getSymbole())){
				String nouveauReste=reste.substring(e.getSymbole().length()); 
				//System.out.println("\t\t"+e.getSymbole()+" "+reste+" "+nouveauReste);
				ArrayList<ArrayList<Element>> newDeb=new ArrayList<ArrayList<Element>>();
				for(ArrayList<Element> b:debuts){
					ArrayList<Element>newB=new ArrayList<Element>(b);
					newB.add(e); 
					newDeb.add(newB); 
				}
				decompose(newDeb,nouveauReste,ref); 
				
			}//if
					
		}// for
		
	}
	
	
	
	
	public static void main(String[] args) {
		
		 ArrayList<ArrayList<Element>> debuts=new ArrayList<ArrayList<Element>>();
		 ArrayList<Element> toto=new ArrayList<Element>(); 
		 debuts.add(toto);
		 /*
		 for(Element e: Element.values()){
			 debuts=new ArrayList<ArrayList<Element>>(); 
			 toto=new ArrayList<Element>(); 
			 debuts.add(toto);
			 decompose(debuts,e.getNomFrancais()); 
		 }//for
		 */
		 try{
			 File source = new File("src/atomes/NobelChimie.txt"); 
	         BufferedReader in = new BufferedReader(new FileReader(source));
	         String ligne = in.readLine().toLowerCase(); 
	         while(true){
	        	 debuts=new ArrayList<ArrayList<Element>>(); 
				 toto=new ArrayList<Element>(); 
				 debuts.add(toto);
				 Scanner r=new Scanner(ligne); 
				 while(r.hasNext()){
	        	 decompose(debuts,r.next(),ligne);
				 }
	        	 ligne=in.readLine().toLowerCase();
	         }
			 
		 }
		 catch(Exception e){System.out.println("fini "+e); }
		 
		 
	}

}
