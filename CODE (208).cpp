#include<bits/stdc++.h>
using namespace std;

bool visit[110];
vector<int> grid[110];
int top[110],id;


void dfs(int a)
{
    visit[a]= true;

    for(size_t i=0; i<grid[a].size() ; i++) if(!visit[grid[a][i]]) dfs(grid[a][i]);

    top[id--] = a;

}



int main()
{
    int a,b,c,d;
    while(cin>>a>>b &&( a || b))
    {
        for(int i=0; i<a; i++) grid[i].clear();
        memset(visit,0,sizeof(visit));
        for(int i=0; i<b; i++)
        {
            cin>>c>>d;
            grid[--c].push_back(--d);
        }
        id=a-1;
        for(int i=0; i<a; i++)
        {
            if(!visit[i]) dfs(i);
        }


for(int i=0;i<a;i++) printf("%d%c", ++top[i],(i==a-1)?'\n':' ');

    }

}
