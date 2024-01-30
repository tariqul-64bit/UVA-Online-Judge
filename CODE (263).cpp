#include <iostream>
#include <stdio.h>
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
	int max1=0,max2=0;
	int n,ants[10000],tc;
	int l;

void solve(int d)
{
	int hf=l/2;
if(d<hf){
	if(max1<d)
          max1=d;
      	if(max2<(l-d))
          max2=(l-d);
  }
      else{
      	if(max1<(l-d))
      		max1=(l-d);
      	if(max2<d)
      		max2=d;}

}
int main()
{
	cin>>tc;
	while(tc--){
		max1=max2=0;
		int ant;
scanf("%d%d",&l,&n);
loop(i,0,n) scanf("%d",&ant),solve(ant);
printf("%d %d\n",max1,max2);
}
    return 0;
}
