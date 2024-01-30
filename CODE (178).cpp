#include<bits/stdc++.h>
using namespace std;
int arr[20099];

bool mf(int a,int b) {
    return a>b;}

int main()
{
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        memset(arr,0,sizeof(arr));

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }


        sort(arr,arr+n, mf);
        long long discount =0;

        int i=2;
        while(i<n)
        {
            discount += arr[i];
            i+=3;
        }

        cout<<discount<<endl;
    }



}
