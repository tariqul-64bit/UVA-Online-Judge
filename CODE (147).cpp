#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long unsigned xcheck=0;
string a,b;
int x;
cin>>a;
cin>>x;
sort(a.begin(),a.end());
do{xcheck++;if(xcheck==x+1) b=a; } while(next_permutation(a.begin(),a.end()));
cout<<b<<endl;
}
}
