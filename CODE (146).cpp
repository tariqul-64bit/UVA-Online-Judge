#include<bits/stdc++.h>
using namespace std;
vector<string>::iterator it;





int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    string core;

    while(cin>>core)
    {
        string core2=core;
        vector<string> table;


        table.push_back(core);
        for(int i=0; i<10; i++)
        {
            next_permutation(core.begin(),core.end());
            prev_permutation(core2.begin(),core2.end());
            table.push_back(core);
            table.push_back(core2);

        }

        sort(table.begin(),table.end());
        int ad=0;
        string ans;

        for(int i=0;i<21;i++){
                int dis= 2e9;
        for(int j=0;j<table[i].size()-1;j++)
        {
            dis = min( dis, abs(table[i][j]-table[i][j+1]));
        }

        if(dis>ad) {ans=table[i]; ad=dis; }

        }
    cout<<ans<<ad<<endl;
    }


}
