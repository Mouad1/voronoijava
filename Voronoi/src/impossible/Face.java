package impossible;

public class Face {
	private int cotes[]=new int[3]; 
	
	public Face(int i,int j,int k){
		cotes[0]=i; 
		cotes[1]=j; 
		cotes[2]=k; 
		
	}
	
	public int get(int i) {return cotes[i];}
	
	public String toString(){
		String s="<"+cotes[0]+","+cotes[1]+","+cotes[2]+">";
		return s; 
	}
	

}
