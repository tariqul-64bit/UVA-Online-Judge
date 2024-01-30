#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;


int Prime[1125], Pt;
int ans[1121][15] = {};



void sieve() {
    char mark[1125] = {};
    Pt = 0;
    int i, j;
    for(i = 2; i < 1125; i++) {
        if(mark[i] == 0) {
            Prime[Pt++] = i;
            for(j = 2; i*j < 1125; j++)
                mark[i*j] = 1;
        }
    }
}


void build() {
    ans[0][0] = 1;

    int i, j, k;

    for(i = 0; i < Pt; i++) {
        for(j = 1120; j >= Prime[i]; j--) {
            for(k = 14; k >= 1; k--)
                ans[j][k] += ans[j-Prime[i]][k-1]; // ans[j-primei][k-1] what
        }


    }
}


int main() {
    sieve();
    build();
    int n, m;
    while(scanf("%d %d", &n, &m) == 2) {
        if(n == 0 && m == 0)
            break;
        printf("%d\n", ans[n][m]);


        }
 return 0;
    }


