package jeuxmathematiques;

public class ConseildeClasse {
	
	static private String toBin(int i){
		String s=""; 
		for (int j=0;j<12;j++){
			if(i%2==0) s="0"+s; else s="1"+s; 
			i=i/2; 
		}
		return s; 
	}
	
	static private int nbOfOnes(String s){
		int resu=0; 
		for(int i=0;i<s.length();i++)
				if(s.charAt(i)=='1') resu++; 
		return resu; 
	}
	
	
	public static void main(String[] args) {
		int maxi=0; 
		for(int i=0;i<4096;i++){
			String s=toBin(i); 
			if(nbOfOnes(s)==5){
				String s1=s.substring(0,6);
				String s2=s.substring(6,12); 
				if((nbOfOnes(s1)>=1)&&(nbOfOnes(s2)>=2)){
					System.out.println(s+" "+s1+" "+s2+" "+maxi);
					maxi++; 
				}
			}
		}
	}
}
