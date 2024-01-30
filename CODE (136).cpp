#include<bits/stdc++.h>
using namespace std;
vector<int> table;
long long unsigned ans;

long long unsigned powerf(int a,int b)
{
    long long unsigned result=1;
for(int i=0;i<b;i++) result = result*a;

return result;
}

bool comp(int x,int y)
{
    return x>y;
}
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a;
        while(cin>>a && a) table.push_back(a);

        sort(table.begin(),table.end(),comp);
        ans=0;
        int power=1;
        bool inlimit=true;
        for(int i=0; i<table.size(); i++)
        {
            ans+= (2*powerf(table[i],power++));
            if(ans>5000000)
            {
                inlimit=false;
                break;
            }
        }

        if(inlimit) cout<<ans<<endl;
        else cout<<"Too expensive\n";
        table.clear();

    }


}
