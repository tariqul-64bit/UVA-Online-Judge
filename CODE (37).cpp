#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)


int main()
{
    double angle,r;
    int R,N;
    while(cin>>R>>N)
    {
        if(N==1)
        {
        cout<<R<<" "<<0.0<<" "<<0.0<<endl;
        continue;
        }



        angle=  PI/N;
        r=R*(sin(angle))/(1+sin(angle));

        double TriangleArea = r*(R-r)*cos(angle);

        double SectorArea   = r*r*(PI/2 - angle );

        double blue = N*(TriangleArea-SectorArea);
        double green= PI*R*R - N*PI*r*r - blue;

        cout<<setprecision(10)<<fixed<<r<<" "<<blue<<" "<<green<<endl;
    }

}
