{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 import  java.math.*;\par
import java.util.*;\par
import java.lang.StringBuilder;\par
\par
\par
public class Main\{\par
\par
    public static void main(String[] args) \{\par
      \par
       Scanner cin = new Scanner(System.in);\par
       while(cin.hasNext())\par
       \{   \par
           \par
           BigInteger a = cin.nextBigInteger();\par
           String x = cin.next();\par
           BigInteger b = cin.nextBigInteger();\par
           \par
      \par
           if(x.equals("%")) \{System.out.println(a.mod(b));\}\par
           else  System.out.println(a.divide(b));\par
                   \par
           \par
          \par
       \}\par
    \}\par
    \par
\}\par
}
 