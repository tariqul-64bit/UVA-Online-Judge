//accepted rank 171
#include<bits/stdc++.h>
using namespace std;
double a[10000001];

int main()
{
    a[1]=1;
    for(int i=2; i<=10000001; i++)
    {
        a[i] = a[i-1] + log10(i);
    }

    int t,query;
    cin>>t;
    while(t--) {cin>>query;
                cout<< (int)a[query] <<endl; }

                return 0;
}
