#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

    unsigned long int total;
    int i;
    map < string, int> d;

    int m,k,n,usd;
    string w;

    cin >> m >> n;
    for(i=0;i<m;i++)
        {
        cin >> w >> usd;
        d[w]=usd;
        }

        for(k=0;k<n;k++){
            total = 0;
        while(cin>>w&&w!=".")
            total = total+d[w];
        cout << total << endl;
    }
    return 0;
}
