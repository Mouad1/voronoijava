/**
 * 
 */
package test;

import events.CircleEvent;
import events.Event;
import events.EventQueue;
import events.Site;
import events.SiteEvent;
import java.util.Iterator; 

import beachline.BeachLine;
import beachline.Composant;
import beachline.InternalNode;
/**
 * @author decomite
 *
 */
public class testDeterminant {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Site p1=new Site(-1,1); 
		Site p2=new Site(1,1);
		Site p3=new Site(0,2); 
		CircleEvent ce=new CircleEvent(p1,p2,p3); 
		EventQueue eq=new EventQueue();
		eq.add(new SiteEvent(p3)); 
		eq.add(new SiteEvent(p2)); 
		eq.add(new SiteEvent(p1));  
		eq.add(ce); 
		for(Event ev:eq)
			System.out.println(ev);
		
		InternalNode testBP=new InternalNode(p1,p2); 
		System.out.println("--->"+testBP.getX(0)); 
		
		BeachLine bl=new BeachLine();
		Event.setBeachLine(bl); 
		/*
		bl.placeLeave(p1, 0);
		bl.placeLeave(p2, 1);
		bl.placeLeave(p3,2); 
		*/
		bl.affiche(); 
}
}
