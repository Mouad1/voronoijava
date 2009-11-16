package test;

import java.io.PrintStream;

import utils.Pos3D;

public class Hyperfractal {
	
	public static void main(String[] args) {
  	  PrintStream output; 
  	  try{
  	  output=new PrintStream("../pearls/scene/divers/hf.txt");
  	  double step=0.02; 
  	  int nbs=0; 
  	  double x=-1; 
  	  while(x<1){
  		  double y=-1; 
  		  while(y<1){
  			  double z=-1; 
  			  while(z<1){
  				  int index=0; 
  				  double xn=0;
  				  double yn=0; 
  				  double zn=0;
  				  while(index<1000){
  					  double r=Math.sqrt(xn*xn+yn*yn+zn*zn); 
  					  if(r>1) break;
  					  double theta=Math.atan2(yn,xn); 
  					  double phi=Math.atan2(zn, Math.sqrt(xn*xn+yn*yn));
  					  double rn=Math.pow(r,8); 
  					  xn=rn*Math.cos(8*theta)*Math.cos(8*phi)+x;
  					  yn=rn*Math.sin(8*theta)*Math.cos(8*phi)+y;
  					  zn=-rn*Math.sin(8*phi)+z;
  					  
  					  index++; 
  				  }// index
  				  if(index==1000){
  					  System.out.println("sphere{<"+x+","+y+","+z+">,step texture{pigment{color Red}}}");
  					  //output.println("sphere{<"+x+","+y+","+z+">,step texture{pigment{color Red}}}");
  					  //output.println("box{<"+(x-step)/2+","+(y-step)/2+","+(z-step)/2+">,<"+(x-step)/2+","+(y-step)/2+","+(z-step)/2+"> texture{pigment{color Red}}}");
  					  //output.println("box{<"+(x-step/2)+","+(y-step/2)+","+(z-step/2)+">,<"+(x+step/2)+","+(y+step/2)+","+(z+step/2)+"> texture{pigment{color<"+Math.abs(xn)+","+Math.abs(yn)+","+Math.abs(zn)+">}} finish{F1}}");
  					output.println("sphere{<"+x+","+y+","+z+">,"+step/2+"  texture{pigment{color<"+Math.abs(xn)+","+Math.abs(yn)+","+Math.abs(zn)+">}} finish{F1}}");
  					  nbs++; 
  				  }
  				  z+=step;
  			  }// z
  			  y+=step;
  		  }//y
  		  x+=step;
  	  }//x
  	  System.out.println(nbs); 
	}
  	  
  	 catch(Exception e){System.out.println(e); System.exit(0);} 

}
}
