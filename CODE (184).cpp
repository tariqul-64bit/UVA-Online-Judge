#include<bits/stdc++.h>
using namespace std;
map<string,int> store;
map<string,int>::iterator it;

int main()
{
    int n;
    while (cin>>n)
    {
        store.clear();
        string core;
        cin>>core;

        for(int i=0;i<core.size()-n+1;i++)
        {
          string temp = core.substr(i,n);
           it = store.find(temp);

           if(it == store.end())
           {
               store.insert(pair<string,int>(temp,1));
           }

           else it->second++;

        }
int peak=0;
string ans;
for(it = store.begin() ;it !=store.end(); ++it)
{
    if(it->second > peak)
        {
            peak = it->second;
            ans= it->first;

    }
}


cout<<ans<<endl;
    }

}
