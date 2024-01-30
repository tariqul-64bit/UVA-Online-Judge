#include<bits/stdc++.h>
using namespace std;


 int GCD(int a, int b)
{
    if (b==0)
        return a;
    return GCD(b, a%b);
}


int main()
{


int N;
while(cin>>N && N)
{
int G=0,i,j;
for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)
{
G+=GCD(i,j);
}

cout<<G<<endl;
}

}
