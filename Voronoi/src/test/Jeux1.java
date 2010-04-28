package test;

public class Jeux1 {
	public static void main(String[] args) {
		int nb=0; 
		for(int a=1;a<10;a++)
			for(int b=1;b<10;b++)
				for(int c=1;c<10;c++)
					for(int d=1;d<10; d++)
						if(a*c*(10*b+d)==b*d*(10*a+c))
							System.out.println(++nb+" "+a+" "+b+" "+c+" "+d); 
	}

}
