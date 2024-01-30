#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[130];

    int x;
    cin>>x;
    getchar();
    char y[220];
    while(x--)
    {
        gets(y);
        memset(arr,0,sizeof(arr));
        for(int i=0;i<strlen(y);i++) arr[ (int) y[i]]++;
        int peak=0;
        for(int i=97; i<=122;i++)
        {
            arr[i] += arr[i-32];
            peak = max(peak,arr[i]);
        }
for(int i=97; i<=122;i++)
{
    if(arr[i] == peak ) cout<< (char) i;
}
cout<<endl;
    }




}
