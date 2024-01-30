#include<bits/stdc++.h>
using namespace std;

int grid[12][12],temp;
bool visit[12][12];


int floodfill(int x,int y,int z)
{
    if(x<0 || y<0 || x>=z || y>=z) return 0;
    visit[x][y]=true;



    int dx[]= {1,0,-1,0};
    int dy[]= {0,1,0,-1};

    for(int k=0; k<4; k++)
    {


        if( visit[x+dx[k]][y+dy[k]] == false)
            {   temp += floodfill(x+dx[k],y+dy[k],z);}
    }




    return grid[x][y];

}




int main()
{
    int rc;
    while(cin>>rc && rc)
    {

        for(int i=0; i<rc; i++)
            for(int j=0; j<rc; j++) cin>>grid[i][j];
        memset(visit,0,sizeof(visit));
        temp=0;
            int ans=floodfill(0,0,rc);
        cout<<ans;
    }

}
