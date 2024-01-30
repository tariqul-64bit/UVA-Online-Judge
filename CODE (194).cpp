//input is identical to uva 572
#include<bits/stdc++.h>
using namespace std;
int counts=0;
bool visit[120][120];
string grid[120];

void dfs(int r,int c,int rx,int ry)
{   counts++;
    visit[r][c]=true;

    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
            if(!(i==0 && j==0) && r+i>=0 && c+j>=0 && r+i<rx && c+j<ry && grid[r+i][c+j]=='@'  && !visit[r+i][c+j] ) dfs(r+i,c+j,rx,ry);
}


int main()
{
    int rini,cini;

    while(cin>>rini>>cini && rini &&cini)
    {
        for(int i=0; i<rini; i++) cin>>grid[i];

        memset(visit,0,sizeof(visit));

                    dfs(2,1,rini,cini);


                    cout<<"The length of the connected component is\n";

        cout<<counts<<endl;

    }


}



/*

5 5
****@
*@@*@
*@**@
@@@*@
@@**@

Output

The length of the connected component is
8





*/
