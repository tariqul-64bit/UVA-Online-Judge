#include<bits/stdc++.h>
using namespace std;

comp(pair<int,int> a,pair<int,int> b)
{
    return (a.first>b.first && a.second<b.second);
}


int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> > P;
    for(int i=0;i<n;i++)
    {
    int a,b;
    cin>>a>>b;
    P.push_back(make_pair(a,b));
    }
sort(P.begin(),P.end(),comp);

for(int i=0;i<n;i++)
{
pair<int,int> mypair;
mypair= P[i];
cout<<mypair.first<<" "<<mypair.second<<endl;
}
}

