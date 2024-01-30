#include<bits/stdc++.h>
using namespace std;
int t,n;
int tl[15];
bool temp[15];

set<vector<int> > ms;
set<vector<int> >::reverse_iterator it;


int cmp(int x,int y)
{
    return x>y;
}


void BackTrack(int index)

{

    if(index == n )
    {

        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(temp[i]) sum +=tl[i];
        }
        bool pfirst=true;
        if(sum==t)
        {
            vector<int> vv;

            for(int i=0; i<n; i++)
                if(temp[i])
                {
                    vv.push_back(tl[i]);
                }

            ms.insert(vv);
        }

        return;
    }


    temp[index] = true;
    BackTrack(index+1);
    temp[index] = false;
    BackTrack(index+1);


}





int main()
{
   // freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    while(cin>>t>>n && ( t&&n))
    {

        ms.clear();
        memset(tl,0,sizeof(tl));
        memset(temp,0,sizeof(temp));
        for(int i=0; i<n; i++)
        {
            cin>>tl[i];
        }

        sort(tl,tl+n,cmp);


        cout<<"Sums of "<<t<<":\n";
        BackTrack(0);

        if(ms.empty()) {cout<<"NONE\n";continue;}

        for(it=ms.rbegin() ;it!=ms.rend() ;++it)
            {
                vector<int> a = (*it);
                for(int ss=0;ss<a.size() ; ss++)
                    cout<<a[ss]<<(ss== a.size()-1 ? "":"+" );
                    cout<<endl;

            }







    }

}
