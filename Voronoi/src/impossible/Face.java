package impossible;

public class Face {
	private int cotes[]=new int[3]; 
	private int color; 
	
	public Face(int i,int j,int k,int col){
		cotes[0]=i; 
		cotes[1]=j; 
		cotes[2]=k; 
		this.color=col; 
	}
	
	public int get(int i) {return cotes[i];}
	
	public String toString(){
		String s="<"+cotes[0]+","+cotes[1]+","+cotes[2]+">,"+color;
		return s; 
	}
	

}
