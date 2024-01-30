#include<bits/stdc++.h>
using namespace std;
vector<int> lens;

int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int tc,len;
cin>>tc;
for(int tcc=1; tcc <= tc ;++tcc)
{
cin>>len;
lens.clear();
int sum,si,ei,temp_si,ans;
sum  = ans = 0;
temp_si = 1;
si = 1e5;

for(int i=0;i<len-1;i++) cin>>lens[i];



for(int i=0;i<len-1;i++)
{
    sum += lens[i];
    if(sum<0) sum=0,temp_si=i;

    if(sum >= ans )
    {
    if(sum >ans || (sum == ans && (abs(temp_si-i) > abs(si-ei) )))
       {
           ei = i ;
           si = temp_si;
       }

       ans = sum;
}}

 if (ans > 0)
            printf("The nicest part of route %d is between stops %d and %d\n", tcc, si, ei);
        else
            printf("Route %d has no nice parts\n", tcc);

}


}
