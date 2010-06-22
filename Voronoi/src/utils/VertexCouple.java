package utils;

public class VertexCouple {

		private Vertex v1,v2;

		public VertexCouple(Vertex v1, Vertex v2) {
			super();
			this.v1 = v1;
			this.v2 = v2;
		}

		public Vertex getV1() {
			return v1;
		}

		public Vertex getV2() {
			return v2;
		} 
		public double distance(){
			return Pos3D.distance(v1,v2);
		}
		
}
