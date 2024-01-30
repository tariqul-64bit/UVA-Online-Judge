#include<bits/stdc++.h>
using namespace std;
map<int,int > table;
map<int,int >::iterator it;
int arr[20000];

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc;
    cin>>tc;
    for(int tcc= 1 ; tcc<=tc; tcc++)
    {
        memset(arr,0,sizeof(arr));
        table.clear();
        int n,m,ticket;
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            cin>>m;
            for(int j=1; j<=m; j++)
            {
                cin>>ticket;
                arr[ticket] = n;
                it = table.find(ticket);

                if( it !=  table.end())  it->second +=1;
                else table.insert(make_pair(ticket,1));
            }

        }


    }


}
