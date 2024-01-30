//12049
#include<bits/stdc++.h>
using namespace std;


set<int> ms;
set<int>::iterator it;



int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    long long n,a,b,w,arr[10010],brr[10010];

//wrong is here. input are 32bit signed integer XXX-XXX-XXX-X 
//so when you write arr[XXX-XXX-XXX-X]++ it will give you the out_of_Bound_Range_Exception.
    cin>>n;

    while(n--)
    {
        ms.clear();
        long long unsigned ans=0;
        memset(arr,0,sizeof(arr));
        memset(brr,0,sizeof(brr));
        cin>>a>>b;
        for(long long i=0; i<a; i++)
        {
            cin>>w;
            arr[w]++;
            ms.insert(w);
        }

        for(long long i=0; i<b; i++)
        {
            cin>>w;
            brr[w]++;
            ms.insert(w);
        }


        for(it=ms.begin(); it !=ms.end(); ++it)
        {
            long long ww= *it;
            ans += abs(arr[ww]-brr[ww]);
        }



        cout<<ans<<endl;
    }



}
