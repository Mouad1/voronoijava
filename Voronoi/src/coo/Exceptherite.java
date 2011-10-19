package coo;

public class Exceptherite extends Except {
	
	public void contenuFaire(){
		try{
		super.faire();
		}
		catch(Exception e){}
	}

}
