#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[1000];
    int arr[150];
    memset(arr,0,sizeof(arr));

    while(gets(x))
    {
    //    if(!strlen(x)) continue;
    // above line comment line na dileo accepted.

        memset(arr,0,sizeof(arr));
        for(int i=0; i<strlen(x); i++)
        {
            int a = x[i];
            arr[a]++;
        }
        int peak=0;
        for(int i=64; i<150; i++)
        {
            peak = max(peak,arr[i]);
        }

        for(int i=64;i<150;i++)
        {
            if(arr[i] == peak) cout<<(char) i;

        }

        printf(" %d\n",peak);
    }



}
