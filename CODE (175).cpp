#include<bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int a[30],b[30];


    int n;

    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        int ans=0,cnt=0;

        for(int i=0; i<n; i++)
        {
            cnt=0;
            for(int j=i; j<n; j++)
            {
                if(b[i] == a[j])
                {
                    int tmp = a[j];
                    for(int k=j-1; k>=i ; k--)
                    {
                        a[k+1] = a[k] ;
                        a[i] = tmp;
                    }

                    ans+=cnt;
                    break;
                }
                else ++cnt;
            }
        }

        cout<<ans<<endl;
    }

}
