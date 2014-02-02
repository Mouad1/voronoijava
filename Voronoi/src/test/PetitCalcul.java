package test;

import utils.*;
public class PetitCalcul {
	public static void main(String[] args) {
		Pos3D P1=new Pos3D(-0.6356681448147,0.0255526700901,0.7715394161798); 
		Pos3D P2=new Pos3D(0.8767307780381,0.1795774239867,-0.3177024712314); 
		Pos3D P3=new Pos3D(0.7272012930864,0.190907771475,0.5801484902294);
		Pos3D P4=new Pos3D(-0.3512461627315,0.0040010684687,-0.9362745989385);
		Pos3D P5=new Pos3D(0.1789602237693,-0.5069256061945,0.7828406202314); 
		Pos3D P6=new Pos3D(-0.0103419061455,-0.9495406995667,0.010260284364);
		Pos3D P7=new Pos3D(0.0088278856765,0.8459050059932,0.5332605266379);
		Pos3D P8=new Pos3D(0.1846103377516,0.8325853836792,-0.5222265811686);
		
		Pos3D PJaune=Pos3D.sub(P1, P2);
		Pos3D PBleu=Pos3D.sub(P4, P3); 
		Pos3D denom=Pos3D.sub(PJaune,PBleu);
		Pos3D num=Pos3D.sub(P3, P2); 
		double alphaX=num.getX()/denom.getX(); 
		double alphaY=num.getY()/denom.getY(); 
		double alphaZ=num.getZ()/denom.getZ();
		System.out.println("X "+alphaX+" Y "+alphaY+" Z "+alphaZ); 
		
		PJaune=Pos3D.sub(P2, P1);
		Pos3D PVert=Pos3D.sub(P6, P7); 
	    denom=Pos3D.sub(PJaune,PVert);
		num=Pos3D.sub(P7, P1); 
		alphaX=num.getX()/denom.getX(); 
		alphaY=num.getY()/denom.getY(); 
		alphaZ=num.getZ()/denom.getZ();
		System.out.println("X "+alphaX+" Y "+alphaY+" Z "+alphaZ); 
		
		PJaune=Pos3D.sub(P2, P1);
		Pos3D POrange=Pos3D.sub(P5, P8); 
	    denom=Pos3D.sub(PJaune,POrange);
		num=Pos3D.sub(P8, P1); 
		alphaX=num.getX()/denom.getX(); 
		alphaY=num.getY()/denom.getY(); 
		alphaZ=num.getZ()/denom.getZ();
		System.out.println("X "+alphaX+" Y "+alphaY+" Z "+alphaZ); 
		
	}
}
