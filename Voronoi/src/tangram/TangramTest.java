package tangram;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

// TODO il manque plein de configs, et on a laisse les non-connexes
public class TangramTest {
	static private int count=0; 
	static private void placer(TangramUnit[] tu,int index,Motif dejaFait,HashSet<MotifIntermediaire> dejaVu){
		if(index==2) return; 
		Iterator<UnitConfig>it=tu[index].iterator();
		
		while(it.hasNext()){
			UnitConfig uc=it.next();
			int lignes=dejaFait.expand().getLignes();
			int colonnes=dejaFait.expand().getColonnes(); 
			for(int i=0;i<lignes;i++)
				for(int j=0;j<colonnes;j++){
					Board exp=dejaFait.expand();
					if(exp.isPossibleToAdd(uc,i,j)){
						exp.place(uc,i,j);
						count++; 
						if(count%10000==0) System.out.println(count); 
						Motif okNene=exp.reduce();
						dejaVu.add(new MotifIntermediaire(okNene,index+1));
						
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
		
		for(MotifIntermediaire e: dv)
			if(e.getNbPieces()==2) System.out.println(e); 
		System.out.println(dv.size()); 
	}

}

