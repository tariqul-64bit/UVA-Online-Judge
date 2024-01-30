#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<long long > table(1020);
        for(int i=0; i<n; i++)
        {
            int val ;
            scanf("%d",&val);
            table[i]= val;
            table.resize(n);
        }

        sort(table.begin(), table.end() );

        int sum=0,total =1;


        for(int i=1; i<table.size() ; i++)
        {
            if(sum + table[i-1]  < table[i] )
            {
                sum+= table[i-1] ;
                total++;
            }

        }


        cout<<total<<endl;
    }

}
