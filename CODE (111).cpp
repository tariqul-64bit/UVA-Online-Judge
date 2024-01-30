//It can be made accepted with properformatting

#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 110;
const int MAX_W = 50090;
int V[MAX_N],W[MAX_N],C[MAX_N][MAX_W];

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;

        int sum=0;

        for(int i=1; i<=n; i++)
        {
            cin>>V[i];
            W[i]=V[i];
            sum+=V[i];
        }


        int MW = sum/2;


        for(int i=0; i<=n; i++) C[i][0] = 0;
        for(int w=0; w<=MW; w++) C[0][w] = 0;


        for(int i=1; i<=n; i++)
            for(int w=1; w<=MW; w++)
            {
                if(W[i]>w) C[i][w]  = C[i-1][w];
                else C[i][w] = max(C[i-1][w], V[i]+C[i-1][w-W[i]]);
            }

        int ans = sum - 2*C[n][MW];

        cout<<ans<<endl;


    }


}

