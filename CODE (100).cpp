#include<bits/stdc++.h>
using namespace std;
int nodecount;
int adj_mat[1000][2];

struct point
{
    int x, y;
};

struct point_filter
{
    int d,x,y,id;
    bool operator<(const point_filter & other) const
    {
        if (d != other.d)
            return d < other.d;
        if (x != other.x)
            return x < other.x;
        if (y != other.y)
            return y < other.y;
    }
};


int dist(point p1, point p2)
{
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}


bool visited[1000];

void dfs(int a)
{


    for (int i = 0 ; i<2 ; i++)
        {
            if(visited[adj_mat[a][i]] == 0 )
            {

                nodecount++;
                visited[adj_mat[a][i]] = 1 ;
                dfs( adj_mat[a][i])  ;

            }
        }


}








int main()
{


    int n ;
    while(cin>>n && n )
    {
        point p[1000];

        for(int i = 0 ; i<n ; i++ )
            cin>>p[i].x>>p[i].y;

        point_filter pwd[1000];


        for(int  i=0; i<n; i++) {
            for(int j=0 ; j<n ; j++)
            {
                if(i == j )
                {
                    pwd[j].d = 1e6 ;
                }
                else
                    pwd[j].d =dist(p[i],p[j]);

                pwd[j].x = p[j].x;
                pwd[j].y = p[j].y;
                pwd[j].id= j;

            }

        sort(pwd,pwd+n);


        adj_mat[i][0] = pwd[0].id;
        adj_mat[i][1] = pwd[1].id;

        }

        nodecount = 0 ;
        memset(visited, 0 ,sizeof(visited));

        dfs(0);

        if(nodecount == n )
            cout<<"All stations are reachable.\n";
        else
            cout<<"There are stations that are unreachable.\n";






    }

}
