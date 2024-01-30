#include<bits/stdc++.h>
using namespace std;
map<int, set<int> > table ;
bool visit[28];
int counts ;
set<int>::iterator it ;



void floodfill(int a)
{
    stack<int> s;
    s.push(a);
    while(!s.empty())
    {
        int w = s.top();
        s.pop();
        visit[w] = true;

        for( it = table[w].begin() ; it!= table[w].end() ; ++it)
        {
            if (visit[*it] == true )                continue;
            s.push(*it);
        }
    }
}

int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    string temp ;
    getchar();
    getline(cin,temp);

    for(int tcc = 1  ;tcc <= tc ; tcc++)
    {
        int a ;

        getline(cin,temp);
        a = (int) temp[0] - 65 ;
        cout<<a<<endl;
        table.clear();
        memset(visit, 0,sizeof(visit));
        while(getline(cin,temp) && temp.size())
        {
            int u = temp[0] - 65 ;
            int v = temp[1] - 65 ;
            table[u].insert(v);
            table[v].insert(u);
        }


        for(int i = 0 ; i <= a; i++)
        {
            if( visit[i] == false  )
            {
                counts++;
                floodfill(i);
            }
        }
        cout<<counts;
        if( tcc != tc) cout<<endl ;
    }
}
