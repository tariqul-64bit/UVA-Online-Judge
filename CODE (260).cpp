#include <bits/stdc++.h>
#include <cstdio>
#include <stack>
using namespace std;

bool myf(int a,int b) {return a>b;}

int increasing,decreasing,weight;
bool isLDS = false;

#define MAX_N 100000

int W[MAX_N];

void print_array(const char *s, int a[], int n) {

weight = 0;
  for (int i = 0; i < n; ++i) {
    weight += a[i];
  }

  if(isLDS) decreasing = max(decreasing , weight);
  else increasing = max(weight,increasing);
}

void reconstruct_print(int end, int a[], int p[]) {

  int  weight = 0;
  int x = end;
  stack<int> s;
  for (; p[x] >= 0; x = p[x]) s.push(W[x]);
  weight+=W[x];
  printf("[%d", a[x]);
  for (; !s.empty(); s.pop()) weight += s.top();
  printf("]\n");

  if(isLDS)decreasing = max(decreasing,weight);
  else increasing = max(increasing , weight);
}

int main() {



    freopen("input.txt","r",stdin);

    int tc,tcc;
    cin>>tc;

    for(tcc= 1 ; tcc<=tc ; tcc++)
    {

     increasing = decreasing = 0;
  int n , A[MAX_N] ;
  cin>>n;

  for(int i = 0 ;i< n; i++)  cin>>A[i];
  for(int i = 0 ;i< n; i++)  cin>>W[i];


  int L[MAX_N], L_id[MAX_N], P[MAX_N];

  for(int j=0;j<n;++j){
  int lis = 0, lis_end = 0;
  for (int i = j; i < n; ++i) {
    int pos = lower_bound(L, L + lis, A[i]) - L;
    L[pos] = A[i];
    L_id[pos] = i;
    P[i] = pos ? L_id[pos - 1] : -1;
    if (pos + 1 > lis) {
      lis = pos + 1;
      lis_end = i;
    }

//    printf("Considering element A[%d] = %d\n", i, A[i]);
 //   printf("LIS ending at A[%d] is of length %d: ", i, pos + 1);
    reconstruct_print(i, A, P);
    print_array("L is now", L, lis);
    printf("\n");
  }

 // printf("Final LIS is of length %d: ", lis);
  reconstruct_print(lis_end, A, P);
  print_array("L is now", W, lis);
  reconstruct_print(lis_end, A, P);
  print_array("L is now", L, lis);
  }






  isLDS = true;



for(int j=0;j<n;++j){
  int lis = 0, lis_end = 0;
  for (int i = j; i < n; ++i) {
    int pos = upper_bound(L, L + lis, A[i],myf) - L;
    L[pos] = A[i];
    L_id[pos] = i;
    P[i] = pos ? L_id[pos - 1] : -1;
    if (pos + 1 > lis) {
      lis = pos + 1;
      lis_end = i;
    }

   // printf("Considering element A[%d] = %d\n", i, A[i]);
   // printf("LIS ending at A[%d] is of length %d: ", i, pos + 1);
    reconstruct_print(i, A, P);
    print_array("L is now", L, lis);
    printf("\n");
  }

 // printf("Final LIS is of length %d: ", lis);
  reconstruct_print(lis_end, A, P);
  print_array("L is now", W, lis);
  reconstruct_print(lis_end, A, P);
  print_array("L is now", L, lis);
  }






  cout<<increasing<<" "<<decreasing<<endl;

}

}
