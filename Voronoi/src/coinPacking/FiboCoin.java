package coinPacking;

public class FiboCoin {
	public static final FiboCoin oneFibo =new FiboCoin("1 Fibo",1);
	public static final FiboCoin twoFibos =new FiboCoin("2 Fibos", 2);
	public static final FiboCoin threeFibos=new FiboCoin ("3 Fibos",3);
	public static final FiboCoin fiveFibos=new FiboCoin ("5 Fibos",5);
	public static final FiboCoin eightFibos=new FiboCoin ("8 Fibos",8);
	public static final FiboCoin thirteenFibos =new FiboCoin("13 Fibos", 13);
	public static final FiboCoin twentyOneFibos=new FiboCoin("21 Fibos",21); 
	
	
	protected String name; 
	protected double size; 

	protected FiboCoin(String n,double diam){
		this.name=n; 
		this.size=diam;
	}
	
	
	
	public String getName() {
		return name;
	}

	public double getSize() {
		return size;
	}



	public static int nbCoins=7; 
	public static FiboCoin listOfCoins[]={oneFibo,twoFibos,threeFibos,fiveFibos,eightFibos,thirteenFibos,twentyOneFibos}; 
	
	public String toString(){
		return this.name; 
	}
	
	public static void main(String[] args) {
		
		for(int i=0;i<nbCoins;i++)
			System.out.println(listOfCoins[i]); 
	}

}
