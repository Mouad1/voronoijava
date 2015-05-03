package utils;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class VertexAL extends Pos3D {
	private ArrayList<VertexAL> neighbours=new ArrayList<VertexAL>();
	private boolean istraced=false; 
	
	/**
	 * @return the istraced
	 */
	public boolean isIstraced() {
		return istraced;
	}

	/**
	 * @param istraced the istraced to set
	 */
	public void setIstraced(boolean istraced) {
		this.istraced = istraced;
	}

	public VertexAL(double x, double y, double z) {
		super(x, y, z);
	}
	
	public void setNeighbour(VertexAL v){
		neighbours.add(v); 
	}
	public Iterator<VertexAL> getIterator(){
		Collections.shuffle(neighbours); 
		return neighbours.iterator(); 	
}
	public boolean isNeighbours(VertexAL v){
		return neighbours.contains(v);
	}

	public int nbNeighbours() {
		return neighbours.size();
	}
	
	public static VertexAL add(VertexAL a,VertexAL b){
		VertexAL resu=new VertexAL(a.x+b.x,a.y+b.y,a.z+b.z);
		return resu; 
	}
	
	public static VertexAL mul(VertexAL a,double m){
		return new VertexAL(a.x*m,a.y*m,a.z*m); 
	}
	
	public static VertexAL middle(VertexAL a,VertexAL b){
		VertexAL m=new VertexAL((a.x+b.x)/2.0,(a.y+b.y)/2.0,(a.z+b.z)/2.0);
		return m;
	}
	public static double produitScalaire(VertexAL a,VertexAL b){
		return a.x*b.x+a.y*b.y+a.z*b.z; 
	}
	
	public double norme(){
		return Math.sqrt(x*x+y*y+z*z); 
	}
	
	public static VertexAL sub(VertexAL v1,VertexAL v2){
		return new VertexAL(v1.x-v2.x,v1.y-v2.y,v1.z-v2.z); 
	}
	
	public VertexAL(Pos3D a){
		super(a.x,a.y,a.z) ;
	}
	public static VertexAL produitVectoriel(VertexAL a,VertexAL b){
		double valx=a.y*b.z-a.z*b.y;
		double valy=a.z*b.x-b.z*a.x; 
		double valz=a.x*b.y-a.y*b.x; 
		return new VertexAL(valx,valy,valz); 
	}
	
	public static double cosAngle(VertexAL A,VertexAL B){
	return VertexAL.produitScalaire(A, B)/(A.norme()*B.norme());
	}
	
	public static double angle(VertexAL A,VertexAL B){
		return Math.acos(cosAngle(A,B)); 
	}
	
	public String rawString(){
		String s=x+","+y+","+z;
		return s; 
	}
	public String toString(){
		String s=super.toString(); 
		
		return s; 
	}
	
	// rotation d'angle phi autour de l'axe N, passant par C, du point M 
	public static VertexAL rotateAroundAxis(VertexAL M,VertexAL C,VertexAL N,double phi){
		VertexAL M1=VertexAL.sub(M,C);
	
		VertexAL Resu=VertexAL.mul(M1,Math.cos(phi)); // Premier terme
		double coef2=(1-Math.cos(phi))*VertexAL.produitScalaire(M1,N); 
		Resu=VertexAL.add(Resu,VertexAL.mul(N,coef2));
		VertexAL dern=VertexAL.mul(VertexAL.produitVectoriel(N, M1),Math.sin(phi));
		Resu=VertexAL.add(Resu,dern); 
		Resu=VertexAL.add(Resu,C);
		
		return Resu;
		
		
	}
	
	public static void main(String[] args) {
		// verifier la validite de rotateAroundAxis
		VertexAL follow=new VertexAL(5,0,0);
		VertexAL centre=new VertexAL(0,0,0);
		VertexAL axe=new VertexAL(0,2,0);
		for(int i=0;i<10;i++){
			 follow=VertexAL.rotateAroundAxis(follow, centre, axe, Math.PI); 
		     System.out.println(follow.norme()); 
		}
	}

	public String rawStringSpace() {
		String s=x+"1 "+y+" "+z;
		return s;
	}
	
}