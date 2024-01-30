#include<bits/stdc++.h>
using namespace std;

int dp[250];
int A[25];




int KNAPSACK(int n , int total , int A[])
{


for(int i =0 ; i<n ; i++)
{

for(int j=total ; j>= A[i] ; j--)
{

    dp[j] = max (dp[j] , dp[j-A[i]] + A[i]) ;

}


}


return dp[total];

}




int main()
{



//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


int tc;
cin>>tc;
getchar();


while(tc--)
{

string a;




while(getline(cin,a))
{
    int i=0;

memset(dp,0,sizeof(dp));
memset(A,0,sizeof(A));

int index = 0,sum=0;

stringstream ss(a);
for(int i=0;ss>>i;) {
        sum+=i ;
        A[index++] = i; }


        if( sum%2 == 1 ) {cout<<"NO"<<endl; continue ;}

int ans = KNAPSACK(index,sum/2,A);


if((sum - ans*2) == 0 ) cout<<"YES\n";
else cout<<"NO\n";



}

}
}
