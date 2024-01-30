/*the  idea is to get two farthest point using two nested for loop
and calculating the distance between them
*/

#include<bits/stdc++.h>
using namespace std;
double max_dist;
int x[110];
int y[110];

#define EPS 1e-9

double dist(int ax,int ay,int bx,int by)
{
    return sqrt(((bx-ax)*(bx-ax) + (by-ay)*(by-ay))) ;
}

int main()
{

    int T;
    while(cin>>T && T)
    {
        bool packable=true;
        if(T==1)
        {
            cout<<"The polygon can be packed in the circle.\n";
            continue;
        }
        int ifinal,jfinal;
        double cx,cy;
        max_dist=0;
        for(int i=0; i<T; i++)
        {
            cin>>x[i]>>y[i];
        }
        double r;
        cin>>r;

        for(int i=0; i<T; i++)
            for(int j=0; j<T; j++)
            {
                if(i==j)continue;

                cx= (x[i]+x[j])/2;
                cy= (y[i]+y[j])/2;
                for(int k=0; k<T; k++) if( dist(cx,cy,x[k],y[k]) - r  > EPS )
                    {
                        packable=false;
                        break;
                    }

            }
            if(packable) cout<<"The polygon can be packed in the circle.\n";
            else cout<<"There is no way of packing that polygon.\n";
    }

        return 0;
    }
