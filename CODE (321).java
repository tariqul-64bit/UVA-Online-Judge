import java.util.*;

import java.math.*;



public class Main{


     public static void main(String []args){

         
        Scanner cin = new Scanner(System.in);
 
                 int n;
	n=cin.nextInt();

        
        while( n-- > 0 )
   
     {
    
        BigInteger a = cin.nextBigInteger();
  
          BigInteger b = cin.nextBigInteger();
  
            System.out.println(b.mod(a).toString());

        }
        

     }

}