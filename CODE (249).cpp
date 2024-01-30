#include<bits/stdc++.h>
using namespace std;

double strtoint(string &a)
{
int b=(int)a[0];
return  b;
}


string make_string1(char a)
{
    string m;
    m[0]=a;
    return m;
}

string make_string2(char a,char b)
{
    string m;
    m[0]=a;
    m[1]=b;
    return m;
}






int main()
{
    string w;
    while(cin>>w)
    {
        string  tmp;
        int l;
        char a,b;
        string z=  "000000000000000";
        int zz=14;
        for(int i=(w.size()-1); i>=0; i--)
        {
            z[zz--] = w[i];
        }
        a=z[14];
        tmp=make_string1(a);
        l=strtoint(tmp);
        if(l) cout<<l<<" kuti";
        /*
                tmp= make_string2(z[13],z[12]);
                l=strtoint(tmp);
                if(l) cout<<l<<" lakh";

        */

    }
}
