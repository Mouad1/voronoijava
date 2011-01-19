package utils;

public class FaceTriangulaire {
	
	private Pos3D a,b,c; 
	private int ia,ib,ic; 
	
	/**
	 * @param a
	 * @param b
	 * @param c
	 * @param ia
	 * @param ib
	 * @param ic
	 */
	public FaceTriangulaire(Pos3D a, Pos3D b, Pos3D c, int ia, int ib, int ic) {
		this.a = a;
		this.b = b;
		this.c = c;
		this.ia = ia;
		this.ib = ib;
		this.ic = ic;
	}

	/**
	 * @return the a
	 */
	public Pos3D getA() {
		return a;
	}

	/**
	 * @return the b
	 */
	public Pos3D getB() {
		return b;
	}

	/**
	 * @return the c
	 */
	public Pos3D getC() {
		return c;
	}

	/**
	 * @return the ia
	 */
	public int getIa() {
		return ia;
	}

	/**
	 * @return the ib
	 */
	public int getIb() {
		return ib;
	}

	/**
	 * @return the ic
	 */
	public int getIc() {
		return ic;
	}

	public String pythonValue(){
		String s ="";
		s+="f=NMesh.Face()\n";
		s+="f.v.append(me.verts["+ia+"])\n"; 
		s+="f.v.append(me.verts["+ib+"])\n"; 
		s+="f.v.append(me.verts["+ic+"])"; 
		return s ; 
	}
	
	public String toString(){
		return "<"+ia+","+ib+","+ic+">";
		//return pythonValue(); 
	}
	
	public double surface(){
		double ca=Pos3D.distance(b,c); 
		double cb=Pos3D.distance(a,c); 
		double cc=Pos3D.distance(a,b); 
		double s=(ca+cb+cc)/2; 
		double A=Math.sqrt(s*Math.abs((s-ca))*Math.abs((s-cb))*Math.abs((s-cc))); 
		//System.out.println("------------>"+ca+" "+cb+" "+cc+" "+s+" "+A); 
		return A; 
	}
	
	public Vertex getCenter(){
		Vertex A=new Vertex(a); 
		Vertex B=new Vertex(b); 
		Vertex C=new Vertex(c); 
		Vertex mi=Vertex.add(A,B); 
		mi=Vertex.add(mi,C);
		return Vertex.mul(mi,1.0/3); 
	}
	
	public Vertex normal(){
		Vertex C=this.getCenter(); 
		Vertex u=Vertex.sub(C, new Vertex(a)); 
		Vertex v=Vertex.sub(C, new Vertex(b)); 
		Vertex resu=Vertex.produitVectoriel(u,v); 
		return Vertex.mul(resu,1/resu.norme()); 
	}

	public boolean contains(Pos3D v){
		return (this.a.equals(v)||this.b.equals(v)|| this.c.equals(v)); 
	}
}
