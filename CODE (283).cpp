#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int test=0;
int grid[105][105];
int vertex[105];

int number_of_vertex();


void find_sum_and_print()
{
    int answer =0;
    int v= number_of_vertex();

    for(int i=1; i<101; i++)
        for(int j=1; j<101; j++)
        {
            if(grid[i][j] != 1000)
                answer += grid[i][j];
        }

double print=(double)answer/(v*(v-1));

printf("Case %d: ",test);
printf("average length between pages = %.3f clicks\n",print);



}



void initialize()
{
    memset(vertex,0,sizeof(vertex));

    for(int i=0; i<101; i++)
        for(int j=0; j<101; j++)
        {
            grid[i][j]=1000;
            if(i==j) grid[i][j] = 0;
        }

}

int number_of_vertex()
{
    int v=0;
    for(int i=0; i<101; i++)
        if(vertex[i] == 1)  v = v+1;
    return v;
}



int floyd_warshall()
{
    int i,j,k,v;
    v=number_of_vertex();

    for(int k=1; k<=101; k++)
        for(int i=1; i<=101; i++)
            for(int j=1; j<=101; j++)
            { if (vertex[i] == 0 || vertex[j] == 0 || vertex[k] == 0 ) continue;
            //line above i dont understand, i only used it unintentionally "try and test " type
            //and it worked.
                if(grid[i][j] > grid[i][k] + grid[k][j] )
                {
                    grid[i][j] = grid[i][k] + grid[k][j];
                }
            }



}



int main()
{
    int counter=0;
    int a,b;
    initialize();
    while(cin>>a>>b)
    {
        if(a && b)
        {
            vertex[a]=1;
            vertex[b]=1;
            grid[a][b] = 1;
            counter++;
        }
        if(( a==0 && b ==0 ) && (counter !=0) )
        {
            counter=0;
            test++;
            floyd_warshall();
/*
            for(int i=0; i<10; i++)
            {
                for(int j=0; j<10; j++)
                {
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }

*/

            find_sum_and_print();
            initialize();
        }

    }



    return 0;
}
