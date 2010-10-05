package tangram;

public enum UnitSquare {
	TYPE0,TYPE1,TYPE2,TYPE3,TYPE4,TYPE5; 
	
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

}
