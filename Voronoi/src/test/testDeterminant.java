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
		Site p2=new Site(1,2); 
		InternalNode testBP=new InternalNode(p1,p2); 
		System.out.println("--->"+testBP.getX(0.75)); 
}
}
