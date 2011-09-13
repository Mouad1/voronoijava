package test;

public class DollarpackingGeneral extends EuroPacking {
	
	private static int nb=0; 
	protected static double diam[]={19.00,19.05,21.21,17.91,24.26,30.61,26.5}; 
	protected static String name[]={"1 cent","1 cent_redesigned", "5 cents", "10 cents","25 cents","50 cents","1 dollar"}; 
	
	
	static void verify(int t[]){
		for(int i=0;i<t.length;i++)
			System.out.print(t[i]+" "); 
			System.out.println();
	}
	
	static void compute(int t[]){
	
	
		for(int i=0;i<7;i++){
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
			
			if(Math.abs(sumAngles-2*Math.PI)<0.001){
				nb++; 
				for(int k=0;k<t.length;k++)
					System.out.print(name[t[k]]+" "); 
				System.out.println("\n Avec au centre "+name[i]+ " "+sumAngles); 
			}
		}// for i
		
	}
	
	static protected void remplir(int tableau[]){
		
	
		if(tableau==null){
			for(int i=0;i<7;i++){
				int t[]={i};
				remplir(t); 
			}// for i
			return;
		}	
		//System.out.println("remplir " +tableau.length); 
		if(tableau.length==8){
			compute(tableau);
			return; 
		}
		
	// ici, on est en cours de construction
		for(int j=0;j<7;j++){
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
