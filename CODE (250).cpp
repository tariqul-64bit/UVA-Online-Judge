#include<bits/stdc++.h>
using namespace std;



int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int n,a[1010];
cin>>n;
while(n--)
{   memset(a,0,sizeof(a));
    int days;
    cin>>days;
    for(int i=0;i<days;i++) {cin>>a[i];  }
    int ans =0;
    for(int i=1;i<days;i++)
    {
        for(int j= i-1; j>=0 ; j--)
        {
            if(a[j] <= a[i]) ans++;

        }


    }

    cout<<ans<<endl;
}




}
