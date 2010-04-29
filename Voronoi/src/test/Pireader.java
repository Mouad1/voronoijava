package test;

import java.io.BufferedReader;
import java.io.FileReader;

public class Pireader {
public static void main(String[] args)throws Exception {
	  BufferedReader inx = new BufferedReader(new FileReader("/tmp/pidigit/PI50K_DP.TXT"));
	  boolean bobo=true;
	  int indice=0; 
	  int dd=2; 
	  String s="3."; 
	  while(bobo){
	 
	  while(dd<250){
		  char c=(char) inx.read();
		  if(c=='X'){ bobo=false; break;} 
		  if(Character.isDigit(c)||(c=='.')){s+=c; 
		  dd++;}
	  }
		  System.out.println("#declare tab["+indice+"]=\""+s+"\"");
		  dd=0; 
		  s=""; 
		  indice++; 
	  }
	  
}
}
