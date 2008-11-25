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
/**
 * @author decomite
 *
 */
public class testDeterminant {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Site p1=new Site(1,0);
		Site p2=new Site(0,-1);
		Site p3=new Site(-1,0); 
		CircleEvent ce=new CircleEvent(p1,p2,p3);
		System.out.println(ce);
		EventQueue eq=new EventQueue(); 
		eq.add(new SiteEvent(p1)); 
		eq.add(new SiteEvent(p2)); 
		eq.add(new SiteEvent(p3)); 
		eq.add(ce); 
		System.out.println("size "+eq.size()); 
		Iterator<Event> it=eq.iterator();
		while(it.hasNext()) System.out.println(it.next()); 
		
	}

}
