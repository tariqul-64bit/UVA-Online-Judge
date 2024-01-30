#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int tcc=0;



int main()
{
    freopen("input.txt","r",stdin);

    int n,q;
    while(cin>>n>>q && n && q)
    {
        cout<<"CASE# "<<++tcc<<":\n";
        v.clear();

        int a;
        while(n--)
        {
            cin>>a;
            v.push_back(a);

        }

        sort(v.begin(), v.end());

        while(q--)

        {
            int query;
            vector<int>:: iterator it;
            cin>>query;
            it = lower_bound(v.begin(), v.end(),query);
            int ind = it- v.begin();

            if( v[ ind ] == query) cout<<query<<" found at "<< ind+1 <<endl;
            else cout<<query<<" not found\n";
        }

    }



}
