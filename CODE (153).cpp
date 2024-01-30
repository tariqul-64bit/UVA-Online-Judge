#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc, kk=1;
    double R, n, theta, r, midR, area_midR, blue, green, triangleArea, sectorArea;
    string s;
    while(cin>>R>>n)
    {
        if(n==1)
        {
            cout<<R<<" "<<0.0<<" "<<0.0<<"\n";
            continue;
        }
        theta=180.0/n;
        r = R*(sin(theta*PI/180.0)) / (1+sin(theta*PI/180.0));

        midR = R-r;

        triangleArea = midR*cos(theta*PI/180.0)*r;
        //cout<<triangleArea<<endl;
        sectorArea = (90-theta) / 180 * PI * r * r;
        //cout<<sectorArea<<endl;
        blue = n*(triangleArea - sectorArea);
        green = PI*R*R - n*PI*r*r - blue;
        cout<<setprecision(10)<<fixed<<r<<" "<<blue<<" "<<green<<"\n";
    }
return 0;
}
