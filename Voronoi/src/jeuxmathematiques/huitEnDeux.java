package jeuxmathematiques;

import java.util.ArrayList;

public class huitEnDeux {
	private static int mask[]={1,2,4,8,16,32,64,128};
	private static void affiche(ArrayList<Integer> op){
		for(int i=0;i<op.size();i++)
			System.out.print(op.get(i));
		System.out.println();
	}
	
	private static boolean verify(ArrayList<Integer>op){
		//System.out.println("----------------");
		//affiche(op); 
		for(int i=0;i<op.size()-1; i++)
			for(int j=i+1;j<op.size();j++)
				if((op.get(i)+op.get(j))%2==0){
					int mid=(op.get(i)+op.get(j))/2; 
					if (op.contains(mid)) {
						//System.out.println(op.get(i)+" "+op.get(j)+" "+mid);
						return false;
					}
				}
		return true; 
	}
	
	public static void main(String[] args) {
		for(int i=0;i<256;i++){
			ArrayList<Integer> un=new ArrayList<Integer>(); 
			ArrayList<Integer>deux=new ArrayList<Integer>();
			for(int j=1;j<9;j++){
				if((i & mask[j-1])!=0)
					un.add(j); 
				else deux.add(j); 
			}// j
			if(!verify(un)||!verify(deux)) continue; 
			System.out.println("**************** "+i); 
			affiche(un); 
			affiche(deux); 
			
		}// i
	}

}
