#include<bits/stdc++.h>
using namespace std;
vector<pair< int,int> > table(150);
vector<string> world ;
bool visited[10000][10000];
int counts;
int r,c;

bool myf( pair <int,int> aa , pair<int,int> bb)
{
    if(aa.second != bb.second ) return aa.second> bb.second;
    return aa.first<bb.first ;


}


void floodfill ( int a , int b , char character)
{


    if( a<0 || b<0 || a>=r || b>=c ) return ;
    if( world[a][b] != character || visited[a][b] ) return ;


    visited[a][b] = true;

    floodfill(a+1,b,character);
    floodfill(a-1,b,character);
    floodfill(a,b+1,character);
    floodfill(a,b-1,character);


}


int main()
{

    int tc;
    cin>>tc;

    for( int tcc= 1  ; tcc<=tc ; tcc++)
    {
        //memset(table,0,sizeof(table));
        memset(visited,0,sizeof(visited)) ;
        world.clear();
        for(int i = 0 ; i<150 ; i ++) table[i].second = 0 ;
        cin>>r>>c;
        string temp ;
        getchar();
        for(int i = 0 ; i<r ; i++)
        {
            getline(cin,temp);
            world.push_back(temp);
        }

        for(int i = 0 ; i<r ; i++)
            for(int j = 0 ; j<c ; j++)
            {

                if( visited[i][j] == false )
                {

                    table[world[i][j]].second++;
                    table[world[i][j]].first = world[i][j];
                    floodfill(i,j,world[i][j]);
                }

            }


        sort(table.begin() , table.end(),myf);   cout<<"World #"<<tcc<<endl;

        for(int i = 0 ; i<150 ; i++ )
        {
            if(table[i].second != 0 ) cout<<(char)table[i].first<<": "<<table[i].second<<endl;}



    }

}
