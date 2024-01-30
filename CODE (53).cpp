#include<bits/stdc++.h>
using namespace std;
#define MAX 50099
int ans,target_public,running_public,counts;
int n ;

bool visited[50099];
int  answersheet[50099];
map<int,int> table ;


void dfs(int a )
{



    if(visited[table[a]]    )
    {


        if(counts>ans)
            { ans=counts; target_public = running_public; }
        else if ( counts == ans && running_public < target_public )
            target_public = running_public;

        return ;
    }



    counts++;
    visited[a] = true ;
    dfs(table[a]);




}


int main()
{
    freopen("in.txt ", "r",stdin );
    freopen("out.txt ", "w",stdout );

    int TT;
    cin>>TT;
    for(int tt =1 ; tt<= TT ; tt++)
    {
        ans = -1 ;
        target_public = -1 ;

memset(answersheet , 0 , sizeof(answersheet));

        cin>>n;
    int u,v;
        for(int i=0; i<n; i++)
        { cin>>u>>v;
           table[u] = v ;
        }



        for(int i=1; i<=n; i++)
        {
            counts = 0 ;
            memset(visited,0, sizeof(visited));
            running_public = i;
            dfs(i);


        }

        cout<<"Case "<<tt<<": "<<target_public<<endl;

    }

}


