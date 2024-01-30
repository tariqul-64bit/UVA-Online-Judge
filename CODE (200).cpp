#include<bits/stdc++.h>
using namespace std;

string grid[24];
bool visit[24][24];

int dfs(int r,int c,int n)
{

    visit[r][c] = true;

    for(int i=-1; i<2; i++)   for(int j=-1; j<2; j++)

        {
            if(i==0 && j==0) continue;

            if( (r+i)>= 0 && (c+j)>= 0   && visit[r+i][c+j] == false &&  grid[r+i][c+j] == '1' ) dfs(r+i,c+j,n);
        }
return 0;
}



int main()
{
    int n,counts,tc=0;

    while(cin>>n)
    {

        for(int i=0; i<n; i++) cin>>grid[i];
        memset(visit,false,sizeof (visit));
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
