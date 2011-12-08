package graphs;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Locale;
import java.util.Random;
import java.util.Scanner;
import utils.Pos3D; 

/** Lire une description de graphe produite par graphviz, 
 * en extraire une description povray
 * 
 * @author decomite
 *
 */
public class ReadPlainFileSphereSweep2 {
	
	private Pos3D noeuds[]=new Pos3D[2000]; 
	private ArrayList<Couple> edges=new ArrayList<Couple>(); 
	 ArrayList<Integer> memo=new ArrayList<Integer>();
	private Random generator=new Random(1214); 
	private double spreadX=0,spreadY=0,maxi=0; 
	private String chemin; 
	public void afficheFichierTexte() {		
	this.chemin="C:/Users/decomite/Documents/tampongraphes/mygraph.plain"; 
      File source = new File(chemin);
      int nbnoeuds=0; 
      try{
      BufferedReader in = new BufferedReader(new FileReader(source));
      String ligne = in.readLine();
      Scanner rl=new Scanner(ligne); 
      rl.useLocale(Locale.US);
      String vide=rl.next();
      int pro=rl.nextInt(); 
      System.out.println(pro); 
      spreadX=rl.nextDouble();
      System.out.println(spreadX);
      spreadY=rl.nextDouble(); 
      maxi=Math.max(spreadX,spreadY);
      System.out.println("X "+ligne); 
      boolean fini=false;  
      while(!fini){
    	  ligne=in.readLine(); 
    	 // System.out.println(ligne); 
    	  rl=new Scanner(ligne);
    	  rl.useLocale(Locale.US);
    	  String first=rl.next(); 
    	  if(first.equals("node")){
    		  String nom=rl.next().substring(1); 
    		
    		  int n3=Integer.parseInt(nom); 
    		  System.out.print("---->"+nom+" "+n3+" "+nbnoeuds+" ");
    		  Double x=2*(rl.nextDouble()-spreadX/2)/spreadX; 
    		  Double y=2*(rl.nextDouble()-spreadY/2)/spreadY; 
    		  double nz=Math.sqrt(2-x*x-y*y); 
    		  if(generator.nextDouble()<1) nz=-nz; 
    		  System.out.println(x+" "+y+" "+nz+" "+(x*x+y*y+nz*nz)); 
    		  noeuds[n3]=new Pos3D(x,y,nz);
    		  if(!memo.contains(n3)) memo.add(n3); 
    		  nbnoeuds++; 
    	  } // node
    	 
    	  if(first.equals("edge")) // forcement edge
    	  {
    		  String nom1=rl.next().substring(1); 
    		  String nom2=rl.next().substring(1); 
    		  System.out.println("Arete "+nom1+" "+nom2); 
    		  int n1=Integer.parseInt(nom1); 
    		  int n2=Integer.parseInt(nom2); 
    		 if(n1!=n2)
    			  edges.add(new Couple(n1,n2)); 
    	  } //edge
    	  if(first.equals("stop")) fini=true; 
    	  
      }// while
      }
      catch(Exception e){System.out.println("Probleme : "+e); System.exit(0); }
   
      try{
    	PrintStream out=new PrintStream("C:/USers/decomite/Documents/tampongraphes/povrayGraphSpline.txt");   
      //System.out.println("#declare Position=array[2000]");
      out.println("#declare Position=array[2000]");
      
     
     
     
      for (int p:memo){
    	  out.println("#declare Position["+p+"]=<"+noeuds[p].getX()+","+noeuds[p].getY()+","+noeuds[p].getZ()+">;"); 
    	  
    	  String s; 
    	  if(generator.nextDouble()<=0.5)s="femme"; else s="homme"; 
    	  //System.out.println("cylinder{Position["+origine+"],Position["+arrivee+"],diam texture{T1} finish{F1}}"); 
    	  //out.println("sphere{Position["+origine+"],diams texture{T2} finish{F2}}");
    	  double cr=(0.5+0.5*generator.nextDouble()); 
    	  double cg=(0.5+0.5*generator.nextDouble()); 
    	  double cb=(0.5+0.5*generator.nextDouble()); 
    	  double roti=360*generator.nextDouble(); 
    	  out.println("object{"+s+" (rgb<"+cr+","+cg+","+cb+">) scale scg rotate "+roti+"*y ");
       	  out.println("finish{phong ph specular sp} ");
       	  out.println( "translate radio*y "); 
       	  out.println("Reorient_Trans(y,Position["+p+"])}");
       	   
      }// memo
      
   
      for(Couple c:edges){
    	int origine=c.getI(); 
	    int arrivee=c.getJ(); 
    	out.println("torusLink(Position["+origine+"],Position["+arrivee+"],radio,diam)");
    	
    	
    	
    	
      }
      
    
      System.out.println(memo.size()); 
    
      out.close();
      }
      catch(Exception e){System.out.println("probleme 2 "+e); System.exit(0); }
      
}
	public static void main(String[] args) {
		ReadPlainFileSphereSweep2 toto=new ReadPlainFileSphereSweep2(); 
		toto.afficheFichierTexte(); 
	}
	
	
}
