#include<bits/stdc++.h>
using namespace std;
string num ="-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string alp ="-012345678922233344455566677778889999";




int main()
{

    string take;
    while(cin>>take)
    {
    for(int i=0;i<take.size();i++)
    for(int j=0;j<num.size();j++) if(take[i]==num[j]) cout<<alp[j];

    cout<<endl;

    }

}
