#include<bits/stdc++.h>
using namespace std;
vector<string> original;
vector<pair<string,pair<int,pair<int,int> > > > table;


bool comp(pair<string,pair<int,pair<int,int> > > a, pair<string,pair<int,pair<int,int> > > b )
{

if(a.second.second.second != b.second.second.second)
    return a.second.second.second > b.second.second.second;
else {
if(a.second.second.first != b.second.second.first)
    return a.second.second.first > b.second.second.first;

    else
    {
if(a.second.first != b.second.first)
    return a.second.first > b.second.first;


    }
}

}

int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int people;
cin>>people;
getchar();
for(int i=0;i<people;i++)
{
    char name[1000];
    char temp[1000];
    int date,month,year;
    gets(temp);
    sscanf(temp,"%s %d %d %d",&name,&date,&month,&year);

    table.push_back(make_pair(name,make_pair(date,make_pair(month,year))));
    sort(table.begin(),table.end(),comp);

}

cout<<table[0].first<<endl;
    cout<<table[table.size()-1].first<<endl;


}
