package tangram;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

public class TangramTest {
	
	private void placer(TangramUnit[] tu,int index,Motif dejaFait,HashSet<MotifIntermediaire> dejaVu){
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
		HashSet<MotifIntermediaire> gardes=new HashSet<MotifIntermediaire>(); 
		TangramUnit tu=TangramUnit.GRANDTRIANGLE1; 
		
		Iterator<UnitConfig> it=tu.iterator(); 
		while(it.hasNext())
		{
			
			TangramUnit td=TangramUnit.PARALLELOGRAMME; 
			Iterator<UnitConfig> it2=td.iterator(); 
			while(it2.hasNext()){
				Board b=new Board();
				b.place(it.next(), 5, 5); 
				Motif baby=b.reduce(); 
				Board exp=baby.expand(); 
				UnitConfig uc=it2.next(); 
				
				for(int i=0;i<exp.lignes;i++)
					for(int j=0;j<exp.colonnes;j++){
						
						exp=baby.expand(); 
						if(exp.isPossibleToAdd(uc,i,j)){
							System.out.println("Placer "+uc+" en ("+i+","+j+")"); 
							exp.place(uc,i,j); 
							gardes.add(new MotifIntermediaire(exp.reduce(),2)); 
							
						}
					}
			}
		
		}
		for(MotifIntermediaire e:gardes)
			System.out.println(e); 
		System.out.println(gardes.size());
	}

}

