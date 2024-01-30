#include <bits/stdc++.h>
#include <cstdio>
#include <stack>
using namespace std;
#define MAX_N 100000



void reconstruct_print(int end, int a[], int p[]) {
  int x = end;
  stack<int> s;
  for (; p[x] >= 0; x = p[x]) s.push(a[x]);
  printf("%d\n", a[x]);
  for (; !s.empty(); s.pop()) printf("%d\n", s.top());

}



int main() {

freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

  int n,ff,ss ;

  while(cin>>n && n)
  {
    map<int,int> table;
    for(int i = 0 ;i<n ; i++)
    {
        cin>>ff>>ss;
        table.insert(make_pair(ff,ss));
    }

    int A[MAX_N],index=0;

    map<int,int>::iterator it ;

    for(it = table.begin(); it != table.end() ; ++it)
    {
        A[index++]  = it->second;
    }



  int L[MAX_N], L_id[MAX_N], P[MAX_N];

  int lis = 0, lis_end = 0;
  for (int i = 0; i < n; ++i) {
    int pos = lower_bound(L, L + lis, A[i]) - L;
    L[pos] = A[i];
    L_id[pos] = i;
    P[i] = pos ? L_id[pos - 1] : -1;
    if (pos + 1 > lis) {
      lis = pos + 1;
      lis_end = i;
    }


  }

  printf("%d\n", lis);

 // reconstruct_print(lis_end, A, P);
  }
  cout<<"*"<<endl;
  return 0;
}
