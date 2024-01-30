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
        int ans[2];
        memset(ans,0,sizeof(ans));

        int a=2;
        int b=n-a;
        int it;
        for( it = b ; it > a ; b--,a++)
        {
            if(isprime(b) && isprime(a))
            {
                ans[0] =a;
                ans[1] =b;
                cout<<n<<" = "<<a<<" + "<<b<<endl;
                break;

            }


        }
        if(ans[0] == 0 && ans[1] == 0 )
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }

}
