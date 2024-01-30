#include<bits/stdc++.h>
using namespace std;

bool visit[120][120];
string grid[120];

void dfs(int r,int c,int rx,int ry)
{
    visit[r][c]=true;

    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
            if(!(i==0 && j==0) && r+i>=0 && c+j>=0 && r+i<rx && c+j<ry && grid[r+i][c+j]=='@'  && !visit[r+i][c+j] ) dfs(r+i,c+j,rx,ry);
}


int main()
{
    int rini,cini,counts;

    while(cin>>rini>>cini && rini &&cini)
    {
        for(int i=0; i<rini; i++) cin>>grid[i];

        memset(visit,0,sizeof(visit));
        counts=0;

        for(int si=0; si<rini; si++)
            for(int sj=0; sj<cini; sj++)
            {
                if( !visit[si][sj]  && grid[si][sj] == '@')
                {
                    counts++;
                    dfs(si,sj,rini,cini);
                }

            }



        cout<<counts<<endl;

    }


}
