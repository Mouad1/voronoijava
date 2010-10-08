package tangram;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

public class TangramTest {
	
	static private void placer(TangramUnit[] tu,int index,Motif dejaFait,HashSet<MotifIntermediaire> dejaVu){
		if(index==7) return; 
		Iterator<UnitConfig>it=tu[index].iterator();
		Board exp=dejaFait.expand();
		while(it.hasNext()){
			UnitConfig uc=it.next();
			for(int i=0;i<exp.lignes;i++)
				for(int j=0;j<exp.colonnes;j++){
					if(exp.isPossibleToAdd(uc,i,j)){
						System.out.println("Placer "+uc+" en ("+i+","+j+")"); 
						exp.place(uc,i,j); 
						dejaVu.add(new MotifIntermediaire(exp.reduce(),index+1));
						Motif okNene=exp.reduce();
						placer(tu,index+1,okNene,dejaVu); 
					}
				}
			
			
			
		}
	}
	
	public static void main(String[] args) {
		HashSet<MotifIntermediaire> dv=new HashSet<MotifIntermediaire>(); 
		Board terrain=new Board();
		terrain.place(TangramUnit.CARRE.getUnitConfig(0) ,5,5); 
		Motif terrainReduit=terrain.reduce();
		placer(TangramUnit.sacAPiece,1,terrainReduit ,dv); 
	}

}

