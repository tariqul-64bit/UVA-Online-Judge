#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define PB push_back
#define pi acos(-1.0)
#define eps 1e-9

bool visit[30][30];
string grid[30];
void dfs(int r,int c)
{
    visit[r][c]=true;
    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
            if(!(i==0 && j==0) && r+i>=0 && c+j>=0)
            {
                if(grid[r+i][c+j]=='1' && !visit[r+i][c+j])
                    dfs(r+i,c+j);
            }
}
int main()
{
    int n,m,n,counts,i,j,tc=1;
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
                    dfs(i,j);
                }
        cout<<"Image number "<<tc<<" contains "<<counts<<" war eagles."<<endl;
        tc++;
    }
    return 0;
}

