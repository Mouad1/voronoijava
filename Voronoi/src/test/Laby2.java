/*
 * Created on 30 sept. 2003
 *
 */
package test;

import java.io.PrintStream;
import java.util.*;



public class Laby2 {

	private Case[][][] laby;

	private int width;

	private int height;
	
	private int hauteur; 

	/**
	 * 
	 */
	public Laby2(int width, int height,int hauteur) {
		this.width = width;
		this.height = height;
		this.hauteur=hauteur; 
		this.laby = new Case[height][width][hauteur];
	}

	public int getWidth() {
		return width;
	}

	public int getHeight() {
		return height;
	}

	public Case getCaseAt(Position position) {
		return laby[position.x][position.y][position.z];
	}
	public Case getCaseAt(int x, int y,int z) {
		return laby[x][y][z];
	}

	
	public void generate() {
		// on remplit de cases non liees
		for (int i = 0; i < this.width; i++) {
			for (int j = 0; j < this.height; j++) {
				for(int k=0;k<this.hauteur;k++)
				laby[i][j][k] = new Case(new Position(i, j,k));
			}
		}
		// on choisit une case de depart
		Random alea = new Random(System.currentTimeMillis());
		int startX = Math.abs(alea.nextInt()) % this.width;
		int startY = Math.abs(alea.nextInt()) % this.height;
		int startZ = Math.abs(alea.nextInt()) % this.hauteur;
		// et on la visite 
		visit(startX, startY,startZ,0);
	}

	/** on visite la case de coordonnees x et y et on cherche a aller vers ses voisins (si non vus)
	 * @param x x courant
	 * @param y y courant
	 */
	private void visit(int x, int y,int z,int level) {
		System.out.println("visite de la case "+laby[x][y][z]);
		// visitee donc vue
		laby[x][y][z].visit();
		// on parcourt les 4 cases autour pour trouver les "not seen" 
		Direction[] allDirections = Direction.shuffleAllDirections();
		for (int dir = 0; dir < allDirections.length; dir++) {
			testDirection(allDirections[dir], x, y,z,level+1);
		}
	}

	/** test si on peut aller vers le voisin de (x,y) (si existe et non vu) et on le visite (l'appel recursif est ici)
	 * @param direction la direction visee
	 * @param x x courant
	 * @param y y courant
	 */
	private void testDirection(Direction direction, int x, int y,int z,int level) {
		int dx = direction.getShiftX();
		int dy = direction.getShiftY();
		int dz=direction.getShiftZ(); 
		if ((x + dx >= 0)
			&& (x + dx < this.width)
			&& (y + dy >= 0)
			&& (y + dy < this.height)
			&& (z+dz<this.hauteur)
			&& (z+dz>=0)
			&& !laby[x + dx][y + dy][z+dz].isVisited()) { // si case voisine non vue
			//	alors on y va, donc on cree *les* liaisons
			laby[x][y][z].addNeighbour(direction, laby[x + dx][y + dy][z+dz]);
			laby[x + dx][y + dy][z+dz].addNeighbour(direction.getOpposite(), laby[x][y][z]);
			// et on la visite
			if(level<15)
			visit(x + dx, y + dy,z+dz,level+1);
		}
	}


	/** toutes les cases sont positionnees a "non visitees"
	 */
	public void notVisited() {
		for (int i = 0; i < this.width; i++) {
			for (int j = 0; j < this.height; j++) {
				for(int k=0;k<this.hauteur;k++)
				laby[i][j][k].notVisited();
			}
		}
	}

	public static void main(String[] args) throws Exception{
		//PrintStream out =new PrintStream("../pearls/scene/misc/desc.txt"); 
		PrintStream out =new PrintStream("/tmp/desc.txt"); 
		int mi=20; 
		int mj=20; 
		int mk=20; 
		Laby2 l = new Laby2(mi,mj,mk);
		l.generate();
		for(int i=0;i<mi;i++)
			for(int j=0;j<mj;j++)
				for(int k=0;k<mk;k++){
					double ci=(1+Math.cos(Math.PI*i/(mi+0.0)))/2; 
					double cj=(1+Math.sin(Math.PI*j/(mj+0.0)))/2; 
					double ck=(1+Math.cos(Math.PI*k/(mi+0.0)))/2; 
					Case current=l.laby[i][j][k]; 
					//out.println("sphere{<"+i+","+j+","+k+">,radio texture{pigment{color rgb <"+ci+","+cj+","+ck+">}} finish {fin1}}");
					out.println("sphere{<"+i+","+j+","+k+">,radio texture{Tex1} finish {fin1}}");
					for(Direction d: Direction.values()){
						Case voisine=current.getNeighbour(d); 
						if(voisine!=null){
							int ip=voisine.getPosition().x; 
							int jp=voisine.getPosition().y; 
							int kp=voisine.getPosition().z; 
							//out.println("cylinder{<"+i+","+j+","+k+">,<"+ip+","+jp+","+kp+">,radio texture{pigment{color rgb <"+ci+","+cj+","+ck+">}} finish {fin0}}");
							out.println("cylinder{<"+i+","+j+","+k+">,<"+ip+","+jp+","+kp+">,radio texture{Tex1} finish {fin0}}");
							voisine.remove(d.getOpposite());
						}
					}
				}
					
		
	}

}