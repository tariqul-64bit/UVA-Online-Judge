/*
if(cases)   puts("");
        printf("Scenario %d:\n", ++cases);
        printf("     up hill         %10.2lf sec\n", UP);
        printf("     well diameter   %10.2lf in\n", D);
        printf("     water level     %10.2lf in\n", oL);
        printf("     bucket volume   %10.2lf cu ft\n", B);
        printf("     bucket ascent rate%8.2lf in/sec\n", P);
        printf("     down hill       %10.2lf sec\n", DOWN);
        printf("     required volume %10.2lf cu ft\n", V);
        printf("     TIME REQUIRED   %10.2lf sec\n", time);


*/

#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)

double UP,DIAMETER,WATER_LEVEL,CAPACITY,PULL_UP,DOWN,VOLUME;

double tofeet(double a)
{
    return a/12;
}


int main()
{

while(cin>>UP && UP>1.000)
{
double fetched=0;
double time=0;
cin>>DIAMETER>>WATER_LEVEL>>CAPACITY>>PULL_UP>>DOWN>>VOLUME;

DIAMETER= tofeet(DIAMETER);
WATER_LEVEL=tofeet(WATER_LEVEL);
PULL_UP=tofeet(PULL_UP);



while(fetched < VOLUME  )
{
    time += UP;
    //to climb the hill
    time +=  sqrt((2*WATER_LEVEL)/32.2);
    //bucket down to water level
    time += WATER_LEVEL/PULL_UP;
    //time to bring it up
    WATER_LEVEL = WATER_LEVEL + (CAPACITY/(PI*(DIAMETER/2)* (DIAMETER/2)));
    //new water level as water level has downed
    time+=DOWN;
    fetched += CAPACITY;
}




cout << setprecision(2) << setiosflags(ios::fixed)  << time << endl;
}

}



}
















