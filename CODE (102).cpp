#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    double a;
    while (scanf("%lf",&a)!=EOF)
    {
        double x,y,z,a2;
        a2=a*a;
        z=(a2*(12-2*pi-3*sqrt(3)))/3.0;
        y=(a2*(pi+6*sqrt(3)-12))/3.0;
        x=a2-y-z;
        printf("%.3lf %.3lf %.3lf\n",x,y,z);
    }
    return 0;
}
