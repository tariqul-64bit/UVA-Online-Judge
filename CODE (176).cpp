#include<bits/stdc++.h>
using namespace std;

int len;
string core;
vector<string> v;
vector<string>::iterator it;


void BackTrack(string taken,int limit)
{

    if(len == limit )
    {
        v.push_back(taken);
        return;
    }


    string adder = "";
    adder+= core[limit];



    for(int i=0; i<= limit ; i++)
    {
        if(i == 0 ) BackTrack(adder+taken,limit+1);
        else if (i == limit) BackTrack(taken+adder,limit+1);
        else

        {
            BackTrack( (taken.substr(0,i) + adder + taken.substr(i,limit) ), limit+1    );
        }


    }



}


int main()

{



  //  freopen("New Text Document.txt","r",stdin);
//  freopen("output.txt","w",stdout);


 int fuse = 0;
    while(cin>>core)
    {
        if(fuse++) cout<<endl;
        v.clear();
        len = core.size();



        string tmp = "";
        tmp+= core[0];


        BackTrack(tmp,1);

       for(int i=0;i<(int)v.size() ; i++)
       cout<<v[i]<<endl;

    }
}

