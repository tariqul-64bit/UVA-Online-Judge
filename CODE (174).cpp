#include<bits/stdc++.h>
using namespace std;
int z,zz;

int main()
{

    int n;
    while(cin>>n && n)
    {
        queue<int> q;
        for(int i=1; i<=n; i++) q.push(i);

        while( !q.empty() )
        {

             z=q.front();
            q.pop();
             zz=q.front();
            q.push(zz);


        }

cout<<z<<endl;
    }}

