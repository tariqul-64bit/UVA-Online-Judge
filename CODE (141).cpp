#include<bits/stdc++.h>
using namespace std;

multiset<int> ms;
multiset<int>::iterator it;

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int n,nn,nnn;
    long long ans;
    while(cin>>n && n)
    {   ms.clear();
        ans=0;
        while(n--)
        {
            cin>>nn;
            while(nn--)
            {
                cin>>nnn ;
                ms.insert(nnn);
            }
            int low,high;
            it = ms.begin();
            low= *it;
            ms.erase(it);
            it=ms.end();
            --it;
            high = *it;
            ms.erase(it);
            ans+= (high-low);
    //cout<<"setlist\n";
      //      for(it = ms.begin() ; it != ms.end(); ++it)
        //            cout<<*it<<endl;


        }

    cout<<ans<<endl;
    }


}
