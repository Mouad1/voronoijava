package beachline;

/** Either a leaf or an internal node in a binary search tree */
public abstract class Composant {
	protected InternalNode father; 
	protected boolean isLeftSon; 
	protected InternalNode getFather(){return this.father;}
	

}
