package tangram;

import java.util.HashSet;
import java.util.Iterator;

public class TangramTest {
	
	
	
	public static void main(String[] args) {
		HashSet<Motif> gardes=new HashSet<Motif>(); 
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
							gardes.add(exp.reduce()); 
							
						}
					}
			}
		
		}
		for(Motif e:gardes)
			System.out.println(e); 
		
	}

}

