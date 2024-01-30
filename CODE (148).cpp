#include<bits/stdc++.h>
using namespace std;
bool possible;
int a[5];

long long op(long long ans,int b,int pos)
{
if(b==0) ans+= a[pos];
if(b==1) ans-= a[pos];
if(b==2) ans*= a[pos];

return ans;

}



int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);



    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4] &&  ( a[0] && a[1] && a[2] && a[3] && a[4]))

    {
        bool possible =false;
        sort(a,a+5);




        do
        {


            for(int w=0;w<3;w++)
            for(int x=0;x<3;x++)
            for(int y=0;y<3;y++)
            for(int z=0;z<3;z++)
            {
                long long ans=a[0];
                ans = op(ans,w,1);
                ans = op(ans,x,2);
                ans = op(ans,y,3);
                ans = op(ans,z,4);

               // cout<<w<<" "<<x<<" "<<y<<" "<<z<<" "<<ans<<endl;
                if(ans == 23) { possible = true; break;}

            }



        }
        while(next_permutation(a,a+5) && (!possible));



        possible ? cout<<"Possible\n":cout<<"Impossible\n";
    }

}
