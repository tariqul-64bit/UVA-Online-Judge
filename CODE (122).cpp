#include<bits/stdc++.h>
using namespace std;
int arr[3700];
vector<int> Ps;

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int tc,tmp,N,P;
    cin>>tc;

    while(tc--)
    {
        int ans = 0;
        cin>>N>>P;
        Ps.clear();

        for(int i=0; i<P; i++)
        {
            cin>>tmp;
            Ps.push_back(tmp);
        }

        memset(arr,0,sizeof(arr));

        for(int  i=7; i<= N+1 ; i+=7)
        {
            arr[i]=1;
            arr[i-1] = 1;
        }

     //   for(int i=1; i<=14; i++) cout<<arr[i]<<" ";
       // cout<<endl;


        for(int j=0; j<P; j++)
        {
            for(int i=0+Ps[j]; i<= N ; i+=Ps[j])
            {
                if(!arr[i])
                {
                    arr[i]= 1 ;
                    ans++;
                }
            }



        }

        cout<<ans<<endl;

    }


}
