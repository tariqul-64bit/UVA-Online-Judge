// 0-1 Knapsack DP (Bottom-Up)
#include<iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

#define MAX_N 1010
#define MAX_W 40

int i, w, T, N, G, MW, V[MAX_N], W[MAX_N], C[MAX_N][MAX_W], ans;

int main() {
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &N);
    for (i = 1; i<= N; i++)
      scanf("%d %d", &V[i], &W[i]);

    ans = 0;
    scanf("%d", &G);
    while(G--)
    {
        cin>>MW;

        for(i=0;i<=N;i++) C[i][0]=0;
        for(i=0;i<=MW;i++) C[0][i]=0;


        for(i=1;i<=N;i++){
            for(w=1;w<=MW;w++)
            {
            if(W[i]>w) C[i][w]=C[i-1][w];
            else C[i][w] =max(C[i-1][w],V[i]+C[i-1][w-W[i]]);
            }
        }


ans+=C[N][MW];
    }

cout<<ans<<endl;
  }

  return 0;
}
