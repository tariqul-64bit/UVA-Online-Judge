#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-10

int main()
{

double n;
while(cin>>n && n)
{
 double sq = floor(pow(n,1.0/3.0) +EPS );
 double dx = (n-sq*sq*sq)/(3*sq*sq);
 //polynomial expanding to higher degrees see deep reference
 cout<<fixed<<setprecision(4)<<(sq+dx)<<endl;
}
}
