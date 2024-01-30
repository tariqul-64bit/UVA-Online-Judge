#include<bits/stdc++.h>
using namespace std;

vector<int> table[220];
int color[259];
bool visited[220];
bool race ;
int ans ;

int bipartile_check(int i)
{
    queue<int> q ;
    q.push(i);
    color[i] = true ;
    while(!q.empty())
    {
    q.pop();
    for(int ii = 0 ; ii<table[i].size(); ii++)
    {
        if(color[i]  == true) color[table[i][ii] = false ;
        else color[table[i][ii]] = true ;


    }

    }


}




int main()
{
int tc;
cin>>tc;
while(tc--)
{

    int v,e;
    cin>>v>>e;
    memset(visited, false , sizeof(visited)) ;
    race = false ;
    ans = 0 ;
    for(int i = 0 ; i<table.size() ; i++)
    {
        if(!visited[i])
            {

            ans += bipartile_check(i);
        }

    }

if(race) cout<<"-1"<<endl ;
else cout<<ans<<endl;

}

}
