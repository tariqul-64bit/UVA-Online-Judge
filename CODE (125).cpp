#include<bits/stdc++.h>
using namespace std;
priority_queue< pair<int, pair<int,int> >, vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > pq;
//this is the master of all lines whhich makes this problem solvable in this easier fashion
pair<int, pair<int,int> > p;

int main()
{
    freopen("input.txt","r",stdin);
//freopen("input.txt","w",stdout);
    char rg[1000];

    while( scanf("%s",&rg) && strlen(rg) >1 )
    {
        int a,b,c;
        cin>>b>>c;
        a = c;
               pq.push(make_pair(a,make_pair(b,c)));
    }


           int counter;
           cin>>counter;


//while(pq.size()) { p=pq.top(); pq.pop(); cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl; }


    while(counter--)
    {
        p = pq.top();
        pq.pop();
        cout<< p.second.first<<endl;
        p.first += p.second.second;
        pq.push(p);
    }



}
