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
public class ReadPlainFileSphereSweep {
	
	private Pos3D noeuds[]=new Pos3D[2000]; 
	private ArrayList<Couple> edges=new ArrayList<Couple>(); 
	private Random generator=new Random(1214); 
	private double spreadX=0,spreadY=0,maxi=0; 
	private String chemin; 
	public void afficheFichierTexte() {		
	this.chemin="C:/Users/decomite/Documents/tampongraphes/plaingraph.plain"; 
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
      System.out.println(ligne); 
      boolean fini=false;  
      while(!fini){
    	  ligne=in.readLine(); 
    	 // System.out.println(ligne); 
    	  rl=new Scanner(ligne);
    	  rl.useLocale(Locale.US);
    	  String first=rl.next(); 
    	  if(first.equals("node")){
    		  String nom=rl.next().substring(1); 
    		  System.out.print("---->"+nom+" ");
    		  int n3=Integer.parseInt(nom); 
    		  Double x=2*(rl.nextDouble()-spreadX/2)/spreadX; 
    		  Double y=2*(rl.nextDouble()-spreadY/2)/spreadY; 
    		  double nz=Math.sqrt(2-x*x-y*y); 
    		  if(generator.nextDouble()<1) nz=-nz; 
    		  System.out.println(x+" "+y+" "+nz+" "+(x*x+y*y+nz*nz)); 
    		  noeuds[n3]=new Pos3D(x,y,nz);
    		  nbnoeuds++; 
    	  } // node
    	  if(first.equals("edge")) // forcement edge
    	  {
    		  String nom1=rl.next().substring(1); 
    		  String nom2=rl.next().substring(1); 
    		 // System.out.println("Arete "+nom1+" "+nom2); 
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
      
      for(int i=0;i<2000;i++)
    	   if(noeuds[i]!=null){
    	//  	System.out.println("#declare Position["+i+"]=<kx*"+noeuds[i].getX()+",ky*"+noeuds[i].getY()+",kz*"+noeuds[i].getZ()+">;"); 
      	//	System.out.println("sphere{Position["+i+"],diams texture{T2} finish{F2}}");
      		out.println("#declare Position["+i+"]=<"+noeuds[i].getX()+","+noeuds[i].getY()+","+noeuds[i].getZ()+">;"); 
      		//out.println("sphere{Position["+i+"],diams texture{T2} finish{F2}}");
    	   }
      for(Couple c:edges){
    	  int origine=c.getI(); 
    	  int arrivee=c.getJ(); 
    	  //System.out.println("cylinder{Position["+origine+"],Position["+arrivee+"],diam texture{T1} finish{F1}}"); 
    	  //out.println("sphere{Position["+origine+"],diams texture{T2} finish{F2}}");
    	  out.println("#torusLink(Position["+origine+"],Position["+arrivee+"],echelle)"); 
    	
      }// c
      out.close();
      }
      catch(Exception e){System.out.println("probleme 2 "+e); System.exit(0); }
      
}
	public static void main(String[] args) {
		ReadPlainFileSphereSweep toto=new ReadPlainFileSphereSweep(); 
		toto.afficheFichierTexte(); 
	}
	
	
}
