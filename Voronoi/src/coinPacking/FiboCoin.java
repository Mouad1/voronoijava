package coinPacking;

public class FiboCoin {
	public static final FiboCoin oneFibo =new FiboCoin("1 Fibo",1,"oneFibo");
	public static final FiboCoin twoFibos =new FiboCoin("2 Fibos", 2,"twoFibos");
	public static final FiboCoin threeFibos=new FiboCoin ("3 Fibos",3,"threeFibos");
	public static final FiboCoin fiveFibos=new FiboCoin ("5 Fibos",5,"fiveFibos");
	public static final FiboCoin eightFibos=new FiboCoin ("8 Fibos",8,"eightFibos");
	public static final FiboCoin thirteenFibos =new FiboCoin("13 Fibos", 13,"thirteenFibos");
	public static final FiboCoin twentyOneFibos=new FiboCoin("21 Fibos",21,"twentyOneFibos"); 
	
	
	public String getPovrayName() {
		return PovrayName;
	}



	protected String name; 
	protected double size; 
	protected String PovrayName; 

	protected FiboCoin(String n,double diam,String f){
		this.name=n; 
		this.size=diam;
		this.PovrayName=f; 
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
