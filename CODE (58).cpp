#include <algorithm>
#include <cstdio>
#include <stack>
using namespace std;
#include<bits/stdc++.h>
#define MAX_N 100000

bool myf(int x,int y)
{
    return x>y;
}

void print_array(const char *s, int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (i)
            printf(", ");
        else
            printf("%s: [", s);
        printf("%d", a[i]);
    }
    printf("]\n");
}

void reconstruct_print(int end, int a[], int p[])
{
    int x = end;
    stack<int> s;
    for (; p[x] >= 0; x = p[x])
        s.push(a[x]);
    printf("[%d", a[x]);
    for (; !s.empty(); s.pop())
        printf(", %d", s.top());
    printf("]\n");
}

int main()
{

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int temp,ind=0,n,A[MAX_N];
    int tc= 0;


    while(cin>>temp)
    {
        if(temp != -1)
        {
            A[ind++] = temp;
        }

        else
        {
            if(ind == 0 )
                break;
            if(tc)
                printf("\n");
            tc++;
            n=ind;
            ind=0;


            int L[MAX_N], L_id[MAX_N], P[MAX_N];

            int lis = 0, lis_end = 0;
            for (int i = 0; i < n; ++i)
            {
                int pos = upper_bound(L, L + lis, A[i],myf) - L;
                L[pos] = A[i];
                L_id[pos] = i;

                P[i] = pos ? L_id[pos - 1] : -1;



                if (pos + 1 > lis)
                {
                    lis = pos + 1;
                    lis_end = i;
                }
            }


            printf("Test #%d:\n",tc);
            printf("  maximum possible interceptions: %d\n",lis);





        }


    }

    return 0;
}
