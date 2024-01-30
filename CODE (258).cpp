#include<bits/stdc++.h>
using namespace std;
int maxi,maxd;

#define MAX_N 100000


void print_array(const char *s, int a[], int n) {
  for (int i = 0; i < n; ++i) {
    if (i) printf(", ");
    else printf("%s: [", s);
    printf("%d", a[i]);
  }
  printf("]\n");
}

void reconstruct_print(int end, int a[], int p[]) {
  int x = end;
  stack<int> q;
  for (; p[x] >= 0; x = p[x]) q.push(a[x]);
  printf("[");
  q.push(a[x]);
  for (; !q.empty(); q.pop()) printf(", %d", q.front());
  printf("]\n");
}







int main()
{
freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


int n;
cin>>n;

int L[MAX_N], L_id[MAX_N], P[MAX_N],A[MAX_N];


for(int i = 0 ; i<n ; i++) cin>>A[i];


  int lis = 0, lis_end = 0;
  for (int i = 0; i < n; ++i) {

    int pos = upper_bound(L, L + lis, A[i]) - L;
    L[pos] = A[i];
    L_id[pos] = i;
    P[i] = pos ? L_id[pos - 1] : -1;

    if (pos + 1 > lis) {
      lis = pos + 1;
      lis_end = i;
    }

    reconstruct_print(i, A, P);
    print_array("L is now", L, lis);
    printf("\n");
  }

  printf("Final LIS is of length %d: ", lis);
  reconstruct_print(lis_end, A, P);


  for(int i = 0 ;i<11;i++)
  {
  cout<<L[i]<<" ";
  }
    cout<<endl;

    for(int i = 0 ;i<11;i++)
  {
  cout<<L_id[i]<<" ";
  }
    cout<<endl;

    for(int i = 0 ;i<11;i++)
  {
  cout<<P[i]<<" ";
  }
    cout<<endl;
}




