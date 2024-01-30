#include <cstring>
#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-3


long long N = 11,coinValue[11] = {5,10,20,50,100,200,500,1000,2000,5000,10000}, memo[15][30099];
float V;

long long ways(int type, int value)
{
    if (value == 0)              return 1;
    if (value < 0 || type == N)  return 0;
    if (memo[type][value] != -1) return memo[type][value];
    return memo[type][value] = ways(type + 1, value) + ways(type, value - coinValue[type]);
}

int main()
{

  //  freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);


    memset(memo, -1, sizeof (memo));

    while (cin>>V && V>EPS)
    {

        long long v = (V+EPS)*100;

        cout << right << setw(6) << setprecision(2) << fixed << V << right << setw(17) << ways(0,v)<< endl;

    }
    return 0;
}
