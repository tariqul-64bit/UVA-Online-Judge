#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    vector<int> table;
    int n;
    cin>>n;

    int l;
    while(n--)
    {
        cin>>l ;
        table.push_back(l);
    }

    int q;
    cin>>q;

    while(q--)
    {
        int c;
        cin>>c;

        vector<int>::iterator it;
        it =  lower_bound(table.begin(), table.end(), c );
        int ind = it - table.begin();

        if(ind > 0) cout<<table[ind-1];
        else cout<<"X";
        cout<<" ";


        it =  upper_bound(table.begin(), table.end(), c );
        ind = it - table.begin();

        if(ind<table.size()) cout<<table[ind];
        else cout<<"X";
        cout<<endl;


    }



}
