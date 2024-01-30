#include<bits/stdc++.h>
using namespace std;
int N=5,target;
int val[5]= {1,5,10,25,50};
long long  memo[7][30099];


long long ans(int type, int value)
{

if(value == 0 ) return 1;
else if(value < 0 || type == N) return 0;
else if( memo[type][value] != -1 ) return memo[type][value];
else return memo[type][value] = ans(type+1 , value) + ans(type , value - val[type]);


}






int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);



memset(memo , -1 , sizeof(memo));

while(cin>>target)
{

    long long answer = ans(0,target);

if(answer==1) cout <<"There is only 1 way to produce "<<target<<" cents change.\n";
    else
cout<<"There are "<<answer<<" ways to produce "<<target<<" cents change.\n";

}



}
