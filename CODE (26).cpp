#include<bits/stdc++.h>
using namespace std;

long long prime_list[10000];

bool isprime(long long unsigned a)
{

    for(long long i=2; i <= sqrt(a)+1 ; i++)
    {
        if((a%i) == 0 ) return false;
    }

    return true;
}


int main()
{

    int  j=0;
    memset(prime_list,0,sizeof(prime_list));
    for(long long  i=2 ; i< 2147483648 ; i++)
    {
        if(isprime(i)) prime_list[j++]=i;
    }

    for(int i=0; i<10; i++) cout<<prime_list[i]<<endl;

    long long arr[10000];
    memset(arr,0,sizeof(arr));

    long long x,x_saved;



    while(cin>>x && x )
    {
        long long  counter=0;
        x_saved =x;

        do
        {
            for(long long  i=0; prime_list[i]; i++)
            {
                if (x % prime_list[i] == 0 )
                {
                    arr[counter++]=prime_list[i];
                    x = x/prime_list[i];
                }

            }

        }
        while(x!=1);



        for(long long  i = 0 ; arr[i] ; i++) cout<<arr[i] <<endl;

    }
}
