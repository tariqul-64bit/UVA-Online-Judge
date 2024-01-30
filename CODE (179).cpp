#include<bits/stdc++.h>
using namespace std;
vector<int> table;

int main()
{
    int ans=0,oe=0,in;
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

while(cin>>in)
{
    ++oe;
    table.push_back(in);
    sort(table.begin(),table.end());

    if(oe%2)
    {
            cout<<table[(int)(table.size())/2]<<endl;
    }

    else
    {
        int ida = table.size()/2 ;
        int idb = ida-1;
      //  cout<<ida<<idb;
        int sum = (int) (((table[ida]+table[idb])/2));
        cout<<sum<<endl;

    }


}



}
