#include<bits/stdc++.h>
using namespace std;
int rows,columns;
int upleftx,uplefty,downrightx,downrighty;
int ulx,uly,drx,dry;

long long maxarea,subarea,subarea_size;
int i,j,l,r,row;
int arr[105][105];


int main()
{
  //  freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);


    while(cin>>rows>>columns  && rows && columns )
    {

        upleftx= uplefty= downrightx= downrighty = 0;

        maxarea = 0;


        for(i = 0 ; i<rows ; i++)
            for( j = 0 ; j< columns ; j++)
            {
                int aaa;
                cin>>aaa;

                if(aaa == 0 ) aaa = 1;
                else  aaa = -9999999;

                arr[i][j] = aaa;

                if(j>0)
                {
                    arr[i][j] += arr[i][j-1];

                }

            }



            //these codes was for my understanding
            /*

 for(i = 0 ; i<rows ; i++){
            for( j = 0 ; j< columns ; j++)
            {
                cout<< arr[i][j]<<" ";
            }
 cout<<endl;
 }

 */


//max 2d range sum the sum is in the maxarea;

        for( l = 0 ; l < columns ; l++)
        {

            upleftx = l ;


            for( r = l ; r< columns ; r++)
            {
                downrightx = r;

                subarea = 0;

                for(row = 0 ; row < rows ; row++ )
                {


                    if(l>0) subarea += arr[row][r] - arr[row][l-1];
                    else subarea += arr[row][r] ;


                    if(subarea < 0 )
                    {
                        subarea = 0 ;
                        uplefty = row;

                    }



                     downrighty = row;


                    subarea_size = (downrightx - upleftx + 1 ) * ( downrighty - uplefty +1 );

                    if( subarea > maxarea  )
                    {
                        maxarea = max(subarea, maxarea);

                        ulx = upleftx;
                        uly = uplefty;
                        drx = downrightx;
                        dry = downrighty;
                    }

                }

            }
        }

        cout<<maxarea<<endl;



   //     cout<< ulx << uly <<drx <<dry << endl; // subareas co- ordinates


   //     cout<< ( drx - ulx +1 ) * ( dry - uly +1 )<<endl; // subareas size the final


    }




}

