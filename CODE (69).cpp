#include<bits/stdc++.h>
using namespace std;
vector <int> table;
int main()
{
  //  freopen("input.txt","r",stdin);
 //   freopen("output.txt","w",stdout);

    int tc,tcc;
    cin>>tc;
    for(tcc=1; tcc<=tc; tcc++)
    {

        long long unsigned a,b;
        cin>>a>>b;
        printf("Case #%d:",tcc);
        a= a-b;
        if(!a)
        {
            cout<<" 0\n";
            continue;
        }

        //the following line will save you from the time limit.
        for(int i=1 ; i <= sqrt(a) ; i++)

        {
            if(!(a%i))
            {
                table.push_back(i);

               if(i != (int)a/i) table.push_back(a/i);

            }



        }

        sort(table.begin(),table.end());



        for(int i=0; i<table.size(); i++)
        {


            if(table[i] > b )
            {   cout<<" ";
                cout<<table[i];

            }

        }

        cout<<endl;
        table.clear();
    }


}
