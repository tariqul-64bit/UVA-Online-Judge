#include<bits/stdc++.h>
using namespace std;
map<int,int> table;
map<int,int>::iterator it;

int startwith(int sign)
{
    int result=0;

    for(it=table.begin(); it != table.end() ; ++it)
    {
        if(it->second == sign ) { result++;
        if(sign) sign=0;
        else sign=1;
        }
    }

return result;

}



int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc,n,in;

    cin>>tc;

    while(tc--)
    {
        cin>>n;
        while(n--)
        {
            cin>>in;
            if(in>0) table.insert(make_pair(in,1));
            else table.insert(make_pair((in*(-1)),0));
        }


      //  for(it=table.begin() ; it!= table.end() ; it++)
     //   {
       //     cout<<it->first<<" "<< it->second<<endl;;
    //    }



cout<<max(startwith(1),startwith(0))<<endl;


        table.clear();

    }



}
