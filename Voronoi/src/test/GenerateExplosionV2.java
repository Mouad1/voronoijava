package test;

import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Random;

public class GenerateExplosionV2 {
	protected int size;
	protected ArrayList<Triplet> dejaVu=new ArrayList<Triplet>(); 
	protected Random generator=new Random();
	protected static PrintStream output; 
	
	public GenerateExplosionV2(int s){
		this.size=s; 
	}
	
	public void makeobject(int nb){
		while(this.dejaVu.size()<nb){
			int i=generator.nextInt(size); 
			int mk=(int)(Math.sqrt(0.5)*(1+size-i)); 
			int j=generator.nextInt(mk); 
			int k=generator.nextInt(mk);
			Triplet nouveau=new Triplet(i, j+(size-mk)/2, k+(size-mk)/2); 
			if(!this.dejaVu.contains(nouveau))dejaVu.add(nouveau);
			
		}// while
	}
	public static void main(String[] args) throws FileNotFoundException {
		GenerateExplosionV2 cube=new GenerateExplosionV2(100); 
		cube.makeobject(500); 
		for(Triplet t:cube.dejaVu)System.out.println(t); 
		output=new PrintStream("C:/Users/decomite/Pictures/povray/explosionV2.txt");
		for(Triplet t:cube.dejaVu){
			output.print(t+","); 
		}
		output.close();
	}

}
