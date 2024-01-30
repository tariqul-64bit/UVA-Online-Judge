#include<bits/stdc++.h>
using namespace std;
int arr[30][30];


int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    int T;
    cin>>T;
    getchar();
    getchar();

    while(T--)
    {

        memset(arr,0,sizeof(arr));
        string z;
        int RC = 0 ;

        while(getline(cin,z) && z.size())
        {

            for(int i = 0 ; i<z.size(); i++)
            {
                if(z[i]=='0')
                    arr[RC][i] = -625999;
                else
                    arr[RC][i] = 1;
            }

            RC++;
        }

        for(int i = 0 ; i<RC ; i++ )
        {
            for(int j = 0 ; j<RC ; j++ )
                cout<<arr[i][j];


            cout<<endl;
        }


    }
        return 0;
    }
