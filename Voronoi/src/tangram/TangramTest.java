package tangram;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

// TODO il manque plein de configs, et on a laisse les non-connexes
public class TangramTest {
	static private int count=0; 
	static private void placer(TangramUnit[] tu,int index,Motif dejaFait,HashSet<MotifIntermediaire> dejaVu,int indexMax){
		if(index==indexMax) return; 
		Iterator<UnitConfig>it=tu[index].iterator();
		
		while(it.hasNext()){
			UnitConfig uc=it.next();
			int lignes=dejaFait.expand().getLignes();
			int colonnes=dejaFait.expand().getColonnes(); 
			for(int i=0;i<lignes;i++)
				for(int j=0;j<colonnes;j++){
					Board exp=dejaFait.expand();
					//System.out.println(exp); 
					if(exp.isPossibleToAdd(uc,i,j)){
						exp.place(uc,i,j);
						//System.out.println("Placer "+tu[index].name()+" en "+i+" "+j); 
						//System.out.println(exp.reduce()); 
						count++; 
						if(count%100000==0) System.out.println(count); 
						Motif okNene=exp.reduce();
						dejaVu.add(new MotifIntermediaire(okNene,index+1));
						
						placer(tu,index+1,okNene,dejaVu,indexMax); 
					}
				}
			
			
			
		}
	}
	
	public static void main(String[] args) {
		int imax=4; 
		System.out.println("C'est parti mon kiki"); 
		HashSet<MotifIntermediaire> dv=new HashSet<MotifIntermediaire>(); 
		Board terrain=new Board();
		terrain.place(TangramUnit.CARRE.getUnitConfig(0) ,5,5); 
	
		Motif terrainReduit=terrain.reduce();
	
		placer(TangramUnit.sacAPiece,1,terrainReduit ,dv,imax);
		
		for(MotifIntermediaire e: dv)
			if(e.getNbPieces()==imax) System.out.println(e); 
		System.out.println("------------->"+dv.size()); 
	}

}

