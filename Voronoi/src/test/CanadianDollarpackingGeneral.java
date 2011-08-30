package test;

public class CanadianDollarpackingGeneral extends EuroPacking {
	
	private static int nb=0; 
	protected static double diam[]={19.05,21.2,18.03,27.13,26.5,28}; 
	protected static String name[]={"1 cent","5 cents", "10 cents","25 cents","1 dollar","2 dollars"}; 
	
	
	static void verify(int t[]){
		for(int i=0;i<t.length;i++)
			System.out.print(t[i]+" "); 
			System.out.println();
	}
	
	static void compute(int t[]){
	
	
		for(int i=0;i<diam.length;i++){
			// choisir la piece centrale
			double cr=diam[i];
			// sommer les angles
			double sumAngles=0; 
			for(int j=0;j<t.length;j++){
				// ajouter l'angle forme par l'adjonction de la piece j
				double resu=(cr+diam[t[j]])*(cr+diam[t[j]])+(cr+diam[t[(j+1)%t.length]])*(cr+diam[t[(j+1)%t.length]]);
				resu=resu-(diam[t[j]]+diam[t[(j+1)%t.length]])*(diam[t[j]]+diam[t[(j+1)%t.length]]); 
				resu=resu/(2*(cr+diam[t[j]])*(cr+diam[t[(j+1)%t.length]]));
				double angle=Math.acos(resu); 
				sumAngles+=angle; 
			}// j	
			
			if(Math.abs(sumAngles-2*Math.PI)<0.1){
				nb++; 
				for(int k=0;k<t.length;k++)
					System.out.print(name[t[k]]+" "); 
				System.out.println("\n Avec au centre "+name[i]+ " "+sumAngles); 
			}
		}// for i
		
	}
	
	static protected void remplir(int tableau[]){
		if(tableau==null){
			for(int i=0;i<diam.length;i++){
				int t[]={i};
				remplir(t); 
			}// for i
			return;
		}	
		//System.out.println("remplir " +tableau.length); 
		if(tableau.length==8){
			nb++; 
			if(nb%100000==0)
				System.out.println(nb); 
			compute(tableau);
			//verify(tableau); 
			return; 
		}
		
	// ici, on est en cours de construction
		for(int j=0;j<diam.length;j++){
			int tp[]=new int[tableau.length+1]; 
			System.arraycopy(tableau, 0, tp, 0,tableau.length); 
			tp[tp.length-1]=j; 
			remplir(tp); 
		}// for j
	}
	
	public static void main(String[] args) {
		remplir(null); 
		System.out.println(nb); 

	}

}
