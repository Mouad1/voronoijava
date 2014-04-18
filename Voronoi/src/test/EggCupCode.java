package test;

import java.io.PrintStream;

import utils.Pos3D;

public class EggCupCode {
	public static void main(String[] args) throws Exception{
		int n=7; 
		
		double fi=(1+Math.sqrt(5))/2;
		double Hauteur=3.8; 
		int decale=1;
	
		double R=2.5;
		double u=2.1;
		double theta=Math.sqrt(2*(1+Math.cos(2*Math.PI/n))); 
		double r=R*u/(R*theta-u); 
		double h=R*Hauteur/(R+r); 
		Pos3D pointHaut[]=new Pos3D[n];
		Pos3D pointBas[]=new Pos3D[n];
		int number=0;
		PrintStream  outputBlender=new PrintStream("/tmp/eggCup.inc");
		System.out.println("hauteur "+h); 
		
		for(int i=0;i<n;i++){
			pointHaut[i]=new Pos3D(r*Math.cos(2*Math.PI*i/n), Hauteur, r*Math.sin(2*Math.PI*i/n));
			pointBas[i]=new Pos3D(R*Math.cos(2*Math.PI*i/n), 0, R*Math.sin(2*Math.PI*i/n));
		
			//les spheres
			outputBlender.println("6 "+pointHaut[i].getX()+" "+pointHaut[i].getZ()+" "+Hauteur+" 1");
			outputBlender.println("6 "+pointBas[i].getX()+" "+pointBas[i].getZ()+" 0 1");
		}
		for(int i=0;i<n;i++){
			  // Les cylindres
			  outputBlender.println("7 "+pointBas[(i+decale)%n].forBlenderTwistYZSpace()+" "+pointHaut[i].forBlenderTwistYZSpace()+" 1");  
			  outputBlender.println("7 "+pointBas[(i+n-decale)%n].forBlenderTwistYZSpace()+" "+pointHaut[i].forBlenderTwistYZSpace()+" 1");  
			  outputBlender.println("7 "+pointBas[(i+1)%n].forBlenderTwistYZSpace()+" "+pointBas[i].forBlenderTwistYZSpace()+" 1"); 
		}
		outputBlender.close();
	
	}
	

}
