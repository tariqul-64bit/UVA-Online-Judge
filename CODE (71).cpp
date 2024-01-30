#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

struct node
{
    int x, y;
    bool operator < (const node a) const
    {
        return x < a.x;
    }
} island[1000];

int main(void)
{
    int n, i, count, cid = 0;
    double tx, lx, rx, llx, rrx, d;
    while (scanf("%d%lf", &n, &d), n)
    {
        for (i = 0; i < n; i++)
            scanf("%d%d", &island[i].x, &island[i].y);
        sort(island, island + n);
        count = 0;
        for (i = 0; i < n; i++)
        {
            if (island[i].y > d)
            {
                count = -1;
                break;
            }
            if (i == 0)
            {
                count = 1;
                tx = sqrt(d * d - island[i].y * island[i].y);
                lx = island[i].x - tx;
                rx = island[i].x + tx;


            }
            else
            {
                tx = sqrt(d * d - island[i].y * island[i].y);
                llx = island[i].x - tx;
                rrx = island[i].x + tx;
                if (llx <= rx)
                {
                    lx = min(lx,llx);
                    rx = min(rx,rrx);
                    //because you dont have any other options

                }
                else
                {
                    count++;
                    lx = llx;
                    rx = rrx;
                }
            }
        }
        printf("Case %d: %d\n", ++cid, count);
    }
}
