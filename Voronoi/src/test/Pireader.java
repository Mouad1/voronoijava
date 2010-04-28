package test;

import java.io.BufferedReader;
import java.io.FileReader;

public class Pireader {
public static void main(String[] args)throws Exception {
	  BufferedReader inx = new BufferedReader(new FileReader("PI_5K_DP.TXT"));
	  boolean bobo=true;
	  int indice=0; 
	  while(bobo){
	  int dd=0; 
	  String s=""; 
	  while(dd<250){
		  char c=(char) inx.read();
		  if(c=='X'){ bobo=false; break;} 
		  if(Character.isDigit(c)||(c=='.')){s+=c; 
		  dd++;}
	  }
		  System.out.println("#declare tab["+indice+"]=\""+s+"\"");
		
		  indice++; 
	  }
	  
}
}
