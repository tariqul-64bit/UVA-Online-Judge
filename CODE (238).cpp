#include<bits/stdc++.h>
using namespace std;
int main()
{

int T;
cin>>T;
int m,n;
while(T--)
{
    cin>>n>>m;
    int chefinhand=n;
    int round=0;
    while(chefinhand>0)
    {   round++;
        chefinhand = ( chefinhand/m + chefinhand%m; )
        if(chefinhand < 0)  {cout<<"cannot do this"<<endl;break;}
        if(chefinhand == 0)  {cout<<round<<endl;break;}
    }
}

}
