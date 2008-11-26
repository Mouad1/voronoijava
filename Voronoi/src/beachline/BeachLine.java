/**
 * 
 */
package beachline;

import events.Site;

/**
 * @author decomite
 *
 */
public class BeachLine {
	private Composant root=null;
	
	public boolean isEmpty(){return root==null;}
	
	public Leave findLeave(Site p,double y0){
		if(root==null) return null; 
		Composant curseur=root; 
		while(!(curseur instanceof Leave)){
			InternalNode iNode=(InternalNode)curseur;
			double bkpt=iNode.getX(y0); 
			if(p.getXcoord()<bkpt) curseur=iNode.getFLeft(); 
			else curseur=iNode.getFRight(); 
		}
		return (Leave)curseur; 
	}
	
	public void replaceleave(Leave alpha,Site p){
		Site pOrig=alpha.getP(); 
		InternalNode A=new InternalNode(pOrig,p,alpha.isLeftSon,alpha.getFather()); 
		InternalNode B=new InternalNode(p,pOrig,false,A); 
		Leave al1=new Leave(pOrig,true,A); 
		Leave al2=new Leave(p,true,B);
		Leave al3=new Leave(pOrig,false,B); 
	}
	
	private void afficheAux(int incr,Composant cur){
		for(int i=0;i<incr;i++) System.out.print(" "); 
		if(cur instanceof Leave) {System.out.println(cur); return;} 
		System.out.println(cur);
		InternalNode in=(InternalNode) cur; 
		afficheAux(incr+1,in.getFLeft());
		afficheAux(incr+1,in.getFRight());
	}
	public void affiche(){ afficheAux(0,root);}
	

}
