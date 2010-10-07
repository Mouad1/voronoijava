package tangram;

import java.util.Iterator;

public class TangramTest {
	
	public static void main(String[] args) {
		TangramUnit tu=TangramUnit.GRANDTRIANGLE1; 
		
		Iterator<UnitConfig> it=tu.iterator(); 
		while(it.hasNext())
		{
		
	
			Board b=new Board();
			b.place(it.next(), 5, 5); 
			
			System.out.println(b);
			
			Motif baby=b.reduce(); 
			System.out.println(baby+"\n"+baby.getCodage());
			System.out.println("--->"+baby.canonicalCodage()); 
		
		}
		
	}

}

