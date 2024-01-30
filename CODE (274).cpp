#include <bits/stdc++.h>
using namespace std;

int main()
{

   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    while (cin >> n && n )
    {
        multiset<int> a,b;
        a.clear();
        b.clear();
        for (int i = 0; i < n; ++i)
        {
            int aa,bb;
            cin>>aa>>bb;
            a.insert(aa);
            b.insert(bb);
        }



 cout<< ( a==b ? "YES\n": "NO\n" );
    }

}
