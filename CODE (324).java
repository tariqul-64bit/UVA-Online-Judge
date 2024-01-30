package main;

import java.util.Scanner;
import java.util.regex.*;

class Main{
	public static void main(String[] args){
		String word;
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext())
                {
                word = cin.nextLine();
                int s=word.replaceAll("[^a-zA-Z]+", " ").trim().split(" ").length;
                //String word2 =word.replaceAll("[^a-zA-Z]+", " ");
                //This will omit all the outside charecter found (one or more)
                //And will replace it with a single space.
                //System.out.println("___________\n");
                //System.out.println(word2);
                System.out.println(s);
                }
        }
}