#include<bits/stdc++.h>
using namespace std;
int a[110];
bool temp_fuse=false;


bool valid1(int n)
{

    if(a[0]<1) return false;
    for(int i=0; i<n-1; i++)
    {
        if(a[0]==1) continue;
        if(a[i] >= a[i+1]) return false;


    }
    return true;
}



bool valid2(int n)
{

    for(int i=2; i<n; i++)
    {
        int ch=a[i];
        temp_fuse=false;


        for(int j=i-1; j>=0; j--)
            for (int k=j-1; k>0; k--)
            {
                if((a[j]+a[k]) == ch )
                {
                    temp_fuse=true;
                    continue;
                }
                else if ((a[j]+a[k])  < ch ) break;
            }
        if (temp_fuse==false) return false;
    }

    return true;
}


int main()
{
    bool fuse= false;
    int n;
    while(cin>>n)
    {
        for(int i=0; i<n; i++) cin>>a[i];
        fuse=true;
        cout<<valid1<<valid2<<endl;
        getchar();
    }

}
