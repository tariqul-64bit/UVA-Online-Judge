#include<bits/stdc++.h>
using namespace std;

#define EPS 1e-7

int p,q,r,s,t,u;

double f(double x){
  return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


int l ,r ;

l=0, r = 1;



}





int main(){
  while (scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF){
    if (f(0) * f(1) > 0){
      puts("No solution");
    } else {
      printf("%.4lf\n", bisection());
    }
  }
}
