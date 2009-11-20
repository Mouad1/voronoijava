package test;

public class Permut {
	static private int cp=0;
	static private double distmin=5000; 
	static double[] distTerre={1.4,1.7,1,5.1,9.9,19.7,30.1};
	static double[][] distplanete={{0,0.6,2.0,4.8,9.5,20.1,29.8},
									{0.6,0,2.0,5.4,8.9,20.7,30.3}, 
									{2.0,2.0,0,6.1,9.3,20.5,31.1},
									{4.8,5.4,6.1,0,14.1,15.7,25},
									{9.5,8.9,9.3,14.1,0,29.5,38.4},
									{20.1,20.7,20.5,15.7,29.5,0,16.0},
									{29.8,30.3,31.1,25.0,38.4,16.0,0}
	};
	static String[] noms={"Mercure","Venus","Mars","Jupiter","Saturne","Uranus","Neptune"};
	static public void permut(int choisi[],int restant[]){
		if(restant.length==1){
			for(int i=0;i<choisi.length;i++)
				System.out.print(noms[choisi[i]]+" ");
			System.out.print(noms[restant[0]]);
			cp++; 
			double sum=distTerre[choisi[0]];
			for(int i=0;i<choisi.length-1;i++)
				sum+=distplanete[choisi[i]][choisi[i+1]]; 
			sum+=distplanete[choisi[choisi.length-1]][restant[0]]; 
			sum+=distTerre[restant[0]]; 
			if(sum<distmin){
				distmin=sum; 
			}
				System.out.println(" "+sum+" "+distmin); 
			
			
			return; 
		}
		//else
		int choisi1[]=new int[choisi.length+1]; 
		for(int i=0;i<choisi.length;i++)choisi1[i]=choisi[i];
		for(int i=0;i<restant.length;i++){
			int restant1[]=new int[restant.length-1];
			choisi1[choisi1.length-1]=restant[i]; 
			int k=0;
			for(int j=0;j<restant.length;j++)
				if(j!=i)
					restant1[k++]=restant[j];
			permut(choisi1,restant1); 
			
		}
	}
	
	static public void print(int t[]){
		for(int i=0;i<t.length;i++)
			System.out.print(t[i]+" "); 
		System.out.println();
	}
	public static void main(String[] args) {
		int debut[]={0,1,2,3,4,5,6};
		for(int i=0;i<debut.length;i++){
			int choisi[]=new int[1]; 
			choisi[0]=debut[i]; 
			int debut1[]=new int[6];
			int k=0;
			for(int j=0;j<7;j++)
				if(j!=i) debut1[k++]=debut[j];
			System.out.print(i+" ** ");
			print(debut1); 
			permut(choisi,debut1);
			
		
		}
		System.out.println("----"+distmin);
	}
	
}
