#include<bits/stdc++.h>
using namespace std;

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int  limit,elements,bonus;

while(cin>>limit>>elements)
{

    if(limit > 1800) bonus = limit+200;
    else bonus = limit ;


    int dp[20000] ={};
    int depth[110] , reward[110];


    for(int i=0 ; i <elements ; i++)
        cin>>depth[i]>>reward[i];


        for(int i= 0 ; i < elements ; i++)
            for(int j = bonus ; j >= depth[i] ; --j)
            { //i dont understand the following 1 line only the if condition
                if (dp[j - depth[i]] > 0 || j == depth[i])
            dp[j] = max(dp[j], dp[j-depth[i]] + reward[i]);
            }


            int ans = 0  ;

            if( limit >1800 && limit <= 2000)
            {
                for(int i = 0; i<limit ; i++) ans = max(ans , dp[i]);
                for(int i= 2001 ; i <= bonus ; i++) ans = max(ans,dp[i]);
            }
            else
            {
           for (int i = 0 ; i<bonus ; i++ ) ans  = max(ans , dp[i]);
            }

            cout<<ans<<endl;
}



}
