#include<bits/stdc++.h>
using namespace std;

int counts;
string grid[120];
bool visit[120][120];

void dfs(int x,int y,int r,int c)
{
    visit[x][y]==true;

    int i,j;
    for(i=-1; i<2; i++)
        for(j=-1; j<2; j++)
        {
            if( i==0 && j==0) continue;
            if( x+i>=0 && y+j>=0 && x+i<c && y+j<r && !visit[x+i][y+j] && (grid[x+i][y+j]=='@')) dfs(x+i,y+j,r,c);
        }


}



int main()
{
    int r,c,i,j;

    while(cin>>r>>c && r && c)
    {

        for(i=0; i<r; i++) cin>>grid[i];
        counts=0;
        memset(visit,0,sizeof(visit));

        for(i=0; i<r; i++)
            for(j=0; j<c; i++)
            {
                if  (!visit[i][j] && grid[i][j]== '@')
                {
                    counts++;
                    dfs(i,j,r,c);
                }
            }

        cout<<counts<<endl;
    }

}
