#include<bits/stdc++.h>
using namespace std;
int visit[30][30];
string grid[30];
int ans,counter;


void dfs(int r,int c,int rx,int ry)
{
    visit[r][c] = true;
    counter++;
    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
            if(!(i==0 && j==0) && r+i>=0 && c+j>=0 && r+i<rx && c+j<rx  && !visit[r+i][c+j] )
            {
                if(grid[r+i][c+j] == land) dfs(r+i,c+j,rx,ry);
            }
}

    int main()
    {
        int rini,cini;
        char land;

        while(cin>>rini>>cini)
        {

                for(int si=0; si<rc; si++) cin>>grid[si];
                memset(visit,0,sizeof(visit));
                int kingx,kingy,king_continent_size=0;
                cin>>kingx>>kingy;
                counter=0;
                land= grid[kingx][kingy];
                visit[kingx][kingy] == true;
                dfs(kingx,kingy,rini,cini);


counter=0;
                for(int si=0; si<rini; si++)
                    for(int sj=0; sj<cini; sj++)
                    {
                        if( !visit[si][sj])
                            if(grid[si][sj] == land )
                            {

                                dfs(si,sj,rini,cini);
                                ans=max(ans,counter);

                            }


                    }



                printf("Case %d\n",counter);
            }

        }


    }
