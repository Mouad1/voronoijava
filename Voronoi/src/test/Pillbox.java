package test;

import java.io.PrintStream;

import utils.Pos3D;

public class Pillbox {

	
	public static void main(String[] args) {
		double Rmax=3.7; // rayon externe
		double epaisseur=0.1; // epaisseur des murs
		double hauteur=2.2; 
		int nb=7; // nombre de compartiments
		double Rmid=Rmax*Math.sqrt(1/3.0); // rayon median 
		//double Rmin=5*epaisseur; //rayon du moyeu
		double Rmin=1.3*epaisseur*0.5/Math.sin(Math.PI/nb); 
		double alpha1=Math.asin(0.5*epaisseur/Rmax); 
		double alpha3=Math.asin(0.5*epaisseur/Rmin);
		double alpha2P=Math.asin(0.5*epaisseur/(Rmid+epaisseur/2)); 
		double alpha2S=Math.asin(0.5*epaisseur/(Rmid-epaisseur/2));
		
		
		Pos3D A[][]=new Pos3D[nb][16]; 
	 
		for(int i=0;i<nb;i++){
			
			// fabriquer les 16*nb sommets
			A[i][0]=new Pos3D(Rmax*Math.cos(2*i*Math.PI/nb-alpha1),hauteur,Rmax*Math.sin(2*i*Math.PI/nb-alpha1));
			A[i][8]=new Pos3D(Rmax*Math.cos(2*i*Math.PI/nb+alpha1),hauteur,Rmax*Math.sin(2*i*Math.PI/nb+alpha1));
			A[i][7]=new Pos3D(Rmax*Math.cos(2*i*Math.PI/nb-alpha1),0,Rmax*Math.sin(2*i*Math.PI/nb-alpha1));
			A[i][15]=new Pos3D(Rmax*Math.cos(2*i*Math.PI/nb+alpha1),0,Rmax*Math.sin(2*i*Math.PI/nb+alpha1));
			
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
		try{
		PrintStream output=new PrintStream("../pearls/scene/pillbox/gb2bis.inc");
		PrintStream outputB=new PrintStream("../pearls/scene/pillbox/gb2bis.py");
		
		output.println("mesh2{\n vertex_vectors{\n"+(2+16*nb)+",\n"); 
		outputB.println(16*nb+2); 
		for(int i=0;i<nb;i++){
			for(int k=0;k<16;k++){
				output.println(A[i][k]+","); 
				outputB.println(A[i][k].forBlender()); 
			}// k
		}// i
		output.println(new Pos3D(0,hauteur,0)+","); // numero 16*nb
		output.println(new Pos3D(0,0,0)); // numero 16*nb+1
		outputB.println(new Pos3D(0,hauteur,0).forBlender()); // numero 16*nb
		outputB.println(new Pos3D(0,0,0).forBlender()); // numero 16*nb+1
		
		// construire les faces
	
	output.println("}\n face_indices{\n"+28*nb+",\n");
	 for(int i=0;i<nb;i++){
		
		 // couvercle du dessus
		 output.println("<"+(16*i+3)+","+(16*((i+nb-1)%nb)+11)+","+(16*nb)+">,");
		 output.println("<"+(16*i+3)+","+(16*i+11)+","+(16*nb)+">,");
		 
		 outputB.println((16*i+3)+","+(16*((i+nb-1)%nb)+11)+","+(16*nb));	
		 outputB.println((16*i+3)+","+(16*i+11)+","+(16*nb));
		 // couvercle du dessous
		 output.println("<"+(16*i+4)+","+(16*((i+nb-1)%nb)+12)+","+(16*nb+1)+">,");
		 output.println("<"+(16*i+4)+","+(16*i+12)+","+(16*nb+1)+">,");
		 
		 outputB.println((16*i+4)+","+(16*((i+nb-1)%nb)+12)+","+(16*nb+1));
		 outputB.println((16*i+4)+","+(16*i+12)+","+(16*nb+1));
		 
		output.println("<"+(16*i+3)+","+(16*i+4)+","+(16*i+5)+">,");
		output.println("<"+(16*i+3)+","+(16*i+5)+","+(16*i+2)+">,");
		output.println("<"+(16*i+0)+","+(16*i+8)+","+(16*i+11)+">,");
		output.println("<"+(16*i+3)+","+(16*i+11)+","+(16*i+0)+">,");
		output.println("<"+(16*i+0)+","+(16*i+7)+","+(16*i+6)+">,");
		output.println("<"+(16*i+0)+","+(16*i+6)+","+(16*i+1)+">,");
		output.println("<"+(16*i+0)+","+(16*i+8)+","+(16*i+15)+">,");
		output.println("<"+(16*i+0)+","+(16*i+15)+","+(16*i+7)+">,");
		
		
		outputB.println((16*i+3)+","+(16*i+4)+","+(16*i+5));
		outputB.println((16*i+3)+","+(16*i+5)+","+(16*i+2));
		outputB.println((16*i+0)+","+(16*i+8)+","+(16*i+11));
		outputB.println((16*i+3)+","+(16*i+11)+","+(16*i+0));
		outputB.println((16*i+0)+","+(16*i+7)+","+(16*i+6));
		outputB.println((16*i+0)+","+(16*i+6)+","+(16*i+1));
		outputB.println((16*i+0)+","+(16*i+8)+","+(16*i+15));
		outputB.println((16*i+0)+","+(16*i+15)+","+(16*i+7));
		
		
		
		
		
		
		 
		output.println("<"+(16*i+4)+","+(16*i+7)+","+(16*i+12)+">,");
		output.println("<"+(16*i+12)+","+(16*i+15)+","+(16*i+7)+">,");
		
		outputB.println((16*i+4)+","+(16*i+7)+","+(16*i+12));
		outputB.println((16*i+12)+","+(16*i+15)+","+(16*i+7));
		
		
		 
		output.println("<"+(16*i+8)+","+(16*i+9)+","+(16*i+14)+">,");
		output.println("<"+(16*i+8)+","+(16*i+15)+","+(16*i+14)+">,");
		
		outputB.println((16*i+8)+","+(16*i+9)+","+(16*i+14));
		outputB.println((16*i+8)+","+(16*i+15)+","+(16*i+14));
		 
		output.println("<"+(16*i+10)+","+(16*i+11)+","+(16*i+12)+">,");
		output.println("<"+(16*i+10)+","+(16*i+13)+","+(16*i+12)+">,");
		
		outputB.println((16*i+10)+","+(16*i+11)+","+(16*i+12));
		outputB.println((16*i+10)+","+(16*i+13)+","+(16*i+12));
		 
		output.println("<"+(16*i+2)+","+(16*((i+nb-1)%nb)+10)+","+(16*((i+nb-1)%nb)+9)+">,");
		output.println("<"+(16*i+2)+","+(16*((i+nb-1)%nb)+9)+","+(16*((i+0)%nb)+1)+">,");
		
		outputB.println((16*i+2)+","+(16*((i+nb-1)%nb)+10)+","+(16*((i+nb-1)%nb)+9));
		outputB.println((16*i+2)+","+(16*((i+nb-1)%nb)+9)+","+(16*((i+0)%nb)+1));
		
		 
		output.println("<"+(16*i+1)+","+(16*((i+nb-1)%nb)+9)+","+(16*((i+nb-1)%nb)+14)+">,");
		output.println("<"+(16*i+1)+","+(16*((i+nb-1)%nb)+14)+","+(16*((i+0)%nb)+6)+">,");
		
		outputB.println((16*i+1)+","+(16*((i+nb-1)%nb)+9)+","+(16*((i+nb-1)%nb)+14));
		outputB.println((16*i+1)+","+(16*((i+nb-1)%nb)+14)+","+(16*((i+0)%nb)+6));
		
		 
		output.println("<"+(16*i+2)+","+(16*((i+nb-1)%nb)+10)+","+(16*((i+nb-1)%nb)+13)+">,");
		output.println("<"+(16*i+5)+","+(16*((i+nb-1)%nb)+13)+","+(16*((i+0)%nb)+2)+">,");
		
		outputB.println((16*i+2)+","+(16*((i+nb-1)%nb)+10)+","+(16*((i+nb-1)%nb)+13));
		outputB.println((16*i+5)+","+(16*((i+nb-1)%nb)+13)+","+(16*((i+0)%nb)+2));
		
		 
		output.println("<"+(16*i+5)+","+(16*((i+nb-1)%nb)+13)+","+(16*((i+nb-1)%nb)+14)+">,");
		output.println("<"+(16*i+6)+","+(16*((i+nb-1)%nb)+14)+","+(16*((i+0)%nb)+5)+">,");
		
		outputB.println((16*i+5)+","+(16*((i+nb-1)%nb)+13)+","+(16*((i+nb-1)%nb)+14));
		outputB.println((16*i+6)+","+(16*((i+nb-1)%nb)+14)+","+(16*((i+0)%nb)+5));
		
		 
		output.println("<"+(16*((i+0)%nb)+3)+","+(16*((i+nb-1)%nb)+12)+","+(16*((i+nb-1)%nb)+11)+">,");
		 if(i!=nb-1)
			output.println("<"+(16*((i+0)%nb)+4)+","+(16*((i+nb-1)%nb)+12)+","+(16*((i+0)%nb)+3)+">,");
		 else
			output.println("<"+(16*((i+0)%nb)+4)+","+(16*((i+nb-1)%nb)+12)+","+(16*((i+0)%nb)+3)+">}}");
		 
		 outputB.println((16*((i+0)%nb)+3)+","+(16*((i+nb-1)%nb)+12)+","+(16*((i+nb-1)%nb)+11));
		 outputB.println((16*((i+0)%nb)+4)+","+(16*((i+nb-1)%nb)+12)+","+(16*((i+0)%nb)+3));
		 
	 }// i
	 output.close();
	 outputB.close(); 
	}
		catch(Exception e){System.out.println("probleme "+e); }
}
}
