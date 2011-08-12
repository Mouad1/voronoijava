package test;

public class EuropackingGeneral extends EuroPacking {
	
	private static int nb=0; 
	
	static void verify(int t[]){
		for(int i=0;i<t.length;i++)
			System.out.print(t[i]+" "); 
			System.out.println();
	}
	
	static void compute(int t[]){
	
	
		for(int i=0;i<8;i++){
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
			
			if(Math.abs(sumAngles-2*Math.PI)<0.01){
				nb++; 
				for(int k=0;k<t.length;k++)
					System.out.print(name[t[k]]+" "); 
				System.out.println("\n Avec au centre "+name[i]+ " "+sumAngles); 
			}
		}// for i
		
	}
	
	static protected void remplir(int tableau[],int lastIndex){
		
	
		if(tableau==null){
			for(int i=0;i<8;i++){
				int t[]={i};
				remplir(t,i); 
			}// for i
			return;
		}	
		//System.out.println("remplir " +tableau.length); 
		if(tableau.length==5){
			compute(tableau);
			return; 
		}
		
	// ici, on est en cours de construction
		for(int j=lastIndex;j<8;j++){
			int tp[]=new int[tableau.length+1]; 
			System.arraycopy(tableau, 0, tp, 0,tableau.length); 
			tp[tp.length-1]=j; 
			remplir(tp,j); 
		}// for j
	}
	
	public static void main(String[] args) {
		remplir(null,0); 
		System.out.println(nb); 

	}

}
