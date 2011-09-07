package coinPacking;

public class EuroCoin extends FiboCoin{
	
	public static final EuroCoin oneEuro =new EuroCoin("1 Euro",1);
	public static final EuroCoin twoEuros =new EuroCoin("2 Euros", 2);
	
	
	protected EuroCoin(String n, double diam){
		super(n,diam); 
	}
	
	public static int nbCoins=2; 
	public static EuroCoin listOfCoins[]={oneEuro,twoEuros}; 
}
