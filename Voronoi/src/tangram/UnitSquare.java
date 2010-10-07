package tangram;

/* La forme possible (parmi 6) que peut prendre un carre elementaire d'un quadrillage 
 * ou on a pose des pieces de tangram
 */
public enum UnitSquare {
	TYPE0(" "),TYPE1("1"),TYPE2("2"),TYPE3("3"),TYPE4("4"),TYPE5("5"); 
	private String alpha; 
	
	private UnitSquare(String a){this.alpha=a; }
	
	public boolean isCompatible(UnitSquare u){
		switch(this){
		case TYPE0 : return true;
		case TYPE1 : return u.equals(TYPE4); 
		case TYPE2 : return u.equals(TYPE3); 
		case TYPE3 : return u.equals(TYPE2); 
		case TYPE4 : return u.equals(TYPE1);
		case TYPE5 : return false; 
		default: return false; 
		}
	}

	public UnitSquare union(UnitSquare us) {
		if (us.equals(TYPE0)) return this; 
		if(this.equals(TYPE0)) return us; 
		switch(this){
		case TYPE1 : if(us.equals(TYPE4)) return TYPE5; else return null; 
		case TYPE2 : if(us.equals(TYPE3)) return TYPE5; else return null; 
		case TYPE3 : if(us.equals(TYPE2)) return TYPE5; else return null; 
		case TYPE4 : if(us.equals(TYPE1)) return TYPE5; else return null; 
		default:return null;
		}
		
	}

	public String alpha() {
		return this.alpha; 
		}
		
	}

}
