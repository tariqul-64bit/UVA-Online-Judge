#include<bits/stdc++.h>
using namespace std;
int last=-1;
int a[99999];

int main()
{

    //freopen("input.txt","r",stdin);
    int left,right,height;
    memset(a,0,sizeof(a));

    while(cin>>left>>height>>right)
    {

        for(int i=left; i<right; i++)
        {
            a[i] = max(height,a[i]);
        }

        last = max(last,right);

    }




    bool firsty =true;

    int skyline  = -1000;
    for(int i=1; i<=last  ; i++)
    {
        if(skyline != a[i])
        {
            skyline =a[i];



            cout<<i<<" "<<skyline;
           if(i != last ) cout<<" ";
        }

    }
cout<<endl;

}
