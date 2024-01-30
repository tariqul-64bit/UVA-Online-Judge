#include<bits/stdc++.h>
using namespace std;
int arr[105][105];
bool visited[105][105];
bool previously_inserted[105][105];

int r,c,m,n;
queue<pair<int,int> > q;





bool valid (int a, int b)
{
    if(visited[a][b] == true)
    {
        return false;
    }
    if( (a<0) || (b<0) || (a >= c) || (b >= r) )
    {
        return  false ;
    }

    return true;
}





int main()
{


freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);



    int tc;
    cin>>tc;
    for(int tcc= 0 ; tcc<tc ; tcc++)
    {


        cin>>r>>c>>m>>n;
        memset(arr,0,sizeof(arr));
        memset(visited,false,sizeof(visited));
        memset(previously_inserted,false,sizeof(previously_inserted));
        int w;
        cin>>w;
        int x,y;
        for(int i = 0 ; i<w; i++)
        {
            cin>>x>>y;
            visited[x][y]=true;
        }


        pair<int,int> ii = make_pair(0,0);
        q.push(ii);
        previously_inserted[0][0] = true;

        while(!q.empty())
        {
            ii = q.front();
            int xx= ii.first;
            int yy= ii.second;
            q.pop();

            int dx[] = { m,-m, m,-m, n, -n, n, -n};
            int dy[] = { n, n,-n, -n, m,  m, -m, -m};


            for(int i= 0 ; i<8; i++)
            {



                if(valid(xx+dx[i],yy+dy[i]) )
                {


                    if(previously_inserted[xx+dx[i]][yy+dy[i]]  == false )
                        {
                        q.push(make_pair(xx+dx[i],yy+dy[i]));
                        previously_inserted[xx+dx[i]][yy+dy[i]]  = true;
                        }


                    arr[xx][yy]++ ;
                    arr[xx+dx[i]][yy+dy[i]]++;

                }


            }

            visited[xx][yy] = true ;


        }



        int odd, even ;
        odd = even = 0 ;

        for(int i = 0 ; i<r; i++)
        {
            for(int j= 0 ; j<c; j++)
            {
  //              cout<<arr[i][j]<<" ";

                if( arr[i][j]  )
                {
                    if ( (arr[i][j]) % 2 )
                        odd++;
                    else
                        even++;
                }


            }
    //        cout<<endl ;
        }


        cout<<"Case "<<tcc+1<<": "<<even<<" "<<odd<<endl;


    }


}
