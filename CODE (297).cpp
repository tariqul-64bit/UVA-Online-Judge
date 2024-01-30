#include<bits/stdc++.h>
using namespace std;



int len;
string core;



string  v[2147483647];
vector<string>::iterator it;
int ind;
int temp_ind,counter;
long long unsigned fact[25] ;




void generates()
{
    fact[0] =1;
    for (long long unsigned i =1;i<=21;i++) fact[i] = i*fact[i-1];

}


void BackTrack(string taken,int limit) {

if(temp_ind >= ind)  return;

    if(len == limit ) {
        temp_ind++;
        v[counter++] = taken;
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
            BackTrack( (taken.substr(0,i) + adder + taken.substr(i,limit) ) , limit+1    );
        }


    }



}


int main()

{

 //   memset(fact,0,sizeof(fact));
//    generates();

 //  for(int i=0;i<=20;i++) cout<<fact[i]<<endl;


   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);


int tc;
cin>>tc;

while(tc--)
{
    counter =0;
 temp_ind = 0;
 v.clear();
cin>>core>>ind;

len = core.size();

if(len>20) break;

string tmp = "";
tmp+= core[0];


BackTrack(tmp,1);

cout<<v[ind-1]<<endl;

}
}

