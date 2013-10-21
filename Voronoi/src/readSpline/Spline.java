package readSpline;

import utils.Pos3D;
public class Spline {
	
	private Pos3D A,B,C,D; 
	private int numero; 
	private static int ordre=0; 
	
	public Spline(Pos3D a,Pos3D b,Pos3D c,Pos3D d){
		this.A=a; 
		this.B=b; 
		this.C=c; 
		this.D=d;
		this.numero=ordre++; 
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
		String resu=""; 
		resu+="#declare tranche=array[4];\n"; 
		resu+="#declare tranche[0]="+A+";\n"; 
		resu+="#declare tranche[1]="+B+";\n"; 
		resu+="#declare tranche[2]="+C+";\n"; 
		resu+="#declare tranche[3]="+D+";\n"; 
		
		resu+="#declare Spline"+numero+"=spline{\n"; 
		resu+="natural_spline\n"; 
		resu+="#declare index=0;\n"; 
		resu+="#declare nbpoints="+nbDiv+";\n"; 
		resu+="#while(index<=nbpoints)\n"; 
		resu+="#declare t1=index/nbpoints;\n" ;
		resu+="#declare umt1=1-t1;\n";   
		resu+="#declare centre1=umt1*umt1*umt1*tranche[0]+3*umt1*umt1*t1*tranche[1]+3*umt1*t1*t1*tranche[2]+t1*t1*t1*tranche[3];\n"; 
		resu+="t1, vtransform(centre1,transform{translate<"+(-xcenter)+",0,"+(-ycenter)+"> scale<"+rap+",1,"+rap+">})\n"; 
		resu+="#declare index=index+1;\n" ;
		resu+="#end}\n"; 
		return resu;
	}

}














/*

 #declare testSpline=spline{
 natural_spline
 #declare index=0; 
 #declare nbpoints=20; 
 #while(index<=nbpoints)
 #declare t1=index/nbpoints; 
 #declare umt1=1-t1;  
 #declare centre1=umt1*umt1*umt1*tranche2[0]+3*umt1*umt1*t1*tranche2[1]+3*umt1*t1*t1*tranche2[2]+t1*t1*t1*tranche2[3];
 t1, centre1
 #declare index=index+1; 
 #end
 }



*/