#include<bits/stdc++.h>
using namespace std;

int a,b;
bool bipartile;
vector<int> grid[220];
int color[259];

int main()
{
    int tc,n;
    while(cin>>tc && tc)
    {
        cin>>n;
        memset(color,-1,sizeof(color));
        bipartile=true;
        for(int i=0; i<tc; i++) grid[i].clear();
        while(n--)
        {
            cin>>a>>b;
            grid[a].push_back(b);
            grid[b].push_back(a);
        }
        queue<int> q;
        q.push(0);
        color[0]=true;
        while(!q.empty() && bipartile)
        {

            int x=q.front();
            q.pop();

            for(int y =0; y<grid[x].size(); y++)
            {
                if(color[grid[x][y]] == -1 )
                {
                    if(color[x] == 1) color[grid[x][y]] =0;
                    else color[grid[x][y]] =1;
                    q.push(grid[x][y]);
                }
                else if(color[x] == color[grid[x][y]])
                {
                    bipartile=false;
                    break;
                }
            }
            if(!bipartile) break;
        }
        if(!bipartile) cout<<"NOT ";
        cout<<"BICOLORABLE.\n";
    }
}
