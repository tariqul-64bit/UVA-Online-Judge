#include<bits/stdc++.h>
using namespace std;
vector<int> table;
vector<int>::iterator it;
int fa,fb;


int main()
{

//    freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int n;
    while(cin>>n)
    {   int diff = 999999999;
        int a;
        table.clear();
        while(n--)
        {
            cin>>a;
            table.push_back(a);
        }

        sort(table.begin(), table.end());
        int exactsum;
        cin>>exactsum;

        for(int i=0;i<table.size() && table[i]<(exactsum/2 + 1) ; i++ )
        {

            int a= table[i];

            int b = exactsum - a;

            if(binary_search(table.begin() , table.end() ,  b))
               {
                   if( abs(b-a) < diff )
                   {
                       fa = a;
                       fb = b;
                       diff = abs(b-a);

                   }


               }



        }


         printf("Peter should buy books whose prices are %d and %d.\n\n",fa,fb);

    }


}
