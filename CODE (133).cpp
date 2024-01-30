#include<bits/stdc++.h>
using namespace std;

int main()
{

//freopen("input.txt","r",stdin);

string a,b;
int c[130],d[130];
//while(cin>>a>>b)  WA

while(getline(cin,a) && getline(cin,b))
{
    if(!a.size() || !b.size()) { cout<<endl;continue;}

    memset(c,0,sizeof(c));
    memset(d,0,sizeof(d));

    for(int i=0;i<a.size();i++) c[(int) a[i]]++;
    for(int i=0;i<b.size();i++) d[(int) b[i]]++;



    for(int i=97;i<=122;i++)
        if(c[i] && d[i] )
        {
            int printer = min(c[i] ,d[i]);
        for(int j=0;j<printer ;j++) cout<< (char) i;
        }



cout<<endl;

}



}
