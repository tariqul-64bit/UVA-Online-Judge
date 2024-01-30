#include<bits/stdc++.h>
using namespace std;
int arr[100009];
long long unsigned cost = 0;
int n;

int findclosestreciprocal(int index)
{

    if(arr[index] > 0 )
    {
        for(int i = index ; i<n ; i++)
        {
            if(arr[i] < 0 )
            {
                int tobecut = min(fabs(arr[index]), fabs(arr[i] ) );
                arr[index]-=tobecut;
                arr[i] +=tobecut;
                return fabs(i-index) * tobecut;


            }

        }
    }

    if(arr[index] < 0 )
    {
        for(int i = index ; i<n ; i++)
        {
            if(arr[i] > 0 )
            {
                int tobecut = min(fabs(arr[index]), fabs(arr[i] ) );
                arr[index]+=tobecut;
                arr[i] -=tobecut;
                return  fabs(i-index) * tobecut ;


            }

        }
    }


}


int main()
{
    freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int i,j;
    while(cin>>n && n)
    {

                memset(arr,0,sizeof(arr));
                cost =0;
               for(i=0; i<n; i++) cin>>arr[i];


               for(int i=0; i<n-1; i++)
        {
            if(arr[i] == 0  ) continue;
                while(arr[i] !=0)
                {
                    cost += findclosestreciprocal(i);
                }



            }




            cout<<cost<<endl;


    }



}
