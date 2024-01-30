#include<bits/stdc++.h>
using namespace std;

bool isprime(int a)
{

    for(int i=2; i<=sqrt(a); i++) if(!(a%i)) return false;

    return true;
}


int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

    long long unsigned x,cases=0;
    cin>>x;
    getchar();
    while(x--)
    {
        bool anything_printed = false;
        char y[3000];
        gets(y);
        int arr[140];
        memset(arr,0,sizeof(arr));
        for(int i=0; i<strlen(y); i++)
        {
            int k = y[i];
            arr[k]++;


        }

        cout<<"Case "<<++cases<<": ";

        for(int i= 45; i<140; i++)
        {

            if (arr[i]>1 && isprime(arr[i]))
            {
                cout<< (char) i ;
                anything_printed= true;

            }

        }

        if( ! anything_printed) cout<<"empty";
        cout<<endl;

    }


}
