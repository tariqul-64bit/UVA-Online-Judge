#include<bits/stdc++.h>
using namespace std;
#define MAX 50099
int sendfrom[MAX],sendto[MAX],counts,ans;
bool visit[MAX];


int dfs(int a,int b)
{
    if(visit[a] == true)
    {   counts++;
        ans=max(counts,ans);
        counts=0;
    }
    else
    {
        counts++;
        visit[a]=true;
        int x;
        for(int ll=1;ll<=b;ll++) if(sendfrom[ll] == sendto[a]) dfs(ll,b);
    }
}


int main ()
{

int T;
while(T--)
{   ans=0;
    int members,d;
    cin>>members;
    for(int i=1; i<=members; i++) scanf("%d%d",&sendfrom[i],&sendto[i]);

    for(int i=1; i<=members; i++)
    {
        dfs(sendfrom[i],members);
    }

    cout<<ans<<endl;
}

return 0;
}
