#include<bits/stdc++.h>
using namespace std;
map<string,string> table;
map<string,string>::iterator it;


int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int n,m;
cin>>n;
getchar();
for(int i=0;i<n ; i++)
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    table.insert(make_pair(a,b));

}


//for(it = table.begin() ; it != table.end() ; ++it)
   // cout<<it->first <<" "<<it->second<<endl;
    //cout<<"-----"<<endl;


cin>>m;
getchar();
while(m--)
{
    string c;
    getline(cin,c);

    it= table.find(c);

        if(it!=table.end() )cout<<it->second<<endl;

}


}
