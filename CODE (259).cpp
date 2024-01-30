#include<bits/stdc++.h>
using namespace std;
#define maxn 100000
int maxweighti,maxweightd,weight;
bool isLDS;
int W[maxn];


bool myf (int a,int b) {return a>b;}

void reconstruct_print(int end, int a[], int p[])
{
    weight = 0;

    int x = end;

    for (; p[x] >= 0; x = p[x]) weight += W[x];
    weight += W[x];

    if(isLDS)
    {
        maxweightd = max(maxweightd,weight);

    }

    else
    {maxweighti = max(maxweighti,weight);

    }
}




int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


    int A[maxn],L_id[maxn],P[maxn];





    int tc,n,tcc,lis,lis_end;
    cin>>tc;

    for(tcc= 1; tcc<= tc ; ++tcc)
{



    maxweighti= maxweightd = 0;


    cin>>n;

    for(int i =0; i< n ; i++) cin>>A[i];
    for(int i =0; i< n ; i++) cin>>W[i];


        isLDS = true;


        int L[maxn];
//      LDS
        lis = 0,lis_end = 0;
        for(int i = 0; i<n; i++)
        {

            int pos = upper_bound(L, L + lis, A[i],myf) - L;
            L[pos] = A[i];
            L_id[pos] = i;
            P[i]  = pos ? L_id[pos-1] : -1;


            reconstruct_print(i,A,P);
        }


        isLDS = false;
        //LIS



        int LL[maxn];

        lis = 0 ;
        lis_end=0 ;
        for(int i=0 ; i<n ; i++)
        {
            int pos = lower_bound(LL, LL + lis, A[i]) - LL;
            L[pos] = A[i];
            L_id[pos] = i;
            P[i]  = pos ? L_id[pos-1] : -1;


            reconstruct_print(i,A,P);

        }
    cout<<maxweighti<<" "<<maxweightd<<endl;
    }
}

