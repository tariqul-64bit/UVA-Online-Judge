{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 package javaapplication1;\par
\par
\par
\par
import  java.math.*;\par
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
          BigInteger d = new BigInteger("17"); \par
          BigInteger a = cin.nextBigInteger();\par
          String aa= a.toString();\par
          if(aa.equals("0")) break;\par
           \par
           \par
          \par
          int ans=0;\par
          \par
          if(a.mod(d).toString().equals("0") ) ans=1;\par
          \par
          System.out.println(ans); \par
          \par
       \}\par
    \}\par
    \par
\}\par
}
 