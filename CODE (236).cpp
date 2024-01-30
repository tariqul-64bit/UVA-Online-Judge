#include<bits/stdc++.h>
using namespace std;


bool visit[30][30];
string grid[30];

void dfs(int r,int c,int h)
{
    visit[r][c]=true;
    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
            if(!(i==0 && j==0) && r+i>=0 && c+j>=0 && r+i<h && c+j<h)
            {
                if(grid[r+i][c+j]=='1' && !visit[r+i][c+j])
                    dfs(r+i,c+j,h);
            }
}
int main()
{
    int n,m,counts,i,j,tc=1;
    while(cin>>n)
    {
        counts=0;
        memset(visit,0,sizeof(visit));

        for(i=0; i<n; i++)
            cin>>grid[i];
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(grid[i][j]=='1' && !visit[i][j])
                {
                    counts++;
                    dfs(i,j,n);
                }
        cout<<"Image number "<<tc<<" contains "<<counts<<" war eagles."<<endl;
        tc++;
    }
    return 0;
}

