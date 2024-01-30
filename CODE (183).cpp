#include<bits/stdc++.h>
using namespace std;
vector<int> x,y;


int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    int n;
    cin>>n;
    while(n--)
    {
        x.clear();
        y.clear();
        int r,c,p;
        cin>>r>>c>>p;
        for(int i=0; i<p; i++)
        {
            int aa,bb;
            cin>>aa>>bb;
            x.push_back(aa);
            y.push_back(bb);
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

    long long unsigned ansx,ansy;

        if(p%2) {
                ansx = x[p/2];
                ansy = y[p/2];
        }


        else {
                ansx = x[(p-1)/2];
                ansy = y[(p-1)/2];
        }

        printf("(Street: %llu, Avenue: %llu)\n",ansx,ansy);
       // cout<<ansx<<ansy<<endl;
    }


}
