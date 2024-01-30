#include<bits/stdc++.h>
using namespace std;
int arr[100010];

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int army,cutters;

    while(cin>>army>>cutters)


    {
        bool leftmost,rightmost;
        memset(arr,0,sizeof(arr));
        int left_alive=1;
        int right_alive=army;
        int left_dead,right_dead;
        for(int i=0; i<cutters; i++)
        {
            cin>>left_dead>>right_dead;


            for(int i=left_dead; i<=right_dead; i++)
            {
                arr[i] = 1;
                i=left_dead;
                while(arr[--i] != 0 )
                {
                    if(i==0)
                    {
                        break;
                    }
                }
                if(i>1) cout<< i;
                else cout<<"*";

                             cout<<" ";


                             i=right_dead;
                while(arr[++i] != 0 )
                {
                    if(i==army)
                    {
                        break;
                    }
                }
                if(i>army) cout<<"*";
                else cout<< i;

                cout<<endl;


            }



        }

    }



}
