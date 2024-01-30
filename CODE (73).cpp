#include<bits/stdc++.h>
using namespace std;
map<int,int> table;
map<int,int>::iterator it;
bool ans;

int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int taken,catagories,tmp;
    while(cin>>taken && taken)
    {   cin>>catagories;
        ans = true;
        table.clear();
        for(int i=0; i<taken; i++)
        {
            cin>>tmp;
            table.insert(make_pair(tmp,0));
        }
        int courses, need2take;
        for(int i=0;i<catagories;i++)
        {
            cin>>courses>>need2take;
            while(courses--)
            {
            cin>>tmp;
            it = table.find(tmp);
            if(it != table.end()) need2take--;
            }

            if(need2take>0) ans = false;
        }
    ans ? cout<<"yes"<<endl : cout<<"no"<<endl;

    }

}
