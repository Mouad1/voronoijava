package test;

import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Random;

public class GenerateExplosion {
	protected int size;
	protected ArrayList<Triplet> dejaVu=new ArrayList<Triplet>(); 
	protected Random generator=new Random();
	protected static PrintStream output; 
	
	public GenerateExplosion(int s){
		this.size=s; 
	}
	
	public void makeobject(int nb){
		while(this.dejaVu.size()<nb){
			int i=generator.nextInt(size); 
			int j=generator.nextInt(size); 
			int k=generator.nextInt(size);
			Triplet nouveau=new Triplet(i, j, k); 
			if(!this.dejaVu.contains(nouveau))dejaVu.add(nouveau);
			
		}// while
	}
	public static void main(String[] args) throws FileNotFoundException {
		GenerateExplosion cube=new GenerateExplosion(100); 
		cube.makeobject(50000); 
		for(Triplet t:cube.dejaVu)System.out.println(t); 
		output=new PrintStream("C:/Users/decomite/Pictures/povray/explosion.txt");
		for(Triplet t:cube.dejaVu){
			output.print(t+","); 
		}
		output.close();
	}

}
