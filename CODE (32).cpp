//543
#include<bits/stdc++.h>
using namespace std;

bool isprime(int a)
{
    if(a== 1 ) return false;

    for(int i=2; i<=sqrt(a); i++)
        if( (a%i) == 0 ) return false;
    return true;
}



int main()
{


    //for(int i=1; i<100; i++) if(isprime(i)) cout<<i<<endl;

    int n;

    while(cin>>n && n)
    {
        int freq=0;

        int a=1;
        int it;
        for( it = n-1 ; it >= a ; it--,a++)
        {
            if(isprime(it) && isprime(a))
            {
                freq++;


            }

            //cout<<it<<" "<<a<<" "<<freq<<endl;
        }
        cout<<freq<<endl;
    }

}
