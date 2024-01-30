//unaccepted  . No need to try



#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int tcc=0;



int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
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
            cin>>query;
            int ii=0;
            while(v[ii] < query)
            {
                ii++;
                continue;
            }


            if(v[ii] == query)
            {
                cout<<query<<" found at "<<ii+1<<endl;

            }
            if(v[ii] > query)
            {
                cout<<query<<" not found\n";

            }

        }


    }

}


