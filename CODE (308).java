{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.16299}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 package main;\par
\par
import java.util.*;\par
import java.io.*;\par
import java.math.*;\par
\par
public class Main \{\par
\par
    public static void main(String[] args) \{\par
\par
        Scanner cin = new Scanner(System.in);\par
        int t = cin.nextInt();\par
        int group = 0;\par
        while (group <  t) \{\par
            BigDecimal ans = BigDecimal.ZERO;\par
\par
            while (true) \{\par
                String nw = cin.next();\par
                if (nw.equals("0")) \{\par
                    System.out.println(ans.stripTrailingZeros().toPlainString());\par
                    group++;\par
                    break;\par
                \}\par
                else\{\par
                ans = ans.add(new BigDecimal(nw));\}\par
\par
            \}\par
\par
        \}\par
\par
    \}\par
\}\par
}
 