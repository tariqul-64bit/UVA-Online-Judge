#include<bits/stdc++.h>
using namespace std;
int main()
{

    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    int n;
    cin>>n;
    while(n--)
    {
        string x;
        cin>>x;

        if(x.substr(0,3) == "190")
            cout<<"?\n";

        else if ( x.size() <= 2)
            cout<<"+\n";
else if( x[x.size()-1] == '4')
    cout<<"*\n";
else cout<<"-\n";

    }


}
