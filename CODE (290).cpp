#include<bits/stdc++.h>
using namespace std;
string m = "AGCT";
int tc,l,mutations;
string a;
set<string> ms;
set<string>::iterator it;



void BackTrack(int index,int change)
{
   // cout<<"index "<<index<<" change "<<change<<endl;
if(index == l ) return;

if(change <= mutations) {ms.insert(a);}

if(change == mutations) return;





for(int i=0;i<4;i++)
{
BackTrack(index+1,change);
    a[index] = m[i];

    BackTrack(index+1,change+1);
}


}




int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin>>tc;
    while(tc--)
    {
        ms.clear();
        cin>>l>>mutations;
        getchar();
        cin>>a;
        string z=a;


        for(int i=0;i<a.size();i++)
 {       a=z;    BackTrack(i,0); }


        cout<<ms.size()<<endl;
        for(it= ms.begin(); it != ms.end() ; ++it)
            cout<<(*it)<<endl;
    }
}
