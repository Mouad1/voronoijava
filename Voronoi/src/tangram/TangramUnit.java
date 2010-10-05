package tangram;

import java.util.ArrayList;

/* Une piedede tangram, c'est plusieurs configs possibles */
public class TangramUnit {
	private ArrayList<UnitConfig> lesConfigs=new ArrayList<UnitConfig>(); 
	
	static private TangramUnit makeCarre(){
		TangramUnit c=new TangramUnit();
		UnitSquare lc[]=new UnitSquare[1];
		lc[0]=UnitSquare.TYPE5; 
		c.lesConfigs.add(new UnitConfig(1,1,lc));
		return c;
	}
	
	static public final TangramUnit CARRE=makeCarre();
	
	static private TangramUnit makePetitTriangle(){
		TangramUnit c=new TangramUnit();
		UnitSquare lc[]=new UnitSquare[1];
		lc[0]=UnitSquare.TYPE1; 
		c.lesConfigs.add(new UnitConfig(1,1,lc));
		lc[0]=UnitSquare.TYPE2; 
		c.lesConfigs.add(new UnitConfig(1,1,lc));
		lc[0]=UnitSquare.TYPE3; 
		c.lesConfigs.add(new UnitConfig(1,1,lc));
		lc[0]=UnitSquare.TYPE4; 
		c.lesConfigs.add(new UnitConfig(1,1,lc));
		return c; 
	}
	static public final TangramUnit PETITTRIANGLE1=makePetitTriangle();
	static public final TangramUnit PETITTRIANGLE2=makePetitTriangle();
	
	static private TangramUnit makeMoyenTriangle(){
		TangramUnit c=new TangramUnit();
		UnitSquare lc[]=new UnitSquare[2];
		lc[0]=UnitSquare.TYPE4; 
		lc[1]=UnitSquare.TYPE3; 
		c.lesConfigs.add(new UnitConfig(1,2,lc));
		lc[0]=UnitSquare.TYPE2; 
		lc[1]=UnitSquare.TYPE1; 
		c.lesConfigs.add(new UnitConfig(1,2,lc));
		lc[0]=UnitSquare.TYPE3;
		lc[1]=UnitSquare.TYPE1; 
		c.lesConfigs.add(new UnitConfig(2,1,lc));
		lc[0]=UnitSquare.TYPE4;
		lc[1]=UnitSquare.TYPE2; 
		c.lesConfigs.add(new UnitConfig(2,1,lc));
		return c; 
	}
	static public final TangramUnit MOYENTRIANGLE=makeMoyenTriangle();
	
	static private TangramUnit makeGrandTriangle(){
		TangramUnit c=new TangramUnit();
		UnitSquare lc[]=new UnitSquare[4];
		lc[0]=UnitSquare.TYPE5; 
		lc[1]=UnitSquare.TYPE1; 
		lc[0]=UnitSquare.TYPE1; 
		lc[1]=UnitSquare.TYPE0; 
		c.lesConfigs.add(new UnitConfig(2,2,lc));
		lc[0]=UnitSquare.TYPE2; 
		lc[1]=UnitSquare.TYPE5; 
		lc[0]=UnitSquare.TYPE0; 
		lc[1]=UnitSquare.TYPE2; 
		c.lesConfigs.add(new UnitConfig(2,2,lc));
		lc[0]=UnitSquare.TYPE3;
		lc[1]=UnitSquare.TYPE0; 
		lc[0]=UnitSquare.TYPE5; 
		lc[1]=UnitSquare.TYPE3; 
		c.lesConfigs.add(new UnitConfig(2,2,lc));
		lc[0]=UnitSquare.TYPE0;
		lc[1]=UnitSquare.TYPE4;
		lc[0]=UnitSquare.TYPE4; 
		lc[1]=UnitSquare.TYPE5; 
		c.lesConfigs.add(new UnitConfig(2,2,lc));
		return c; 
	}
	
	static public final TangramUnit GRANDTRIANGLE1=makeGrandTriangle();
	static public final TangramUnit GRANDTRIANGLE2=makeGrandTriangle();
	
	
	
	static private TangramUnit makeParallelogramme(){
		TangramUnit c=new TangramUnit();
		UnitSquare lc[]=new UnitSquare[3];
		lc[0]=UnitSquare.TYPE4; 
		lc[1]=UnitSquare.TYPE5; 
		lc[0]=UnitSquare.TYPE1; 
		c.lesConfigs.add(new UnitConfig(1,3,lc));
		lc[0]=UnitSquare.TYPE2; 
		lc[1]=UnitSquare.TYPE5; 
		lc[0]=UnitSquare.TYPE3; 
		c.lesConfigs.add(new UnitConfig(1,3,lc));
		lc[0]=UnitSquare.TYPE3;
		lc[1]=UnitSquare.TYPE5; 
		lc[0]=UnitSquare.TYPE2; 
		c.lesConfigs.add(new UnitConfig(3,1,lc));
		lc[0]=UnitSquare.TYPE4;
		lc[1]=UnitSquare.TYPE5;
		lc[0]=UnitSquare.TYPE1;  
		c.lesConfigs.add(new UnitConfig(3,1,lc));
		return c; 
	}
	
	static public final TangramUnit PARALLELOGRAMME=makeParallelogramme();
	

}
