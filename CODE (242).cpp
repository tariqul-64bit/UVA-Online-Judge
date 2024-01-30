#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int a, u, v;
    while(scanf("%d %d %d", &a, &u, &v) == 3) {
        if(a == 0) {
            puts("0");
            continue;
        }
        long long x = a, y = v, cx = 0, cy = 1;
        long long tu = 1, tv = 1;
        int ret, xtime = 0, ytime = 1;
        //x
        while(cx < x) {
            xtime++;
            x += u, cx += xtime;
        }
        //y
        while(cy < y) {
            ytime++;
            y += v, cy += ytime;
        }
        ret = max(xtime, ytime);
        printf("%d\n", ret);
    }
    return 0;
}
