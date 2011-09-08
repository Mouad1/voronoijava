package coinPacking;

public class Coin {
	
	private String name; 
	private String povrayName; 
	private double size;
	public Coin(String name, String povrayName, double size) {
		super();
		this.name = name;
		this.povrayName = povrayName;
		this.size = size;
	}
	public String getName() {
		return name;
	}
	public String getPovrayName() {
		return povrayName;
	}
	public double getSize() {
		return size;
	}
	
	public String toString(){return this.name;}

}
