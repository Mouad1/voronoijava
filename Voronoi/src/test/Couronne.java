package test;

public class Couronne {
	private int center; 
	private int[] autour;
	private String canonicName; 
	
	protected static double diam[]={1,2,3,5,8,13,21}; 
	protected static String name[]={"1 Fibo","2 Fibos", "3 Fibos","5 Fibos", "8 Fibos", "13 Fibos","21 Fibos"}; 

	
	public Couronne(int center, int[] autour) {
		this.center = center;
		int tp[]=new int[autour.length]; 
		System.arraycopy(autour, 0, tp, 0,autour.length); 
		this.autour = tp;
		this.canonicName=this.findCanonicName();
	}
	
	public String toString(){
		return this.canonicName; 
	}
	
	private String findCanonicName(){
		String ms=""; 
		for(int i=0;i<autour.length;i++) // calculer un nom
		{
		String s=""; 
		for(int k=0;k<autour.length;k++)
			s+=name[autour[(k+i)%autour.length]]+" "; 
		s+="\n Avec au centre "+name[center];
		if(i==0) ms=s; 
		else
			if(ms.compareTo(s)==-1)ms=s; 
		}// for i
		return ms; 
	}
	
	public int hashCode(){
		return this.canonicName.hashCode(); 
	}

	

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Couronne other = (Couronne) obj;
		if (canonicName == null) {
			if (other.canonicName != null)
				return false;
		} else if (!canonicName.equals(other.canonicName))
			return false;
		return true;
	}
	

}
