#include<bits/stdc++.h>
using namespace std;
int arr[24];
int n;
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37};
bool visit[24];

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
        for(int k=0; k<n; k++)
        {
            printf("%d",arr[k]);
            k == n-1 ? printf("\n"):printf(" ");
        }
        return;
    }


    for(int i=2; i<=n; i++)
    {
       if(visit[i]) continue;

        if(isprime(arr[index-1],i))
        {   arr[index]=i;
            visit[i] = true;
            BackTrack(index+1);
            visit[i] =false;
            //the most important line is this. To make it false .So, that Other Recusrsive functions can call it intakely.
        }
    }

}




int main()
{
    int cs=0;
    while(cin>>n)
    {
        memset(arr,0,sizeof(arr));
        memset(visit,false,sizeof(visit));
        arr[0]=1;
        if(cs++) cout<<endl;
        printf("Case %d:\n",cs);
        BackTrack(1);
    }


    return 0;
}
