#include<bits/stdc++.h>
using namespace std;
int rows,columns;
int upleftx,uplefty,downrightx,downrighty;
long long maxarea,subarea,subarea_size;
int i,j,l,r,row;
int arr[105][105];


int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


while(cin>>rows>>columns  && rows && columns )
{

for(i = 0 ; i<rows ; i++)
    for( j = 0 ; j< columns ; j++)
{
    int aaa;
    cin>>aaa;
    aaa == 0 ? aaa=1 : aaa = 0;
    arr[i][j] = aaa;
    if(j>0) arr[i][j] += arr[i][j-1];


}

//max 2d range sum the sum is in the maxarea;

for( l = 0 ; l < columns ; l++)
    for( r = l ; r< columns ; r++)
{
    subarea = 0;
    for(row = 0 ; row < rows ; row++ )
    {
        if(l>0) subarea += arr[row][r] - arr[row][l-1];
        else subarea += arr[row][r] ;

        if(subarea < 0 ){ subarea= 0; uplefty = row; upleftx = l; }

        downrightx = r; downrighty =  row;
        subarea_size  = (downrightx - upleftx +1) * ( downrighty - uplefty +1);

        if(subarea >= maxarea && subarea_size == subarea )
         {
            maxarea = subarea;
         }

}
}


cout<<maxarea<<endl;

}

}
