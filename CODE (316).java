{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 package main;\par
\par
import java.util.*;\par
import java.io.*;\par
import java.math.*;\par
\par
\par
public class Main \{\par
    public static void main(String[] args) \{\par
        \par
        Scanner cin = new Scanner(System.in);\par
        \par
        while(cin.hasNext())\par
        \{\par
        String a = cin.next();\par
        int b= cin.nextInt();\par
        int c= cin.nextInt();\par
        \par
        \par
        \par
        String ans= new BigInteger(a,b).toString(c);\par
        ans = ans.toUpperCase();\par
        if(ans.length() > 7 ) ans="ERROR";\par
        System.out.printf("%7s\\n",ans);\par
        \par
        \}\par
        \par
        \par
        \par
    \}\par
    \par
\}\par
\par
}
 