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
\par
        int t = cin.nextInt();\par
\par
        while (t-- > 0) \{\par
\par
            String a = cin.next();\par
            String y = cin.next();\par
            String b = cin.next();\par
            String z = cin.next();\par
            String c = cin.next();\par
            boolean found = false;\par
\par
            int ans = 0;\par
\par
            for (int i = 2; i <= 18; i++) \{\par
                try \{\par
                    BigInteger aa = new BigInteger(a, i).add(new BigInteger(b, i));\par
                    BigInteger bb = new BigInteger(c, i);\par
\par
                    if (aa.equals(bb)) \{\par
                        ans = i;\par
                        break;\par
                    \}\par
                \} catch (Exception e) \{\par
                    continue;\par
                \}\par
//base 1 (one) check\par
                if (ans == 0 && (a.length() + b.length() == c.length())) \{\par
                    boolean onlyone = true;\par
                    int k;\par
\par
                    for (k = 0; k < a.length(); k++) \{\par
                        if (a.charAt(k) != '1') \{\par
                            onlyone = false;\par
                            break;\par
                        \}\par
                    \}\par
\par
                    for (k = 0; k < b.length(); k++) \{\par
                        if (b.charAt(k) != '1') \{\par
                            onlyone = false;\par
                            break;\par
                        \}\par
                    \}\par
\par
                    for (k = 0; k < c.length(); k++) \{\par
                        if (c.charAt(k) != '1') \{\par
                            onlyone = false;\par
                            break;\par
                        \}\par
                    \}\par
                    if (onlyone == true) \{\par
                        ans = 1;\par
                    \}\par
                \}\par
\par
            \}\par
\par
            System.out.println(ans);\par
        \}\par
\par
    \}\par
\}\par
}
 