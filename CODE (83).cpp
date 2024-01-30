#include <cstdio>
#include<cmath>
#define PI acos(-1.0)

int main(){

    double r; int n;

    while(scanf("%lf %d",&r,&n)==2) printf("%.3f\n",n*r*r/2*sin(2*PI/n));

    return 0;
}
