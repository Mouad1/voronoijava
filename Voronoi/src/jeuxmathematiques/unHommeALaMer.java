package jeuxmathematiques;

public class unHommeALaMer {
	
	private static double speed=35; 
	private static double speedNage=1.5; 
	private static double Azero=6.5; 
	private static double Bzero=24; 
	
	
	private static double f(int i){
		return 5.7+1.5/100000*i;
	}
	public static void main(String[] args) {
		double minMu=2; 
		double minD0=0;
		for(int i=0;i<100000;i++){
			double d0=f(i);
			double posA=Azero-d0; 
			double posB=Bzero-d0;
			double A=1222.75; 
			double B=-70*posB; 
			double C=posA*posA+posB*posB; 
			double delta=B*B-4*A*C; 
			System.out.println(i+" "+d0+" "+delta);
			if(delta>=0){
				
				System.out.println(Math.sqrt(delta)); 
				double mu1=(-B-Math.sqrt(delta))/(2*A); 
				double mu2=(-B+Math.sqrt(delta))/(2*A);
				if(mu1<minMu) {minMu=mu1; minD0=d0;} 
				if(mu2<minMu){minMu=mu2; minD0=d0;} 
				System.out.println(mu1+" "+mu2+" "+minMu+" "+minD0); 
			}
			
		}
	}

}
