#include<bits/stdc++.h>
using namespace std;



bool increasing(int a,int b)
{
    return a<b;
}
bool decreasing(int a,int b)
{
    return a>b;
}



int main()
{
  //  freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    int n,d,r;

    while(cin>>n>>d>>r && (n && d && r ))
    {
        vector<int>morning(110);
        vector<int>afternoon(110);
        int len;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&len);
            morning[i]= len;
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d",&len);
            afternoon[i]= len;
        }

        morning.resize(n);
        afternoon.resize(n);

        sort(morning.begin(), morning.end(), increasing);
        sort(afternoon.begin(), afternoon.end(), decreasing);


        long long unsigned payable =0;

        for(int i=0; i<n; i++)
        {
            int t = ( morning[i] + afternoon [i] - d );
            if(t>0) payable+= (t*r);

        }



        cout<<payable<<endl;

    }


}
