#include <stdio.h>
#include <math.h>
#define EPS 1e-12

int main()
{
    int n;
    while(scanf("%d", &n) == 1)
    {
        //if(n == 6) {
        //  puts("2^-6 = 1.562e-2");
        // continue;
        //}
        //commented out due to the use of EPS

        double calculation = log10(2)*(-n);
//The Name Calculation Makes No sense Here . Only Name given by me.


        int power = (int)floor(calculation);

        double base = pow(10, calculation - power);

        printf("2^-%d = %.3lfe%d\n", n, base-EPS, power);
    }
    return 0;
}
