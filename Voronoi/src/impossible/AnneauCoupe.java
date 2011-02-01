package impossible;

import utils.Pos3D;

public class AnneauCoupe extends Anneau {
	// 0-> barre du haut
	// 1-> droite
	// 2-> bas
	// 3-> gauche
	protected int coteCoupe;
	public AnneauCoupe(double s,double t,double e, int cote,Pos3D newAretes[]){
		this.side=s; 
		this.tranche=t; 
		this.epaisseur=e; 
		this.coteCoupe=cote; 
		setVertices(newAretes); 
		setFaces();
	}
	
	public AnneauCoupe(double s,double t,double e, Pos3D center ,int cote,Pos3D newAretes[]){
		this.side=s; 
		this.tranche=t; 
		this.epaisseur=e; 
		this.coteCoupe=cote; 
		this.center=center; 
		setVertices(newAretes); 
		setFaces();
	}
	
	protected void setVertices(Pos3D aretes[]){
			super.setVertices(); 
			for(int i=0;i<8;i++) vertices.add(24+i,Pos3D.sub(aretes[i],center)); 
	}
	
	

	// une face (ici, toujours des rectangles ou des trapezes) est une suite de 4 sommets
	// il faut la decouper en triangles	
	protected void setFaces(){
		// haut
		if(coteCoupe!=0){
		makeFaces(0,1,4,3); 
		makeFaces(12,13,16,15); 
		makeFaces(0,1,13,12); 
		makeFaces(3,4,16,15);
		}
		//bas
		if(coteCoupe !=2){
		makeFaces(10,7,8,11); 
		makeFaces(22,19,20,23); 
		makeFaces(10,22,23,11);
		makeFaces(7,18,20,8);
		}
		// gauche
		if(coteCoupe!=3){
		makeFaces(0,3,7,10); 
		makeFaces(12,15,19,22); 
		makeFaces(3,15,19,7); 
		makeFaces(0,12,22,10);
		}
		else{
			makeFaces(0,3,25,24); 
			makeFaces(3,15,26,25); 
			makeFaces(0,12,27,24); 
			makeFaces(12,15,26,27);
			makeFaces(24,25,26,27); 
			
			makeFaces(28,29,7,10); 
			makeFaces(7,29,30,19); 
			makeFaces(22,19,30,31); 
			makeFaces(22,31,28,10); 
			makeFaces(28,29,30,31); 
		}
		// droite
		if(coteCoupe!=1){
		makeFaces(1,11,8,4); 
		makeFaces(13,23,20,16); 
		makeFaces(1,13,23,11); 
		makeFaces(4,16,20,8); 
		}
		
	}
	
	
	

}
