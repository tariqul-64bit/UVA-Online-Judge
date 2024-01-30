#include<bits/stdc++.h>
using namespace std;
int counts,sizes;
bool visit[120][120];
string grid[120];



int dfs(int r,int c,int x,int y)
{
    sizes++;
    visit[r][c] = true;

    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
        {
            if( !(i==0 && j==0) && r+i>=0 && c+j >=0 && r+i<x && c+j <y )
            {
                if(grid[r+i][c+j] =='*')
                {
                    visit[r+i][c+j]=true;
                    sizes= 99;
                    return 99;
                }
                if ( !visit[r+i][c+j] && grid[r+i][c+j] =='*') dfs(r+i,c+j,x,y);
            }

        }


}





int main()
{
    int r,c;
    while((cin>>r>>c) && r && c)
    {

        for(int i=0; i<r; i++) cin>>grid[i];
        counts=0;
        memset(visit,0,sizeof(visit));



        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
            {
                if( !visit[i][j])
                    if(grid[i][j] == '*' )
                    {
                        sizes=0;
                        dfs(i,j,r,c);
                        if(sizes == 1) counts++;


                    }

            }
        cout<<counts<<endl;
    }
    return 0;
}
