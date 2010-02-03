package test;

public class JML {
	public static void main(String arg[]) {
		for(int a=0; a<10;a++)
			for(int b=0;b<10;b++)
				for(int c=0;c<10;c++)
					for(int d=0;d<10;d++)
					{
						Quad courant=new Quad(a,b,c,d); 
						int valeur=courant.valeur(); 
						Quad challenger=new Quad(6*valeur);
						if(courant.egal(challenger))
							System.out.println(courant.valeur()+" "+challenger.valeur()); 
					}
		
	}

}
