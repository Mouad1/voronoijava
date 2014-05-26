package test;

import java.util.HashSet;

import utils.Coordonnees;

public class Gonogon {
	private static int compte=0; 
	
	
	public static boolean isClosed(String s){
		int x=0; int y=0; 
		for(int i=0;i<s.length();i++){
			switch(s.charAt(i)){
			case 'u' : y=y+i+1; break; 
			case 'd' : y=y-i-1; break; 
			case 'r' : x=x+i+1; break; 
			case 'l' : x=x-i-1; break; 
			}
		}
		return (x==0)&&(y==0); 
	}
	
	public static void affiche(HashSet<Coordonnees> p){
		System.out.println("---------------------"); 
		for(Coordonnees c: p)
			System.out.println(c); 
	}
	
	public static void  makeChaine(String s,int limit,HashSet<Coordonnees> pointsParcourus,int xReached,int yReached){
		//affiche(pointsParcourus); 
		if(s.length()==limit) {
			if(isClosed(s)&& (pointsParcourus.size()==limit*(limit+1)/2)){
			System.out.println(compte+" #declare chemin=\""+s+"\";");
			compte++; 
			}
			return;}
		
		int l=s.length(); 
		
		if(pointsParcourus.size()!=1+(l*(l+1)/2)) {
			//System.out.println("rat� "+s); 
			return; 
		}
		
		HashSet<Coordonnees> pointsParcourusA=new HashSet<Coordonnees>(pointsParcourus); 
		HashSet<Coordonnees> pointsParcourusB=new HashSet<Coordonnees>(pointsParcourus); 
		char letter=s.charAt(s.length()-1); 
		if((letter=='l')||(letter=='r')){
			for(int i=1;i<=l+1;i++) {
				pointsParcourusA.add(new Coordonnees(xReached,yReached+i));
				pointsParcourusB.add(new Coordonnees(xReached,yReached-i));
			}
			makeChaine(s+'u',limit,pointsParcourusA,xReached,yReached+l+1); 
			makeChaine(s+'d',limit,pointsParcourusB,xReached,yReached-l-1); 
		}
		else
		{
			for(int i=1;i<=l+1;i++) {
				pointsParcourusA.add(new Coordonnees(xReached-i,yReached));
				pointsParcourusB.add(new Coordonnees(xReached+i,yReached));
			}	
			makeChaine(s+'l',limit,pointsParcourusA,xReached-l-1,yReached); 
			makeChaine(s+'r',limit,pointsParcourusB,xReached+l+1,yReached); 
		}
	}
	
	public static void main(String[] args) {
		HashSet<Coordonnees> init=new HashSet<Coordonnees>(); 
		init.add(new Coordonnees(0,0)); 
		init.add(new Coordonnees(0,1));
		init.add(new Coordonnees(1,1)); 
		init.add(new Coordonnees(1,2));
		
		
		makeChaine("ur",40,init,2,1); 
		compte=0;
		}
	}
	

