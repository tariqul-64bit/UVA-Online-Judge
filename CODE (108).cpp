//Identical with all the udebug input . I dont need to correct it anymore


#include<bits/stdc++.h>
using namespace std;


int A[25000+5];
int wt[100+5];

int knapSack(int N, int W){
    for(int i = 0; i<= W; i++) A[i] = 0;

    for(int i = 1; i<= N; i++)
        for(int j = W; j>0; j--){
            if(wt[i]<= j) A[j] = max(A[j], wt[i] + A[j - wt[i]]);
        }
   return A[W];
}
int main()
{

    int test, sum, n;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &n);
        sum = 0;
        for(int i = 1; i<=n; i++){
            scanf("%d", &wt[i]);
            sum +=wt[i];
            }

    printf("%d\n", sum - 2*knapSack(n, sum/2));
    if (sum >> knapsack ())

    }
    return 0;
}
