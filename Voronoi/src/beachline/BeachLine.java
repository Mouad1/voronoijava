/**
 * 
 */
package beachline;

import events.Event;
import events.Site;
import events.SiteEvent;

/**
 * @author decomite
 *
 */
public class BeachLine {
	private Composant root=null;
	
	public boolean isEmpty(){return root==null;}
	
	// This is going to be handleSiteEvent.....
	public void placeLeave(Event p,double y0){
		if(this.root==null){
			Leave nv=new Leave(p,false,null);
			nv.setPred(null); 
			nv.setSucc(null); 
			this.root=nv; 
			return;
		}
		Leave alpha=findLeave(p,y0); 
		
		System.out.println("alpha "+alpha); 
		replaceLeave(alpha,p);
	}
	
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
	
	public Leave replaceLeave(Leave alpha,Site p){
		
		Site pOrig=alpha.getP(); 
		InternalNode A=new InternalNode(pOrig,p,alpha.isLeftSon,alpha.getFather());
		if(alpha==root)root=A;
		InternalNode B=new InternalNode(p,pOrig,false,A); 
		Leave al1=new Leave(pOrig,true,A); 
		Leave al2=new Leave(p,true,B);
		Leave al3=new Leave(pOrig,false,B); 
		// setting preds and succs
		al1.setPred(alpha.getPred());
		al1.setSucc(al2);
		
		al2.setPred(al1);
		al2.setSucc(al3); 
		
		al3.setPred(al2); 
		al3.setSucc(alpha.getSucc()); 
		
		if(alpha.getPred()!=null) alpha.getPred().setSucc(al1);
		if(alpha.getSucc()!=null) alpha.getSucc().setPred(al3); 
		return al2; 
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
