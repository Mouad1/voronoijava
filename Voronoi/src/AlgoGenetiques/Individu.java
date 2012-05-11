package AlgoGenetiques;

import java.util.Random;

/**
 * Un individu est une liste de caracteres, de longueur paire, 
 * zvec les contraintes standards : 
 * - une lettre n'apparait que si les precedentes existent deja
 * - pas de majuscule avant une minuscule
 * - equilibre des opposes
 * - pas forcement une solution
 * @author decomite
 *
 */
public class Individu implements Comparable<Individu>{
	private static Random generateur=new Random();
	private static String lesChaines[]={"","aA","abAB","abcABC","abcdABCD","abcdeABCDE","abcdefABCDEF"}; 
	/** Longueur du genome**/
	private int size; 
	/** Nombre de caracteres utilises **/
	private static int nbCarac; 
	/** Variable auxiliaire : les caracteres utilises **/
	private static String lesCaracteres; 
	/** la chaine **/
	private String genome; 
	
	public static void setNbCarac(int n){
		nbCarac=n; 
		lesCaracteres=lesChaines[n]; 
	}
	
	public int getSize(){return size; }
	
	public String getGenome() {
		return genome;
	}

	public Individu(String s){
		this.genome=s; 
		this.size=this.genome.length(); 
	}
	public static String getLesCaracteres() {
		return lesCaracteres;
	}

	public static String[] getLesChaines() {
		return lesChaines;
	}

	public static int getNbCarac() {
		return nbCarac;
	}

	public Individu(int s){
		this.size=s; 
		this.lesCaracteres=lesChaines[nbCarac];
		boolean pos[]=new boolean[nbCarac];
		for(int i=0;i<nbCarac;i++){
			pos[i]=false; 
		}
		this.genome=this.makeGenome("",pos,0); 
	}
	
	private String makeGenome(String s,boolean[] pos,int indMax){
		if(s.length()==size) return s;  
		while(true){ // trouver un caractere possible
			int place=generateur.nextInt(2*this.nbCarac);
			// Caractere minuscule non autorise
			if((place>indMax)&&(place<nbCarac)) continue; 
			// pas de majuscule avant la minuscule
			if((place>=nbCarac)&&(!pos[place-nbCarac])) continue; 
			char u=this.lesCaracteres.charAt(place);
			// pas de aA ou de Aa
			boolean trouve=false; 
			if(s.length()>=1){
				int u1=(int)s.charAt(s.length()-1);
				int u2=(int)u; 
				if(Math.abs(u1-u2)==32) {
					//System.out.println(s+" "+s.charAt(s.length()-1)+" "+u);
					trouve=true; 
				}
			}
			if(trouve) continue; 
			int nIM=indMax; 
			if(place==indMax){
				nIM=Math.min(nbCarac,indMax+1); 
			}
			if(place<nbCarac) pos[place]=true; 
			return makeGenome(s+u,pos,nIM);
		}// while
		
	}
	
	
	protected  boolean isBalanced(){
		int compt[]=new int[nbCarac]; 
		for(int i=0;i<nbCarac;i++)compt[i]=0; 
		for(int i=0;i<size;i++){
			int u=(int)genome.charAt(i);
			if(u>=97) compt[u-97]--; 
			else compt[u-65]++; 
		}
		for(int i=0;i<nbCarac;i++){
			if(compt[i]!=0) return false; 
		}
		return true; 
		
	}
	
	
	protected  static String oter(String s,int n){
		String s1=""; 
		for(int i=0;i<s.length();i++){
			int u=(int)s.charAt(i); 
			if((u==(int)lesCaracteres.charAt(n))||(u==(int)lesCaracteres.charAt(n+nbCarac)));
			else s1+=s.charAt(i);
		}// for
		return s1; 
	}
	
	
	protected static String simplifier(String s){
		String s1=""; 
		int cursor=0; 
		while(cursor<s.length()-1){
			int u1=(int) s.charAt(cursor);
			int u2=(int) s.charAt(cursor+1);
			if(Math.abs(u1-u2)==32) 
				cursor+=2; 
			else {
				s1=s1+s.charAt(cursor);
				cursor++;
				} 
		}// while
		if(cursor==s.length()-1) s1+=s.charAt(cursor);
		return s1; 	
		}
	
	protected static boolean isSimplifiable(String s){
		String s1=new String(s); 
		String s2=""; 
		boolean fini=false; 
		while(!fini){
			s2=simplifier(s1);
			fini=s2.equals(s1);
			s1=s2; 
		}
		return s1.length()==0;
	}
	
	public  boolean isAcceptable(){
		String s=this.genome; 
		for(int i=0;i<nbCarac;i++){
			System.out.println(i+"-->"+oter(s,i)); 
			if (!isSimplifiable(oter(s,i))) return false; 
		}
		return true; 
	}
	
	/** calculer le score d'un genome **/

	protected int score(){
		int somme=0; 
		for(int i=0;i<nbCarac;i++)
			somme+=simplifier(oter(this.genome,i)).length(); 
		return somme; 
	}
	

		
	@Override
	public int compareTo(Individu arg0) {
		// TODO Auto-generated method stub
		return this.score()-arg0.score();
	}
	
	
	public String toString(){return this.genome; }
	
	public static void main(String argv[]) {
		setNbCarac(2); 
		for(int i=0;i<10000;i++){
			Individu toto=new Individu(10); 
			boolean b=toto.isAcceptable(); 
			System.out.println("main "+toto+" "+b); 
			if(b) System.exit(0); 
		}

}

}
