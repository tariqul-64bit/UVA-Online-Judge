#include<bits/stdc++.h>
using namespace std;
int MM;
vector<int> table;


bool comp(int a,int b)
{

    if( a%MM != b%MM  ) {return a%MM < b%MM;}
    else
    {
        if( a%2  && !b%2 ) return a>b;
        else if( !a%2 &&  b%2 ) return b>a;
        else if( a%2  &&  b%2) return a>b;
        else return a<b;





    }


}


int main()
{
freopen("input2.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int N,M;

    while(cin>>N>>MM)
    {   cout<<N<<" "<<MM<<endl;
        if(!N && !MM) break;
        int in;
        for(int i=0; i<N; i++) {cin>>in;table.push_back(in);}
        sort(table.begin(),table.end(),comp);
        for(int i=0; i<N; i++) cout<<table[i]<<endl;
        table.clear();

    }



}
