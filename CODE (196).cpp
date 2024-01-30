#include<bits/stdc++.h>
using namespace std;

#define PI 2*acos(0.0)

int main()
{
char str[100];
int T;
cin>>T;
cin.getline(str,sizeof(str));
while(T--)
{
int a=0,b=0;
cin.getline(str,sizeof(str));
if((sscanf(str,"%d %d",&a,&b)) ==2) printf("%.4f\n",(2*a*b*PI));
else printf("%.4f\n",(a*a*PI/8));


//inthecase,of,else,i,didn't,scan,"a",again,as,it,was,stored,during,the,if,sscanf,2
}

}
