//i didnt read the problem description properly . Sorry .

#include<bits/stdc++.h>
using namespace std;
int nodes,edges;
int node[120];
int maxx[120];
vector<vector<int> > table(120);
int ans,finalnode;
queue<int> q;


void bfs(int a)
{
    q.push(a);

    while(!q.empty())
    {
        int pop = q.front();
        q.pop();
        int tempmax_value = 0 ;
        int tempmax_node;

        if( table[pop].size() == 0 )
            finalnode = pop;
        else
        {
            for(int i = 0 ; i<table[pop].size() ; i++ )
            {

                if(node[table[pop][i]] > tempmax_value )
                {
                    tempmax_value = node[table[pop][i]];
                    tempmax_node = table[pop][i];
                }

            }
            ans += tempmax_value ;
            q.push(tempmax_node);

        }
    }

}





int main()
{

    int tc;
    cin>>tc;

    for(int tcc=1 ;  tcc <= tc ; tcc++)
    {
        cin>>nodes>>edges;
        memset(node, 0,sizeof(node));
        memset(maxx,0,sizeof(maxx));

        for(int i = 0 ; i<table.size() ; i++)

        {
            table[i].erase(table[i].begin(), table[i].end());
        }

        ans = finalnode = 0 ;
        for(int i = 0 ; i<nodes ; i++)
            cin>>node[i];
        for(int i = 0 ; i<edges ; i++)
        {
            int tn,te;
            cin>> tn>>te ;
            table[tn].push_back(te);
        }

        bfs(0);
        cout<<"Case "<<tcc<<": "<<ans<<" "<<finalnode<<endl;

        while( !q.empty() )
            q.pop();





    }


}

