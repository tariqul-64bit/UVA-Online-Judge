#include<bits/stdc++.h>
using namespace std;
vector<int>table;
string ans="";

bool mf1(int a,int b) {return a<b;}
bool mf2(int a,int b) {return a>b;}

int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);



int tc,sum;

cin>>tc;



while(tc--)
{   cout<<"\"";

    cin>>sum;
    table.clear();
    int tmp=0;
    int i=2;

    while(1)
    {
        table.push_back(i);
        tmp+=i;
        i = i+1;
        if( tmp + i > sum) break;


    }


    sort(table.begin() , table.end() , mf2);

    int index =0;


    while(tmp <sum)
    {   table[index++%(table.size())]++;
        tmp++;

    }


    sort(table.begin() , table.end() , mf1);

    for(int i =0 ; i<table.size() ; i++)
    {
        cout<<table[i];
        cout<< ( i == table.size()-1  ? "\"," : " ");
    }
   // if(tc) cout<<endl;



}


cout<<ans;

}
