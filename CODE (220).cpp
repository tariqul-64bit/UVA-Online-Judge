#include<bits/stdc++.h>
using namespace std;

int reach_point(int a,int b,bool clockwise)
{
    if(a==b) return 0;
    else if (a>b) return (a-b)*9;
    else return (b-a)*9;
}

int main()
{
    int n,x,y,z;

    while( (cin>>n>>x>>y>>z)  && ( n || x || y || z) )
    {
        int ans=0;

        ans+= 1080;

        ans+=reach_point(n,x,0);
        ans+=reach_point(n,y,0);
        ans+= reach_point(n,z,1);


        cout<<ans<<endl;




    }



}
