#include<bits/stdc++.h>
using namespace std;
int alive;
bool visit[120][120];
string grid[120];


void dfs(int r,int c,int rx)
{   if(grid[r][c] == 'x' ) alive=1;
    visit[r][c]=true;

    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
            if(!(i==0 && j==0) && r+i>=0 && c+j>=0 && r+i<rx && c+j<rx  && !visit[r+i][c+j] )
            {
                if(grid[r+i][c+j] == 'x' || grid[r+i][c+j] == '@') dfs(r+i,c+j,rx);
            }
}

    int main()
    {
        int counts,n,nc=0;

        cin>>n;
        while(n--)
        {
            int rc;
            while(cin>>rc)
            {
                for(int i=0; i<rc; i++) cin>>grid[i];

                memset(visit,0,sizeof(visit));
                counts=0;alive=0;

                for(int si=0; si<rc; si++)
                    for(int sj=0; sj<rc; sj++)
                    {   alive=0;
                        if( !visit[si][sj])
                            if(grid[si][sj] == 'x' ||grid[si][sj] == '@' )
                            {

                                dfs(si,sj,rc);

                            }

                        if(alive ==1 ) counts++;
                    }



                printf("Case %d: %d\n",++nc,counts);
            }

        }


    }
