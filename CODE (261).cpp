#include<bits/stdc++.h>
using namespace std;
#define MAX 10000

int main()
{
    int Test,i,j,c[109],dp[10099],W,n;
    cin>>Test;
    while(Test--)
    {
        cin>>W>>n;
        for(i=1; i<=n; i++) cin>>c[i];
        sort(c+1,c+n+1);
        dp[0]=0;
        for(i=1; i<=MAX; i++) dp[i]=MAX;

        for(i=1; i<=n; i++) for(j=MAX; j>=0; j--)
                if(j+c[i]<=MAX &&  dp[j+c[i]] > dp[j]+1)

                    dp[j+c[i]] = dp[j]+1;

        for(i=W; i<=MAX; i++) if(dp[i] != MAX  ) break;
cout<<i<<" "<<dp[i]<<endl;
    }

}
