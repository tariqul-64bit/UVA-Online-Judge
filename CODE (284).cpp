#include<bits/stdc++.h>
using namespace std;
#define INFINITY 1000



void path(int i,int j,vector<vector<int> > q)
{
    if(i!=j) path(i,q[i][j],q);
    printf(" %d",j);
}

int main()
{
    cout<<INFINITY<<endl;

    int V,E;
    cin>>V>>E;

    vector<vector<int> > parent(V, vector<int>(V));
    vector<vector<int> > matrix(V, vector<int>(V,INFINITY));



//matrix initialization
    for(int i=0; i<V; i++) matrix[i][i]=0;

    for(int i=0; i<E; i++)
    {
        int a,b;
        cin>>a>>b;
        matrix[a][b]=1;
        matrix[b][a]=1;

    }

//parent initialization

    for(int i=0; i<V; i++)
        for(int j=0; j<V; j++) parent[i][j] = i;


//floyd warshall starts

    for(int k=0; k<V; k++)
        for(int i=0; i<V; i++)
            for(int j=0; j<V; j++)
                if(matrix[i][j] > matrix[i][k] + matrix[k][j])
                {
                    matrix[i][j]  = matrix[i][k] + matrix[k][j];
                    parent[i][j] = parent[k][j];
                }



    path(1,4,parent);
//it will print like 1---5---4
//sample input
/*6

6
2 3
3 4
4 5
5 2
5 1
0 1
   */
}
