#include<bits/stdc++.h>
#define INF 1e9

using namespace std;
int main()
{   cout<<hypot(3,4);
    int n,m;
    while(cin>>n>>m)
    {
        double ngap=10000/(double)n;
        double mgap=10000/(double)(m+n);
        double ngap_list[1005],mgap_list[2010];
        for(int i=0; i<n; i++) ngap_list[i] = (double)i*ngap;
        for(int i=0; i< (n+m); i++) mgap_list[i] = (double)i*mgap;

        double ans=0;

        for(int i=0; i<n; i++)
        {    double penalty=INF;

            for(int j=0; j<(m+n); j++)
            {
                penalty=min(penalty,fabs(ngap_list[i] - mgap_list[j]));
            }

            ans+=penalty;
        }
            printf("%0.4lf\n",ans);
    }
return 0;
}
