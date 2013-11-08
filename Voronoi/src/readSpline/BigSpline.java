package readSpline;

import java.util.ArrayList;

import utils.Pos3D;

public class BigSpline {
	private Pos3D[] controles; 
	private int taille; 
	private int numero; 
	private static int ordre=0; 
	
	public BigSpline(Pos3D[] lesPoints){
		this.controles=new Pos3D[lesPoints.length]; 
		for(int i=0;i<lesPoints.length;i++) this.controles[i]=new Pos3D(lesPoints[i]);
		this.taille=lesPoints.length; 
		this.numero=ordre++; 
	}
	
	public BigSpline(ArrayList<Pos3D> lesPoints){
		this.controles=new Pos3D[lesPoints.size()];
		int i=0; 
		for(Pos3D p:lesPoints) {
			this.controles[i]=new Pos3D(lesPoints.get(i));
			i++;
		}
		this.taille=lesPoints.size(); 
		this.numero=ordre++; 
	}
	
	/** calcule le point de la courbe pour le parametre t **/
	protected Pos3D computePoint(double t){
		Pos3D[] coefs=new Pos3D[this.taille] ;
		for(int i=0;i<this.taille;i++) coefs[i]=new Pos3D(this.controles[i]);
		// calculer une nouvelle ligne
		for(int j=0;j<this.taille;j++){
			//System.out.println("j "+j); 
			for(int i=0;i<this.taille-j-1;i++){
				
				coefs[i]=Pos3D.add(Pos3D.mul(coefs[i],1.0-t),Pos3D.mul(coefs[i+1], t));
				//System.out.println("\t i "+i+" "+coefs[i]);
			}
		}//for j
		
		return coefs[0]; 
	}
	
	/** Construire une liste de n+1 points 0,1/n,...,1 avec l'algo de Casteljau **/ 
	protected ArrayList<String> makeListe(int n){
		ArrayList<String> resu=new ArrayList<String>(); 
		double increment=1.0/n; 
		double parametre=0; 
		for(int i=0;i<=n+1;i++){
			// Calculer le point de la courbe parametrique pour i/n
			resu.add(String.format("%.5g", parametre)+","+computePoint(parametre).toStringRestrict()); 
			parametre+=increment; 
		}//for
		return resu; 
	}
	
	protected static String vtrans(Pos3D p,double a,double b,double c){
		return "vtransform("+p.toStringRestrict()+",transform{translate<"+String.format("%.8g",a)+",0,"+String.format("%.8g",b)+"> scale<"+String.format("%.5g",c)+",1,"+String.format("%.5g",c)+">})\n"; 
	}
	
	public String toPovray(int nbDiv,double minx,double maxx,double miny,double maxy){
		double xampli=maxx-minx; 
		double yampli=maxy-miny; 
		double xcenter=(maxx+minx)/2; 
		double ycenter=(maxy+miny)/2; 
		
		double rap; 
		// la plus grande dimension se ramene a 1
		if(xampli>yampli) rap=1/xampli; 
		else rap=1/yampli;
		
		ArrayList<String> lesPoints=this.makeListe(nbDiv); 
		String resu=""; 
		
		
		resu+="#declare Spline"+numero+"=spline{\n"; 
		resu+="linear_spline\n"; 
		for(int i=0;i<nbDiv;i++)
		resu+=((i+0.0)/nbDiv)+","+vtrans(computePoint((i+0.0)/nbDiv),-xcenter,-ycenter,rap);  
		resu+="1.0,"+vtrans(computePoint(0.0),-xcenter,-ycenter,rap);  
		resu+="}\n";
		return resu;
	}
	
	
	
public static void main(String[] args) {
	Pos3D A=new Pos3D(0,0,0); 
	Pos3D B=new Pos3D(1,1,1); 
	Pos3D C=new Pos3D(1,-1,1); 
	Pos3D D=new Pos3D(2,2,2);
	Pos3D liste[]={A,B,C,D}; 
	BigSpline bs=new BigSpline(liste); 
	System.out.println(bs.computePoint(0.5));
	for(String s:bs.makeListe(10))
		System.out.println(s); 
}
}

