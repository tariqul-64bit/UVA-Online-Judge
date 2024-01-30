#include<bits/stdc++.h>
using namespace std;
map<string,pair<int,int> > table;
map<string,pair<int,int> >::iterator it;





int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
  //  cout<<INT_MAX<<endl;

    int cases,n;
    cin>>cases;
    while(cases--)
    {
        string st;
        int a,b;
        cin>>n;
        while(n--)
        {
            cin>>st>>a>>b;
            table.insert(make_pair(st,make_pair(a,b)));
        }



        cin>>n;
        while(n--)
        {
            cin>>a;

            int cnt=0;
            string ans;

            for(it = table.begin(); it!=table.end() ; it++)
            {


                if(a >= it->second.first && a <= it->second.second)
                {
                    ans  = it->first;
                    cnt++;
                }

                if(cnt == 0 || cnt > 1 )
                {
                    ans = "UNDETERMINED";
                    continue;
                }
            }

            cout<<ans<<endl;

        }


if(cases) cout<<endl;
table.clear();
    }





}
