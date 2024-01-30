#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int tc;
cin>>tc;

for(int tcc= 1;tcc <= tc; tcc++)
{
    int n,p,q;
    int arr[50];
    int gm=0;
    int egg= 0;

    memset(arr,0,sizeof(arr));
    cin>>n>>p>>q;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(egg<p && gm<q)
        {
            if( gm+arr[i] <=q ) {egg++; gm+=arr[i];}

        }

}

printf("Case %d: %d\n",tcc,egg);


}

}

