package utils;

public class Determinant3 {
	private double[][] v=new double[3][3];

	/**
	 * 
	 */
	public Determinant3(double[][] values) {
		this.v=values; 
	} 
	public double eval(){
		double sum=v[0][0]*(v[1][1]*v[2][2]-v[1][2]*v[2][1]);
		sum-=v[0][1]*(v[1][0]*v[2][2]-v[1][2]*v[2][0]); 
		sum+=v[0][2]*(v[1][0]*v[2][1]-v[1][1]*v[2][0]); 
		return sum;
	}
	

}
