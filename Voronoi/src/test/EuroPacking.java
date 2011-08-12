/** which euro coins are suitable for circle packing ? 
 **/

package test;

public class EuroPacking {
	protected static double diam[]={16.25,18.75,21.25,19.75,22.25,24.25,23.25,25.75}; 
	protected static String name[]={"1 cent","2 cents", "5 cents", "10 cents","20 cents","50 cents","1 euro","2 euros"}; 
	
	public static void main(String[] args) {
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				double sin=diam[j]/(diam[j]+diam[i]);
				double asin=Math.asin(sin); 
				double nb=Math.PI/asin;
				double fl=nb-Math.floor(nb); 
				if((fl<0.01) ||(fl>0.99))
				System.out.println(name[i]+ " entouré par "+Math.PI/asin+" pieces de "+name[j]+ " "+fl); 
			}
				
		}// i
		
	}

}
