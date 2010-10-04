package tangram;
import java.util.ArrayList;
import java.util.List;

import utils.Point; 

public class TangramComponent {
	private String name; 
	private ArrayList<Point> lesPoints;
	
	static private final Point P00=new Point(0,0); 
	static private final Point P01=new Point(0,1); 
	static private final Point P10=new Point(1,0); 
	static private final Point P11=new Point(1,1); 
	static private final Point Ps0=new Point(Math.sqrt(2),0); 
	static private final Point P3s21=new Point(3*Math.sqrt(2)/2,1); 
	static private final Point Ps2s2=new Point(Math.sqrt(2)/2,Math.sqrt(2)/2); 
	static private final Point P2s20=new Point(2*Math.sqrt(2),0); 
	static private final Point Pss=new Point(Math.sqrt(2),Math.sqrt(2)); 
	
	
	private TangramComponent(String n){
		this.name=n; 
	}
	
	
	private static TangramComponent makeCarre()
	{ TangramComponent tc=new TangramComponent("Carre");
	  tc.lesPoints.add(P00);
	  tc.lesPoints.add(P10);
	  tc.lesPoints.add(P11);
	  tc.lesPoints.add(P01);
	  return tc; 
	}
	
	
	private static TangramComponent makeParal(){
		TangramComponent tc=new TangramComponent("Parallelogramme");
		  tc.lesPoints.add(P00);
		  tc.lesPoints.add(Ps0);
		  tc.lesPoints.add(P3s21);
		  tc.lesPoints.add(Ps2s2);
		  return tc; 
	}
	
	private static TangramComponent makePetitTriangle(){
		TangramComponent tc=new TangramComponent("Petit triangle");
		  tc.lesPoints.add(P00);
		  tc.lesPoints.add(Ps0);
		  tc.lesPoints.add(Ps2s2);
		  return tc; 
	}
	
	private static TangramComponent makeMoyenTriangle(){
		TangramComponent tc=new TangramComponent("Moyen triangle");
		  tc.lesPoints.add(P00);
		  tc.lesPoints.add(P10);
		  tc.lesPoints.add(P11);
		  return tc; 
	}
	
	private static TangramComponent makeGrandTriangle(){
		TangramComponent tc=new TangramComponent("Grand triangle");
		  tc.lesPoints.add(P00);
		  tc.lesPoints.add(P2s20);
		  tc.lesPoints.add(Pss);
		  return tc; 
	}
	
	public static final TangramComponent CARRE=makeCarre();
	public static final TangramComponent PARAL=makeParal();
	public static final TangramComponent PETITTRIANGLE1=makePetitTriangle();
	public static final TangramComponent PETITTRIANGLE2=makePetitTriangle();
	public static final TangramComponent MOYENTRIANGLE=makeMoyenTriangle();
	public static final TangramComponent GRANDTRIANGLE1=makeGrandTriangle();
	public static final TangramComponent GRANDTRIANGLE2=makeGrandTriangle();
	
	public static final ArrayList<TangramComponent> JEU=new ArrayList<TangramComponent>({CARRE,PARAL}); 
	
	
	
	
	
	
	
	
	
	
	
	
	
}
