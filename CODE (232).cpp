#include<bits/stdc++.h>
using namespace std;
int A[100000];
#define maxn 100000


bool myf(int x, int y)
{
    return x>y;
}

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int increase[maxn], decrease[maxn] ;



    int T ,n , i ;
    cin>>T;
    while(T--)
    {
        memset(A,0,sizeof(A));
        cin>>n;
        for(i = 0 ; i < n ; i++)
            cin>>A[i];

        int L[maxn], L_id[maxn], P[maxn],pos ;
        int lis , lds,  lis_end ;



        memset(increase , 0 , sizeof(increase));
        memset(decrease , 0 , sizeof(decrease));


        lis = 0 ,lds = 0;
        for(int i = 0 ; i<n ; i++)
        {
            pos = lower_bound(L,L+lis,A[i]) - L ;
            L[pos] = A[i] ;
           // L_id[pos] = i ;
           // P[i] = pos ? L_id[pos-1] : -1 ;

            lis = pos+1;
            increase[i] = lis ;

            pos = upper_bound(L,L+lds,A[i],myf) - L ;
            L[pos] = A[i] ;

            lds = pos+1;
            decrease[i] = lds ;

        }


int res = 0;
int ibest= 0;
int dbest = 0;

        for(int i = 0 ; i < n ; i++ )
            {
                int ibest = inc;

            }


res = ibest +dbest - 1;
cout<<res<<endl;

    }





    return 0;
}
