package test;

import utils.Pos3D;

public class Pillbox {

	
	public static void main(String[] args) {
		double Rmax=3.7; // rayon externe
		double epaisseur=0.1; // epaisseur des murs
		double hauteur=2.2; 
		int nb=7; // nombre de compartiments
		double Rmid=Rmax*Math.sqrt(1/2.0); // rayon median 
		double Rmin=5*epaisseur; //rayon du moyeu
		double alpha1=Math.asin(epaisseur/Rmax); 
		double alpha3=Math.asin(epaisseur/Rmin);
		double alpha2P=Math.asin(epaisseur/(Rmid+epaisseur/2)); 
		double alpha2S=Math.asin(epaisseur/(Rmid-epaisseur/2));
		
		
		Pos3D A[][]=new Pos3D[nb][16]; 
		
		for(int i=0;i<nb;i++){
			// fabriquer les 16*nb sommets
			A[i][0]=new Pos3D(Rmax*Math.cos(2*i*Math.PI-alpha1),hauteur,Rmax*Math.sin(2*i*Math.PI-alpha1));
			A[i][8]=new Pos3D(Rmax*Math.cos(2*i*Math.PI+alpha1),hauteur,Rmax*Math.sin(2*i*Math.PI+alpha1));
			A[i][7]=new Pos3D(Rmax*Math.cos(2*i*Math.PI-alpha1),0,Rmax*Math.sin(2*i*Math.PI-alpha1));
			A[i][15]=new Pos3D(Rmax*Math.cos(2*i*Math.PI+alpha1),0,Rmax*Math.sin(2*i*Math.PI+alpha1));
			
			A[i][1]=new Pos3D((Rmid+epaisseur/2)*Math.cos(2*i*Math.PI/nb-alpha2P),hauteur,(Rmid+epaisseur/2)*Math.sin(2*i*Math.PI/nb-alpha2P));
			A[i][9]=new Pos3D((Rmid+epaisseur/2)*Math.cos(2*i*Math.PI/nb+alpha2P),hauteur,(Rmid+epaisseur/2)*Math.sin(2*i*Math.PI/nb+alpha2P));
			A[i][6]=new Pos3D((Rmid+epaisseur/2)*Math.cos(2*i*Math.PI/nb-alpha2P),0,(Rmid+epaisseur/2)*Math.sin(2*i*Math.PI/nb-alpha2P));
			A[i][14]=new Pos3D((Rmid+epaisseur/2)*Math.cos(2*i*Math.PI/nb+alpha2P),0,(Rmid+epaisseur/2)*Math.sin(2*i*Math.PI/nb+alpha2P));
			
			A[i][2]=new Pos3D((Rmid-epaisseur/2)*Math.cos(2*i*Math.PI/nb-alpha2S),hauteur,(Rmid-epaisseur/2)*Math.sin(2*i*Math.PI/nb-alpha2S));
			A[i][10]=new Pos3D((Rmid-epaisseur/2)*Math.cos(2*i*Math.PI/nb+alpha2S),hauteur,(Rmid-epaisseur/2)*Math.sin(2*i*Math.PI/nb+alpha2S));
			A[i][5]=new Pos3D((Rmid-epaisseur/2)*Math.cos(2*i*Math.PI/nb-alpha2S),0,(Rmid-epaisseur/2)*Math.sin(2*i*Math.PI/nb-alpha2S));
			A[i][13]=new Pos3D((Rmid-epaisseur/2)*Math.cos(2*i*Math.PI/nb+alpha2S),0,(Rmid-epaisseur/2)*Math.sin(2*i*Math.PI/nb+alpha2S));
			
			A[i][3]=new Pos3D(Rmin*Math.cos(2*i*Math.PI/nb-alpha3),hauteur,Rmin*Math.sin(2*i*Math.PI/nb-alpha3)); 
			A[i][11]=new Pos3D(Rmin*Math.cos(2*i*Math.PI/nb+alpha3),hauteur,Rmin*Math.sin(2*i*Math.PI/nb+alpha3)); 
			A[i][4]=new Pos3D(Rmin*Math.cos(2*i*Math.PI/nb-alpha3),0,Rmin*Math.sin(2*i*Math.PI/nb-alpha3)); 
			A[i][12]=new Pos3D(Rmin*Math.cos(2*i*Math.PI/nb+alpha3),0,Rmin*Math.sin(2*i*Math.PI/nb+alpha3)); 
			
		} // for i
		nb=1; 
		System.out.println("mesh2{\n vertex_vectors{\n"+16*nb+",\n"); 
		for(int i=0;i<nb;i++){
			for(int k=0;k<16;k++){
				System.out.print(A[i][k]); 
				if((i!=(nb-1))||(k!=15)) System.out.println(","); 
				else System.out.println(); 
			}// k
		}// i
		// construire les faces
	 System.out.println("}\n face_indices{\n"+14*nb+",\n");
	 for(int i=0;i<nb;i++){
		 System.out.println("<"+(16*i+3)+","+(16*i+4)+","+(16*i+5)+">,");
		 System.out.println("<"+(16*i+3)+","+(16*i+5)+","+(16*i+2)+">,");
		 System.out.println("<"+(16*i+0)+","+(16*i+8)+","+(16*i+11)+">,");
		 System.out.println("<"+(16*i+3)+","+(16*i+11)+","+(16*i+0)+">,");
		 System.out.println("<"+(16*i+0)+","+(16*i+7)+","+(16*i+6)+">,");
		 System.out.println("<"+(16*i+0)+","+(16*i+6)+","+(16*i+1)+">,");
		 System.out.println("<"+(16*i+0)+","+(16*i+8)+","+(16*i+15)+">,");
		 System.out.println("<"+(16*i+0)+","+(16*i+15)+","+(16*i+7)+">,");
		 
		 System.out.println("<"+(16*i+4)+","+(16*i+7)+","+(16*i+12)+">,");
		 System.out.println("<"+(16*i+12)+","+(16*i+15)+","+(16*i+7)+">,");
		 
		 System.out.println("<"+(16*i+8)+","+(16*i+9)+","+(16*i+14)+">,");
		 System.out.println("<"+(16*i+8)+","+(16*i+15)+","+(16*i+14)+">,");
		 
		 System.out.println("<"+(16*i+10)+","+(16*i+11)+","+(16*i+12)+">,");
		 System.out.println("<"+(16*i+10)+","+(16*i+13)+","+(16*i+12)+">,");
		 /*
		 System.out.println("<"+(16*i+2)+","+(16*((i+1)%nb)+10)+","+(16*((i+1)%nb)+9)+">,");
		 System.out.println("<"+(16*i+2)+","+(16*((i+1)%nb)+9)+","+(16*((i+0)%nb)+1)+">,");
		 
		 System.out.println("<"+(16*i+1)+","+(16*((i+1)%nb)+9)+","+(16*((i+1)%nb)+14)+">,");
		 System.out.println("<"+(16*i+1)+","+(16*((i+1)%nb)+14)+","+(16*((i+1)%nb)+6)+">,");
		 
		 System.out.println("<"+(16*i+2)+","+(16*((i+1)%nb)+10)+","+(16*((i+1)%nb)+13)+">,");
		 System.out.println("<"+(16*i+5)+","+(16*((i+1)%nb)+13)+","+(16*((i+0)%nb)+2)+">,");
		 
		 System.out.println("<"+(16*i+5)+","+(16*((i+1)%nb)+13)+","+(16*((i+1)%nb)+14)+">,");
		 System.out.println("<"+(16*i+6)+","+(16*((i+1)%nb)+14)+","+(16*((i+0)%nb)+6)+">,");
		 
		 System.out.println("<"+(16*((i+0)%nb)+3)+","+(16*((i+1)%nb)+12)+","+(16*((i+1)%nb)+11)+">,");
		 if(i!=nb-1)
			 System.out.println("<"+(16*((i+0)%nb)+4)+","+(16*((i+1)%nb)+12)+","+(16*((i+0)%nb)+3)+">,");
		 else
			 System.out.println("<"+(16*((i+0)%nb)+4)+","+(16*((i+1)%nb)+12)+","+(16*((i+0)%nb)+3)+">}}");
		 */
	 }// i
	}
}
