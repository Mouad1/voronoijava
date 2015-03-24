package test;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;


public class STLReader {
	
	
	
	public static void main(String[] args) throws Exception{
		String catena="/tmp/alveole.stl"; 
		File source=new File(catena); 
		FileInputStream fis = new FileInputStream(source);
		BufferedInputStream bis = new BufferedInputStream(fis);
		
		Mesh leMesh=new Mesh(); 
	
		LittleEndianInputStream fichier=new LittleEndianInputStream(bis); 
		for(int i=0;i<80;i++){
			byte lu=fichier.readByte(0); 
			System.out.print((char)lu);
		}
		System.out.println();
		System.out.println("*** Nombre de triangles ****");
		int nbTriangles=fichier.readInt(); 
		System.out.println(nbTriangles);
		for(int i=0;i<nbTriangles;i++ ){
			//System.out.println("Triangle "+i);
			// Normale
			float normaleX=fichier.readFloat(); 
			float normaleY=fichier.readFloat(); 
			float normaleZ=fichier.readFloat(); 
			System.out.println("Normale : ("+normaleX+" "+normaleY+" "+normaleZ+")"); 
			
			// Sommet 1
			float S1X=fichier.readFloat(); 
			float S1Y=fichier.readFloat(); 
			float S1Z=fichier.readFloat(); 
			System.out.println("Premier sommet :("+S1X+" "+S1Y+" "+S1Z+")");
			Sommet S1=new Sommet(S1X,S1Y,S1Z);
			// Sommet 2
			float S2X=fichier.readFloat(); 
			float S2Y=fichier.readFloat(); 
			float S2Z=fichier.readFloat(); 
			System.out.println("Deuxieme sommet :("+S2X+" "+S2Y+" "+S2Z+")");		
			Sommet S2=new Sommet(S2X,S2Y,S2Z);
			// Sommet 3
			float S3X=fichier.readFloat(); 
			float S3Y=fichier.readFloat(); 
			float S3Z=fichier.readFloat(); 
			System.out.println("Troisieme sommet :("+S3X+" "+S3Y+" "+S3Z+")");		
			Sommet S3=new Sommet(S3X,S3Y,S3Z);
			
			Triangle tr=new Triangle(S1,S2,S3); 
			leMesh.add(tr); 
			
			int count=fichier.readUnsignedShort(); 
			//System.out.println("Controle : "+count); 
		}
		System.out.println(leMesh.size()); 
	}

}
