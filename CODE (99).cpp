#include<bits/stdc++.h>
using namespace std;
int real_max=9;
int time=0;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);





    int a,b;
    while(cin>>a>>b);
    {
        int idx=0,idy=a;
        int aa[10000];
        int bb[10000];
        memset(aa,0,sizeof(aa));
        memset(bb,0,sizeof(bb));
        bb[b] = 99;

        for(int i=0; i<a; i++)
        {
            cin>>aa[i];
        }


        for(int i= idx ; i< idy ; i++)
        {
            if( aa[i] == real_max && bb[i] !=99 )
            {
                time++;
                aa[i] == -1 ;
                bb[i] == -1;
            }

            aa[idy] == aa[idx];
            bb[idy] == bb[idx];
            aa[idx] == -1;
            bb[idx] == -1;
             break;
        }



    }



}
