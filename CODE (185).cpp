#include<bits/stdc++.h>
using namespace std;
#define MAX 4294967295

int main()
{
    long long unsigned target,ans;

    while(cin >> target)
    {
        ans=1;
        while (1)
        {
            ans = ans*9 ;
            if(ans >= target) {cout<<"Stan wins.\n";break;}
            ans = ans*2 ;
            if(ans >= target) {cout<<"Ollie wins.\n";break;}


        }


    }

return 0 ;
}

