{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 package main;\par
\par
import java.util.*;\par
import java.math.*;\par
\par
public class Main \{\par
\par
    public static void main(String[] args) \{\par
\par
        Scanner cin = new Scanner(System.in);\par
     \par
        while(cin.hasNext())\par
        \{\par
            BigInteger a = new BigInteger(cin.next());\par
            System.out.println(a.toString() + "!");\par
            BigInteger ans = BigInteger.ONE;\par
            int aa = a.intValue();\par
           for(int i=2; i<= aa ; i++)\par
           \{\par
           ans = ans.multiply(new BigInteger(Integer.toString(i)));\par
           \}\par
            System.out.println(ans);\par
        \}\par
        \par
    \}\par
\}\par
}
 