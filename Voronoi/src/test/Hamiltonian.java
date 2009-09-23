/** Lire un fichier de description de polyhedre, 
 * sortir un fichier povray, et un chemin hamiltonien
 */

import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Iterator;

import utils.Vertex;

import utils.MyArrayList;



public class Hamiltonian {
	public static int n=0;
	public static PrintStream output;
	public static int  maxsize=55; 
	public static ArrayList<Vertex> trajet(ArrayList<Vertex> deja,ArrayList<Vertex> reste,Vertex v){
		n++;
		if(reste.isEmpty()){
			System.out.println("Houra !"); 
			return deja; 
		}
		Iterator<Vertex> it=v.getIterator(); 
		while(it.hasNext()){
			Vertex q=it.next();
			if(!deja.contains(q)){
				ArrayList<Vertex> dejax=new ArrayList<Vertex>(deja);
				ArrayList<Vertex> restex=new ArrayList<Vertex>(reste);
				dejax.add(v);
				restex.remove(q); 
				ArrayList<Vertex> presu=trajet(dejax,restex,q); 
				if(presu.size()>59) return presu; 
			}
		}
			if(deja.size()>maxsize){
				maxsize=deja.size(); 
				System.out.println("nouvelle taille max "+deja.size()+"("+n+")");
				for(int i=0;i<deja.size();i++){
					output.println(deja.get(i)+",diamsphere,");
					System.out.println(deja.get(i)+",diamsphere,");
				}
				output.println("\n\n"); 
			}
			return deja; 
	}
	
	
	public static void main(String[] args) throws Exception{
		output=new PrintStream("outRIDD.txt");
		MyArrayList<Vertex> sommets=new MyArrayList<Vertex>();
		double phi=(1+Math.sqrt(5))/2; 
		double phi2=phi*phi; 
		double phi3=phi2*phi; 
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++)
				for(int k=0;k<2;k++){
					
					sommets.add(new Vertex(2*i-1,2*j-1,phi3*(2*k-1)));
					sommets.add(new Vertex(phi3*(2*i-1),2*j-1,1*(2*k-1)));
					sommets.add(new Vertex(1*(2*i-1),phi3*(2*j-1),1*(2*k-1)));
					sommets.add(new Vertex(phi2*(2*i-1),phi*(2*j-1),2*phi*(2*k-1)));
					sommets.add(new Vertex(2*phi*(2*i-1),phi2*(2*j-1),phi*(2*k-1)));
					sommets.add(new Vertex(phi*(2*i-1),2*phi*(2*j-1),phi2*(2*k-1)));
				}
		
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++)
			{
				sommets.add(new Vertex((2+phi)*(2*i-1),0,phi2*(2*j-1)));
				sommets.add(new Vertex(phi2*(2*i-1),(phi+2)*(2*j-1),0));
				sommets.add(new Vertex(0,phi2*(2*i-1),(phi+2)*(2*j-1)));
			}
		System.out.println(sommets.size()); 
		double maxDist=100; 
		for(Vertex e:sommets)
			for(Vertex u:sommets){
				if(!e.equals(u)){
				if(e.distance(u)<maxDist){
					maxDist=e.distance(u); 
				}
				}
			}
		System.out.println(maxDist);
		ArrayList<Vertex> lsom=new ArrayList<Vertex>(); 
		int nna=0;
		for(Vertex b:sommets){
			lsom.add(b); 
			nna++;
			//System.out.println("sphere{"+b+",dia2 texture{Texture0} finish{Finish0}}//"+nna);
			for(Vertex u:sommets){ 
				if(Math.abs(b.distance(u)-maxDist)==0){
					b.setNeighbour(u); 
					u.setNeighbour(b);
				}
			}
		}
		
		/*
		for(Vertex b:sommets){
			Iterator<Vertex> it=b.getIterator(); 
			while(it.hasNext()){
				Vertex q=it.next(); 
				if(!q.isIstraced())
					output.println("cylinder{"+b+","+q+"rayon texture{Texture2} finish{Finish2}}"); 
			}
			b.setIstraced(true); 
			}
		}
			
		*/
		
		ArrayList<Vertex> resu=new ArrayList<Vertex>();
		Vertex debut=lsom.remove(0); 
		ArrayList<Vertex> circuit=trajet(resu, lsom,debut );
		System.out.println("--->"+circuit.size());
		
		output.println("sphere_sweep{\n linear_spline,\n"); 
		output.println(circuit.size()+","); 
		for(Vertex v:circuit){
			output.println(v+", diamsphere ,");
			System.out.println(v+", diamsphere ,");
		}
			 
}
}


