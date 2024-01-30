#include<bits/stdc++.h>
using namespace std;
int arr[24];
int n;
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37};

bool isprime(int a,int b)
{
    for(int i=0; i<12; i++)
    {
        if( (a+b) == primes[i] ) return true;
    }

    return false;
}




void BackTrack(int index)
{
//circular check is here . because otherwise you will get anything printed
    if( index == n && isprime(1,arr[index-1]))
    {
        {
        for(int k=0; k<n; k++)
        {
            cout<<arr[k];

            k == n-1 ? cout<<endl:cout<<" ";
        }

        return;
    }
    }

    for(int i=2; i<=n; i++)
    {
        bool uniqu = true;
        for(int j=0; j<index; j++) if( i == arr[j] )  uniqu = false;

        if(uniqu)
        {
//circular check is not here . because you will NOT get anything printed
            arr[index] = i ;
            if(isprime(arr[index],arr[index-1]))
            {
                BackTrack(index+1);
            }
        }
    }

}




int main()
{
    int cs=0;
    while(cin>>n)
    {
        memset(arr,0,sizeof(arr));
        arr[0]=1;
        if(cs++) cout<<endl;
        printf("Case %d:\n",cs);
        BackTrack(1);
    }


return 0;
}
