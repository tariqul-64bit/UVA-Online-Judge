#include<bits/stdc++.h>
using namespace std;


char a[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
char b[] = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";

int main()
{



char x[1000];

    while(gets(x))
    {

        for(int i=0; i<strlen(x); i++)
        {
            for(int j=0; j<strlen(a); j++)
            {

                if( x[i]  == a[j] ) {cout<<b[j];break;}
            }
        }
cout<<endl;
    }

    return 0;
}
