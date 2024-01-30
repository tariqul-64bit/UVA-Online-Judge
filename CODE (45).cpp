#include<bits/stdc++.h>
using namespace std;
string z;
int rowsize,columnsize;
vector<string> table;
bool visited[100][100] ;
int counts;

void floodfill(int a,int b)
{
    if(b<0 || b >= columnsize || a<0 || a >= rowsize )
        return ;
    if( visited[a][b] || table[a][b] == '1' )
        return ;
    visited[a][b] = true ;
    counts++;
    floodfill(a+1,b);
    floodfill(a-1,b);
    floodfill(a, b+1);
    floodfill(a, b-1);

}



int main()
{

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int tc ;
    cin>>tc;
    getline(cin,z);


    for( int tcc=1 ; tcc <= tc ; tcc++)
    {   table.clear();
        int r,c;
        cin>>r>>c;
        getchar();


        while(getline(cin,z) && z.size() && z[0]!='\n')
        {
            table.push_back(z);
        }
        memset(visited,false,sizeof(visited));

        counts = 0 ;
        rowsize = table.size();
        columnsize = table[0].size();

        floodfill(--r,--c);
/*
        cout<<"Analyze\n";
        cout<<tc<<endl;
        cout<<"Target: "<<r<<c<<endl;
        for(int i = 0  ; i< table.size()  ; i++ )
            cout<<table[i]<<endl;
        cout<<"Analyze\n";
*/

        cout<<counts<<endl;
        if( tc != tcc ) cout<<endl ;



    }



}
