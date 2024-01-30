#include<bits/stdc++.h>
using namespace std;
vector<string> v;
vector<string>::iterator it;
string core;
int len=0;

void BackTrack(string taken, int limit)
{

    cout<<taken<<endl;

    if(limit == len )
    {
        v.push_back(taken);
        return;
    }

    string adder = "";
    adder += core[limit];




    for(int i=0; i<= limit ; i++)
    {
        string pp= "";

        if(i == 0) pp = pp+adder+taken;
        else if(i == limit) pp = pp+adder+taken;
        else pp= pp+taken.substr(0,i) + adder + taken.substr(i,limit) ;

        BackTrack(pp, limit+1);
    }



}



int main()
{

    cin>>core;
    int len = core.size();
    string s= "";
    s += core[0];

    cout<<s<<endl;

    BackTrack(s,1);

    // cout<< v.size();

}
