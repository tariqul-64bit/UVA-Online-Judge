#include <bits/stdc++.h>
#include <cstdio>
#include <stack>
using namespace std;
#define MAX_N 100000



void reconstruct_print(int end, int a[], int p[])
{
    int x = end;
    stack<int> s;
    for (; p[x] >= 0; x = p[x]) s.push(a[x]);
    printf("%d\n", a[x]);
    for (; !s.empty(); s.pop()) printf("%d\n", s.top());

}

int main()
{

    int tc;
    cin>>tc;
    getchar();
    getchar();
    while(tc--)
    {

        int n =0,A[MAX_N] ;
        int index  = 0;

        int t;
        char x[100];

        while(gets(x))
        {
            if( strlen(x) == 0 ) break;
            else
            {
                sscanf(x,"%d",&t);
                A[index++] = t;
            }


        }

        n = index ;

        int L[MAX_N], L_id[MAX_N], P[MAX_N];

        int lis = 0, lis_end = 0;
        for (int i = 0; i < n; ++i)
        {
            int pos = lower_bound(L, L + lis, A[i]) - L;
            L[pos] = A[i];
            L_id[pos] = i;
            P[i] = pos ? L_id[pos - 1] : -1;
            if (pos + 1 > lis)
            {
                lis = pos + 1;
                lis_end = i;
            }


        }

        printf("Max hits: %d\n", lis);
        reconstruct_print(lis_end, A, P);

        if(tc) cout<<endl;
    }

return 0;
}

