package test;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStreamReader;
import java.io.UnsupportedEncodingException;
import java.util.Scanner;

public class TestAccents {

    /**
     * @param args
     * @throws UnsupportedEncodingException
     * @throws FileNotFoundException
     */
    public static void main(String[] args) throws UnsupportedEncodingException, FileNotFoundException {
        Scanner entree ;
        //entree = new Scanner(System.in);
        entree = new Scanner(new InputStreamReader(System.in,"UTF-"));
        //entree = new Scanner(new InputStreamReader(new FileInputStream("test.txt"),"UTF-8"));
        String sourceCode, sourceConsole;
        //sourceCode ="éà";
        sourceConsole = entree.nextLine();
        //System.out.println("code:"+sourceCode);
        System.out.println("Console:"+sourceConsole);

    }

}
