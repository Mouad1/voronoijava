package demaine;

public class SearchingSolution {
	private static int nbCarac=4; 
	private static String carac="abcdABCD"; 
	private static int nb=0;
	private static int superNB=0; 
	private static int taille=14; 
	
	public static void construireChaine(String s){
		if(s.length()==taille) {
			if(isbalanced(s)){
			 if(isAcceptable(s)){	
			  System.out.println("------------------------>"+s+" "+nb); 
		
			 }
			}
			nb++; 
			if(nb==10000000) 
			{
				superNB++; 
				nb=0;
				System.out.println(superNB+"("+s+")"); }
			
			return;
			}
		else
			// Supprimer les chaines avec simplification
			if(s.length()>=2)// au moins deux caracteres
			{
				int u1=(int) s.charAt(s.length()-2);
				int u2=(int) s.charAt(s.length()-1);
				if(Math.abs(u1-u2)==32) return; 
			}
			
			
			for(int i=0;i<nbCarac*2;i++)
				construireChaine(s+carac.charAt(i)); 
		return;
	}
	
	public static String simplifier(String s){
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
			
	public static boolean isSimplifiable(String s){
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
	public static String oter(String s,int n){
		String s1=""; 
		for(int i=0;i<s.length();i++){
			int u=(int)s.charAt(i); 
			if((u==(int)carac.charAt(n))||(u==(int)carac.charAt(n+nbCarac)));
			else s1+=s.charAt(i);
		}// for
		return s1; 
	}
	
	private static boolean isbalanced(String s){
		int compt[]=new int[nbCarac]; 
		for(int i=0;i<nbCarac;i++)compt[i]=0; 
		for(int i=0;i<taille;i++){
			int u=(int)s.charAt(i);
			if(u>=97) compt[u-97]--; 
			else compt[u-65]++; 
		}
		for(int i=0;i<nbCarac;i++){
			if(compt[i]!=0) return false; 
		}
		return true; 
		
	}
	
	// on enleve chacune des lettres et on regarde si ça se simplifie en la chaine vide
	private static boolean isAcceptable(String s){
		for(int i=0;i<nbCarac;i++){
			if (!isSimplifiable(oter(s,i))) return false; 
		}
		return true; 
	}
	
	public static void main(String[] args) {
		construireChaine("ab");
		
	
		
	}

}
