#include<bits/stdc++.h>
using namespace std;
int rows,columns;
int upleftx,uplefty,downrightx,downrighty;
long long maxarea,subarea,subarea_size;
int i,j,l,r,row;
int arr[160][160],brr[160][160];


int main()
{
     freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);

    int tc;
    cin>>tc;

    while(tc--)
    {
        maxarea = INT_MIN;
        int n;
        cin>>n;
        rows = columns = n;



        for(i = 0 ; i<rows ; i++)
            for( j = 0 ; j< columns ; j++)
            {
                cin>>arr[i][j];
                arr[i+rows][j] = arr[i][j+rows] = arr[i+rows][j+rows] = arr[i][j];
            }






        for(int swapper = 0 ; swapper<n ; swapper++)
        {


            for(i = 0 ; i<rows ; i++)
                for( j = 0 ; j< columns ; j++)
                {
                    brr[i][j] =arr[i+swapper][j+swapper];
                    if(j>0) brr[i][j] += brr[i][j-1];
                }






//max 2d range sum the sum is in the maxarea;

            for( l = 0 ; l <rows ; l++)
                for( r = l ; r<rows; r++)
                {
                    subarea = 0;
                    for(row = 0 ; row < rows ; row++ )
                    {
                        if(l>0) subarea += brr[row][r] - brr[row][l-1];
                        else subarea += brr[row][r] ;



                        if(subarea >= maxarea  )
                        {
                            maxarea = subarea;
                        }

                        if(subarea < 0  ) subarea= 0;

                    }
                }

        }



        for(int swapper = 0 ; swapper<n ; swapper++)
        {

            for(i = 0 ; i<rows ; i++)
                for( j = 0 ; j< columns ; j++)
                {
                    brr[i][j] =arr[i+swapper][j];

                }


                for(i = 0 ; i<rows ; i++)
                for( j = 0 ; j< columns ; j++)
                {
                   if(j>0) brr[i][j] += brr[i][j-1];

                }

//max 2d range sum the sum is in the maxarea;

            for( l = 0 ; l <rows ; l++)
                for( r = l ; r<rows; r++)
                {
                    subarea = 0;
                    for(row = 0 ; row < rows ; row++ )
                    {
                        if(l>0) subarea += brr[row][r] - brr[row][l-1];
                        else subarea += brr[row][r] ;



                        if(subarea >= maxarea  )
                        {
                            maxarea = subarea;
                        }

                        if(subarea < 0  ) subarea= 0;

                    }
                }

        }



        for(int swapper = 0 ; swapper<n ; swapper++)
        {


            for(i = 0 ; i<rows ; i++)
                for( j = 0 ; j< columns ; j++)
                {
                    brr[i][j] =arr[i][j+swapper];


                }


for(i = 0 ; i<rows ; i++)
                for( j = 0 ; j< columns ; j++)
                {
                   if(j>0) brr[i][j] += brr[i][j-1];

                }


//max 2d range sum the sum is in the maxarea;

            for( l = 0 ; l <rows ; l++)
                for( r = l ; r<rows; r++)
                {
                    subarea = 0;
                    for(row = 0 ; row < rows ; row++ )
                    {
                        if(l>0) subarea += brr[row][r] - brr[row][l-1];
                        else subarea += brr[row][r] ;



                        if(subarea >= maxarea  )
                        {
                            maxarea = subarea;
                        }

                        if(subarea < 0  ) subarea= 0;

                    }
                }

        }



        cout<<maxarea<<endl;

    }

}
