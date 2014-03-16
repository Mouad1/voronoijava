package test;

import java.io.PrintStream;

import utils.Pos3D;

public class EggCup {
	public static void main(String[] args) throws Exception{
		int n=3; 
		
		double fi=(1+Math.sqrt(5))/2;
		double hauteur=fi; 
		int decale=1;
		double r=1; 
		double R=fi; 
		Pos3D pointHaut[]=new Pos3D[n];
		Pos3D pointBas[]=new Pos3D[n];
		int number=0;
		PrintStream  outputBlender=new PrintStream("/tmp/eggCup.inc");
		
		
		for(int i=0;i<n;i++){
			pointHaut[i]=new Pos3D(r*Math.cos(2*Math.PI*i/n), hauteur, r*Math.sin(2*Math.PI*i/n));
			pointBas[i]=new Pos3D(R*Math.cos(2*Math.PI*i/n), 0, R*Math.sin(2*Math.PI*i/n));
		
			//les spheres
			outputBlender.println("me"+i+"=translate(["+pointHaut[i].getX()+","+pointHaut[i].getZ()+",hauteur],2*diam)");
			 if(number==0){
				 outputBlender.println("ob0=scene.objects.new(me"+i+",'sphere"+number+"')");
			 }
			 else{
			  outputBlender.println("localOb=scene.objects.new(me"+i+",'sphere"+number+"')");
			  outputBlender.println("ob0.join([localOb])");
   	          outputBlender.println("scene.objects.unlink(localOb)");
			 }
		      number++;
		      outputBlender.println("me"+i+"=translate(["+pointBas[i].getX()+","+pointBas[i].getZ()+",0],2*diam)");
		      outputBlender.println("localOb=scene.objects.new(me"+i+",'sphere"+number+"')");
			  outputBlender.println("ob0.join([localOb])");
   	          outputBlender.println("scene.objects.unlink(localOb)");
			  number++;
		}
		for(int i=0;i<n;i++){
			  // Les cylindres
			  outputBlender.println("meFinal=NMesh.GetRaw()"); 
      		  outputBlender.println("point0=Vector(["+pointHaut[i].getX()+","+pointHaut[i].getZ()+",hauteur])");
      		  System.out.println(i+" "+n);
       	  	  outputBlender.println("point1=Vector(["+pointBas[(i+decale)%n].getX()+","+pointBas[(i+decale)%n].getZ()+",0])");
       	  	  outputBlender.println("meFinal.verts.extend(lineSegMe(point0,point1,diam,nbf)[1])");  
       	      outputBlender.println("meFinal.verts.extend(lineSegMe(point0,point1,diam,nbf)[3])");  
       	      outputBlender.println("me=meshify(meFinal,nbf)");
       	      outputBlender.println("localOb=scene.objects.new(me,'pieceX"+i+"_"+number+"')");
 	    	  outputBlender.println("ob0.join([localOb])");
 	    	  outputBlender.println("scene.objects.unlink(localOb)");
 	    	  number++; 
 	    	  
			  outputBlender.println("meFinal=NMesh.GetRaw()"); 
      		  outputBlender.println("point0=Vector(["+pointHaut[i].getX()+","+pointHaut[i].getZ()+",hauteur])");
      		  outputBlender.println("point1=Vector(["+pointBas[(i+n-decale)%n].getX()+","+pointBas[(i+n-decale)%n].getZ()+",0])");
       	  	  outputBlender.println("meFinal.verts.extend(lineSegMe(point0,point1,diam,nbf)[1])");  
       	      outputBlender.println("meFinal.verts.extend(lineSegMe(point0,point1,diam,nbf)[3])");  
       	      outputBlender.println("me=meshify(meFinal,nbf)");
       	      outputBlender.println("localOb=scene.objects.new(me,'pieceY"+i+"_"+number+"')");
 	    	  outputBlender.println("ob0.join([localOb])");
 	    	  outputBlender.println("scene.objects.unlink(localOb)");
 	    	  number++; 
			  
		}
		outputBlender.close();
	
	}
	

}
