package test;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class QhullLinux {
	
	public static void main(String[] args) {
		String s=null;
		String ss[]=new String[3]; 
		ss[0]="\\qhull\\qhull-2003.1\\rbox";
		ss[1]="10"; 
		ss[2]="|"; 
		ss[2]="qvoronoi -f"; 
		/*
		 try {
	            
			   
		            
		            //Process p = Runtime.getRuntime().exec("\\qhull\\qhull-2003.1\\rbox 10 | qvoronoi -f");
			 Process p = Runtime.getRuntime().exec(ss);
		            BufferedReader stdInput = new BufferedReader(new 
		                 InputStreamReader(p.getInputStream()));

		            BufferedReader stdError = new BufferedReader(new 
		                 InputStreamReader(p.getErrorStream()));

		            // read the output from the command
		            
		            System.out.println("Here is the standard output of the command:\n");
		            while ((s = stdInput.readLine()) != null) {
		                System.out.println(s);
		            }
		            
		            // read any errors from the attempted command

		            System.out.println("Here is the standard error of the command (if any):\n");
		            while ((s = stdError.readLine()) != null) {
		                System.out.println(s);
		            }
		            
		            System.exit(0);
		        }
		        catch (IOException e) {
		            System.out.println("exception happened - here's what I know: ");
		            e.printStackTrace();
		            System.exit(-1);
		        }
		        */
		try
		{
		    List<String> command = new ArrayList<String>();
		    //rbox 10 D2 | qhull d QJ s i TO result

		    command.add("rbox");
		    command.add("10"); 
		    command.add(">");
		    command.add("/tmp/toto.txt"); 
		    /*
		    command.add("QJ"); 
		    command.add("s"); 
		    command.add("i");
		    //command.add("TO"); 
		    //command.add("/tmp/result.txt"); 
		    
		    
		   //command.add("TI \\abc.txt"); 
		  */
		   
		  
		   
		   

		    ProcessBuilder builder = new ProcessBuilder(command);
		    Map<String, String> environ = builder.environment();
		  

		  
		    final Process process = builder.start();
		   
		    InputStream is = process.getInputStream();
		    InputStreamReader isr = new InputStreamReader(is);
		    BufferedReader br = new BufferedReader(isr);
		    String line;
		    while ((line = br.readLine()) != null) {
		      System.out.println(line);
		      
		    }
		   
		    System.out.println("Program terminated!");
		
		
		    }
		catch(Exception e) {
            System.out.println("exception happened - here's what I know: ");
            e.printStackTrace();
            System.exit(-1);
        }
		
		
		
	}
}


