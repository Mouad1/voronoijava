package test;

import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Random;

public class GenerateExplosionV2 {
	protected int size;
	protected int coteMax=100; 
	protected ArrayList<Triplet> dejaVu=new ArrayList<Triplet>(); 
	protected Random generator=new Random();
	protected static PrintStream output; 
	
	public GenerateExplosionV2(int s){
		this.size=s; 
	}
	
	public void makeobject(int nb){
		while(this.dejaVu.size()<nb){
			int i=generator.nextInt(size)+1;
			
			/*
			int j=generator.nextInt(size); 
			int k=generator.nextInt(size); 
			*/
			int cote=(coteMax*i)/size; 
			int j=2*generator.nextInt(1+cote/2)-cote/2; 
			int k=2*generator.nextInt(1+cote/2)-cote/2; 
			Triplet nouveau=new Triplet(j,k,i);
			
			//Triplet nouveau=new Triplet(i, j, k);
			if(!this.dejaVu.contains(nouveau))dejaVu.add(nouveau);
			
		}// while
	}
	public static void main(String[] args) throws FileNotFoundException {
		GenerateExplosionV2 cube=new GenerateExplosionV2(100); 
		cube.makeobject(10000); 
		for(Triplet t:cube.dejaVu)System.out.println(t); 
		output=new PrintStream("C:/Users/decomite/Pictures/povray/explosionV4.txt");
		//output=new PrintStream("F:/povray/explosionV2.txt");
		for(Triplet t:cube.dejaVu){
			output.print(t+","); 
		}
		output.close();
	}

}
