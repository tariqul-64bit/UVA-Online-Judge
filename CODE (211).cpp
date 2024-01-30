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
string position[30];
void dfs(int m,int n)
{
    visit[m][n]=true;
    for(int i=-1; i<2; i++)
        for(int j=-1; j<2; j++)
            if(!(i==0 && j==0) && m+i>=0 && n+j>=0)
            {
                if(position[m+i][n+j]=='1' && !visit[m+i][n+j])
                    dfs(m+i,n+j);
            }
}
int main()
{
    int dimention,m,n,cnt,k,l,tc=1;
    while(cin>>dimention)
    {
        cnt=0;
        clr(visit);
        for(k=0; k<dimention; k++)
            cin>>position[k];
        for(k=0; k<dimention; k++)
            for(l=0; l<dimention; l++)
                if(position[k][l]=='1' && !visit[k][l])
                {
                    cnt++;
                    dfs(k,l);
                }
        cout<<"Image number "<<tc<<" contains "<<cnt<<" war eagles."<<endl;
        tc++;
    }
    return 0;
}

