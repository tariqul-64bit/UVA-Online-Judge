#include<bits/stdc++.h>
using namespace std;
int arr[105][105];

int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    int tc,tcc;
    cin>>tc;

    for(int tcc=1; tcc<=tc; tcc++)
    {
        int rows,columns;
        long long unsigned cost,current_cost,final_cost=0;
        cin>>rows>>columns>>cost;
        memset(arr,0, sizeof(arr));

        for(int i = 0 ; i<rows; i++ )
            for(int j=0 ; j<columns ; j++)
            {
                cin>>arr[i][j];
                if(j>0)
                    arr[i][j] += arr[i][j-1];
            }

        int maxarea = 0, upleftx,uplefty, downrightx, downrighty ;
        int l,r,row;


        upleftx =  uplefty =  downrightx =  downrighty = 0;

        for(l=0; l<columns; l++)
        {
            upleftx = l;

            for( r=l ; r<columns ; r++)
            {
                int start = 0 ;

                downrightx = r;
                current_cost = 0;

                for(row = 0 ; row<rows ; row++ )
                {
                    if(l>0)
                        current_cost += (arr[row][r] - arr[row][l-1] ) ;
                    else
                        current_cost += arr[row][r];


                if(current_cost > cost ) {
                        while(current_cost > cost) {
                            current_cost -= arr[r][start];
                            if(l > 0) current_cost += arr[start][l-1];
                            uplefty = start;

                            start++;


                        }
                    }



                    downrighty = row ;

                    int current_area = (downrightx - upleftx +1) * ( downrighty - uplefty +1);


                    if(current_area > maxarea && current_cost <= cost )
                    {
                        final_cost = current_cost ;
                        maxarea = current_area ;
                    }
                    else if( current_area == maxarea  && current_cost<final_cost  )
                    {
                        final_cost = current_cost ;
                    }




                    }


            }

        }



        cout<<"Case"<<" #"<<tcc<<": "<<maxarea<<" "<<final_cost<<endl;


    }


    return 0;
}
