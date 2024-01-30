#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)


int main()
{
static int t=0;
int n;
double Area;

while(cin>>n>>Area  && n>=3)
{
t++;
double InsideRadius=sqrt(Area/(n*tan(PI/n)));

double InsideArea = PI*InsideRadius*InsideRadius;

double OutsideRadius= sqrt((2*Area)/(n*sin((2*PI)/n)));

double OutsideArea =PI*OutsideRadius*OutsideRadius;



cout<<"Case "<<t<<": "<<fixed<<setprecision(5)<<OutsideArea-Area<<" "<<Area-InsideArea<<endl;

}
}
