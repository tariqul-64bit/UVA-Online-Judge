#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int tc,cases=0;
    cin>>tc;
    while(tc--)
    {
        int  n;
        cin>>n;
        int sum=0;
        int ans=0;
        int endd=0;
        int start=65000,temp=1;
        int x;
        for(int i =2; i <=n ; i++)
        {
            cin>>x;
            sum +=x;
            if(sum < 0)
            {
                sum=0;
                temp = i;
            }
            if(sum == ans && endd-start < i-temp )
            {   endd= i;
                start = temp;
            }

            if (sum > ans )
            {
                start= temp;
                endd = i;
                ans = sum;
        }


        }

        if(ans>0)
        printf("The nicest part of route %d is between stops %d and %d\n",++cases,start,endd);
        else printf("Route %d has no nice parts\n",++cases);




    }
}
