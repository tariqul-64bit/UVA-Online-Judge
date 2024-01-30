#include<bits/stdc++.h>
using namespace std;
set<int> table;
set<int>::iterator it;
#define MAX 1e8

int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);



    int i,j,q, n,a[1005],b[30],tc=0;


    while( cin>>n && n )
    {
        printf("Case %d:\n",++tc);

        table.clear() ;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

        for(i=0; i<n; i++)  cin>>a[i];
        cin>>q;
        for(i=0; i<q; i++)  cin>>b[i];

        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++) table.insert(a[i]+a[j]);
        }

        /*
cout<<"___\n";
for(it = table.begin() ; it != table.end() ; ++it)  cout<< *it<<endl;

cout<<"___\n";

*/

        for(i=0; i<q; i++)
        {   int ans;
            int diff = MAX;
            int token = b[i];

            for(it = table.begin(); it!=table.end() ; ++it)
            {
                int ss = *it;

                if( abs(ss-token) <  diff )
                {
                    diff = abs(ss-token);
                    ans = ss;

                }
                else { break;}

            }

            printf("Closest sum to %d is %d.\n",b[i],ans);
        }


    }


}
