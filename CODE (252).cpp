#include<bits/stdc++.h>
using namespace std;
vector<int> file;

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int n,tmp;
    bool ans;

    while(cin>>n && n)
    {   file.clear();
        ans= true;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            file.push_back(tmp);
        }

        sort(file.begin(),file.end());

          //  cout<<file[n-1];

    if(file[n-1] <1322) ans=false;
    //BECAUSE THERE IS NO CHARGING STATION AT BENTA.

        if(ans)
        {
            for(int i=1; i<file.size(); i++)
            {
                if(file[i]-file[i-1] >200 )
                {
                    ans= false;
                    break;
                }
            }

        }

 ans ?  cout<<"POSSIBLE\n" : cout<<"IMPOSSIBLE\n";

    }
}
