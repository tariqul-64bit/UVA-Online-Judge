#include<bits/stdc++.h>
using namespace std;
vector<string> table;

bool c(string x,string y)
{
    string a= x+y;
    string b= y+x;
    return b>a ? true : false;


}


int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);



    int n;
    int i=0;
    while(cin>>n &&n)
    {
        string tmp;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            table.push_back(tmp);
        }


        sort(table.begin(),table.end(),c);
    for(int i=n-1; i>=0; i--) cout<<table[i];
    cout<<endl;
    table.clear();
    }
}
