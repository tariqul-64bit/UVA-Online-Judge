import java.math.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
       Scanner cin = new Scanner(System.in);
       
       
       
       
       while(cin.hasNext())
       {
           int x,index,i,j,y;
           index =0;
           BigInteger max =BigInteger.valueOf(-999999);
           BigInteger[][] arr = new BigInteger[105][105];
           
           
           
           while(cin.hasNext())
           {  
              x= cin.nextInt();
              if( x == -999999 ) break;
              arr[index][index] = BigInteger.valueOf(x);
              if(arr[index][index].compareTo(max) == 1 ) 
              max = arr[index][index];
              index++;
           }
           
           index--;
           
           x = 0;           
           
           for(i=0;i<index; i++)
           {
               x++;
               y=x;
               
               for(j = 0 ; j <= index-i-1 ; j++)
               {
                  
                  arr[j][y] = arr[j][j].multiply(arr[j+1][y]);
                  
                  if(arr[j][y].compareTo(max)== 1 ) max = arr[j][y];
       
                  y++;
                  
               
               }
                       
                       
           }
           
           
           System.out.println(max);
   
           
           
       
       }
       
    }
}