package test;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.PrintStream;
import java.util.ArrayList;

		
public class STLReaderToPovray {
	
	protected static class Triplet{
		private int a,b,c; 
		private Triplet(int u,int v,int w){
			a=u; 
			b=v; 
			c=w; 
		}
	}
	protected static ArrayList<Triplet> lesFaces=new ArrayList<Triplet>(); 
	
	private static PrintStream output; 
	
	public static void main(String[] args) throws Exception{
		 output=new PrintStream("C:/tmp/bunny.inc");
		String catena="/tmp/bunny.stl"; 
		File source=new File(catena); 
		FileInputStream fis = new FileInputStream(source);
		BufferedInputStream bis = new BufferedInputStream(fis);
		String nom="bunny";  
		Mesh leMesh=new Mesh(); 
	
		LittleEndianInputStream fichier=new LittleEndianInputStream(bis); 
		for(int i=0;i<80;i++){
			byte lu=fichier.readByte(0); 
			//System.out.print((char)lu);
		}
		//System.out.println();
		//System.out.println("*** Nombre de triangles ****");
		output.println("#declare "+nom+"=mesh2{\n vertex_vectors{"); 
		int nbTriangles=fichier.readInt(); 
		output.println(3*nbTriangles+",");
		for(int i=0;i<nbTriangles;i++ ){
			//System.out.println("Triangle "+i);
			// Normale
			float normaleX=fichier.readFloat(); 
			float normaleY=fichier.readFloat(); 
			float normaleZ=fichier.readFloat(); 
			//System.out.println("Normale : ("+normaleX+" "+normaleY+" "+normaleZ+")"); 
			
			// Sommet 1
			float S1X=fichier.readFloat(); 
			float S1Y=fichier.readFloat(); 
			float S1Z=fichier.readFloat(); 
			//System.out.println("Premier sommet :("+S1X+" "+S1Y+" "+S1Z+")");
			Sommet S1=new Sommet(S1X,S1Y,S1Z);
			// Sommet 2
			float S2X=fichier.readFloat(); 
			float S2Y=fichier.readFloat(); 
			float S2Z=fichier.readFloat(); 
			//System.out.println("Deuxième sommet :("+S2X+" "+S2Y+" "+S2Z+")");		
			Sommet S2=new Sommet(S2X,S2Y,S2Z);
			// Sommet 3
			float S3X=fichier.readFloat(); 
			float S3Y=fichier.readFloat(); 
			float S3Z=fichier.readFloat(); 
			//System.out.println("Troisième sommet :("+S3X+" "+S3Y+" "+S3Z+")");		
			Sommet S3=new Sommet(S3X,S3Y,S3Z);
			output.print(S1.toPovray()+","+S2.toPovray()+","+S3.toPovray());
			if(i<nbTriangles-1) output.println(","); else output.println(); 
			Triangle tr=new Triangle(S1,S2,S3); 
			leMesh.add(tr); 
			lesFaces.add(new Triplet(3*i,3*i+1,3*i+2)); 
			int count=fichier.readUnsignedShort(); 
			//System.out.println("Controle : "+count); 
		}
		output.println("}\n face_indices{ \n"+nbTriangles+",");
		for(int i=0;i<nbTriangles;i++){
			output.print("<"+lesFaces.get(i).a+","+lesFaces.get(i).b+","+lesFaces.get(i).c+">");
			if(i<nbTriangles-1) output.print(","); 
			if(i%10==0) output.println(); 
		}
		output.println("}}");
		System.out.println("fini"); 
	}

}
