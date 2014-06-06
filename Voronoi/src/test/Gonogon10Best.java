package test;

import java.io.PrintStream;
import java.util.HashSet;

import utils.Coordonnees;

public class Gonogon10Best {
	private static int compte=0; 
	private static int[]tenBestIndices=new int[10];
	private static double[] tenBestValues=new double[10]; 
	private static String[] tenBestString=new String[10];
	
	private static PrintStream  output; 
	
	
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
	/** Inserer la valeur dans le tableau **/
	public static void decale(){
		int indice=8; 
		while((indice>=0)&&(tenBestValues[indice]>tenBestValues[indice+1])){
			// echanger
			int indtemp=tenBestIndices[indice]; 
			String stemp=tenBestString[indice]; 
			double valtemp=tenBestValues[indice]; 
			tenBestIndices[indice]=tenBestIndices[indice+1];
			tenBestString[indice]=tenBestString[indice+1]; 
			tenBestValues[indice]=tenBestValues[indice+1]; 
			tenBestIndices[indice+1]=indtemp; 
			tenBestString[indice+1]=stemp; 
			tenBestValues[indice+1]=valtemp; 
			indice=indice-1; 
		}
		
	}
	
	public static double valeur(String s){
		int vmax=0;
		int vmin=0; 
		int hmax=0; 
		int hmin=0; 
		int vertical=0; 
		int horizontal=0; 
		for(int i=0;i<s.length();i++){
			switch(s.charAt(i)){
			case 'u':vertical+=i; if(vertical>vmax) vmax=vertical; break; 
			case 'd':vertical-=i; if(vertical<vmin) vmin=vertical; break; 
			case 'r': horizontal+=i; if(horizontal>hmax) hmax=horizontal; break; 
			case 'l':horizontal-=i; if (horizontal<hmin) hmin=horizontal; break;  
			}
		}
		int spanVert=vmax-vmin; 
		int spanHor=hmax-hmin; 
		double compacite; 
		if(spanVert>spanHor) compacite=spanHor/(spanVert+0.0); else compacite=spanVert/(spanHor+0.0);
		return 1.0-compacite; 
	}
	
	public static void affiche(HashSet<Coordonnees> p){
		System.out.println("---------------------"); 
		for(Coordonnees c: p)
			System.out.println(c); 
	}

	public static void  makeChaine(String s,int limit,HashSet<Coordonnees> pointsParcourus,int xReached,int yReached){
	
		if(s.length()==limit) {
			if(isClosed(s)&& (pointsParcourus.size()==limit*(limit+1)/2)){
			double comp=valeur(s); 
			System.out.println(compte+" #declare chemin=\""+s+"\"; "+ comp );
			output.println(compte+" #declare chemin=\""+s+"\"; "+ comp );
			
			if(comp<tenBestValues[9]){
				tenBestValues[9]=comp; 
				tenBestIndices[9]=compte; 
				tenBestString[9]=s; 
				decale();
			}
			compte++;
			}
			return;}
		
		
		int l=s.length(); 
		
		if(pointsParcourus.size()!=1+(l*(l+1)/2)) {
			//System.out.println("rate"+s); 
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
	
	// distance encore parcourable au maimum en x
	public static int dist1(int n){
		int u=n/2; 
		return u*(u+1); 
	}
	
	// distance encore parcourable au mximum en y
	public static int dist2(int n){
		return n*n/4; 
	}
	
	public static void main(String[] args) throws Exception {
		output=new PrintStream("/tmp/resu32.txt");
		for(int i=0;i<10;i++){
			tenBestIndices[i]=-1; 
			tenBestString[i]=""; 
			tenBestValues[i]=100;
		}
		HashSet<Coordonnees> init=new HashSet<Coordonnees>(); 
		init.add(new Coordonnees(0,0)); 
		init.add(new Coordonnees(0,1));
		init.add(new Coordonnees(1,1)); 
		init.add(new Coordonnees(2,1));
		

		makeChaine("ur",32,init,2,1); 

		for(int i=0;i<10;i++){
			System.out.println(i+" "+tenBestIndices[i]+" "+tenBestString[i]+" "+tenBestValues[i]); 
			output.println(i+" "+tenBestIndices[i]+" "+tenBestString[i]+" "+tenBestValues[i]);
		}
		output.close();
		}
	}
	

