#include<bits/stdc++.h>
using namespace std;
int tc,maxi=0;
pair<int,int> save;
deque<pair<int,int> > table;
deque<pair<int,int> >::iterator it;




int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    cin>>tc;
    while(tc--)
    {
        int n,m,p;
        cin>>n>>m;

        for(int i=0; i<n; i++) {
            cin>>p;

             if(i==m) table.push_back(make_pair(p,1));
            else table.push_back(make_pair(p,0));

        }
int cnt=0;

        {
       // save = table.front();
       // table.pop_front();
       // table.push_back(save);

        for(it =table.begin(); it !=table.end();++it)
        {
             save = *it;
             maxi = max(maxi, save.first);
        }

        for(it =table.begin(); it !=table.end();++it)
        {
            save = *it;
            if ( save.first == maxi)
                it.

        }


        }


 cout<<maxi<<endl;

    }


}
