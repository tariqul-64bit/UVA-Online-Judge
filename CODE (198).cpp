#include<bits/stdc++.h>
using namespace std;

bool visit[30][30];
string grid[30];

void dfs(int r,int c,int h)
{
    visit[r][c]=true;
    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
if(!(i==0 && j==0) && r+i>=0 && c+j>=0 && r+i<h && c+j<h && grid[r+i][c+j]=='1'  && !visit[r+i][c+j] ) dfs(r+i,c+j,h);

}


int main()
{
    int n,counts,tc=0;

    while(cin>>n)
    {
for(int i=0; i<n; i++) cin>>grid[i];
        memset(visit,0,sizeof(visit));
        counts=0;

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                if( !visit[i][j]  && grid[i][j] == '1')
                {
                    counts++;
                    dfs(i,j,n);
                }

            }



        cout<<"Image number "<<++tc<<" contains "<<counts<<" war eagles."<<endl;

    }


}
