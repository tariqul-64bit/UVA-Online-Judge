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
public class JavaApplication1 \{\par
\par
    public static void main(String[] args) \{\par
      \par
       Scanner cin = new Scanner(System.in);\par
       while(cin.hasNext())\par
       \{   \par
           \par
           BigInteger zero = new BigInteger("0");\par
           BigInteger one = new BigInteger("1");\par
           \par
           \par
           \par
           String first = cin.next();\par
           String prototype= first;\par
           BigInteger a= new BigInteger(first);\par
           if(a.equals(zero) || a.equals(one) )\par
           \{\par
               System.out.println("Not an Automorphic number.");\par
               continue;\par
           \}\par
               \par
               \par
           a=a.multiply(a);\par
           \par
           \par
          \par
           StringBuilder file = new StringBuilder();\par
           file.append(a.toString());\par
           file = file.reverse();\par
           String last = file.substring(0,(prototype.length()));\par
           \par
           \par
           StringBuilder comp = new StringBuilder();\par
           comp.append(prototype);\par
           comp.reverse();\par
          \par
           \par
           String aaa= comp.toString();\par
           \par
         if(aaa.equals(last)) \{ System.out.println("Automorphic number of "+aaa.length()+"-digit.");\}\par
         else System.out.println("Not an Automorphic number.");\par
           \par
          \par
       \}\par
    \}\par
    \par
\}\par
}
 