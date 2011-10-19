package coo;

public class Except {
	
	public void faire() throws EssaiException{
		System.out.println("faire"); 
		this.contenuFaire(); 
	}
	
	public void contenuFaire(){
			System.out.println("Contenu faire"); 
	}

}
