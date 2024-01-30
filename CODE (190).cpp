#include<bits/stdc++.h>
using namespace std;
vector<string> grid;


void floodfill(int i,int j)
{
    if(grid[i][j]  != ' ' ) return ;

    grid[i][j] = '#';

    floodfill(i+1,j);
    floodfill(i-1,j);
    floodfill(i,j+1);
    floodfill(i,j-1);

}



int main()
{
//ofstream outfile ("input.txt");
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc;
    cin>>tc;
    getchar();
    string z;
    while(getline(cin,z) &&  z.size())
    {
        grid.push_back(z);
    }


    for( int i = 0 ; i<grid.size() ; i++)
    {
        for(int j = 0 ; j<grid[i].size() ; j++)
        {
            if( grid[i][j] == '*')
            {   grid[i][j] = ' ';
                floodfill( i,j);
            }
                    }


    }


    for( int i = 0 ; i<grid.size() ; i++)
        cout<<grid[i]<<endl;



}
