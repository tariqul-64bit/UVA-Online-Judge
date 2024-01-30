#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    int n;
    scanf("%d", &n);
    getchar();
    getchar();

    for(int j=1; j<=n; j++) {
      printf("Case #%d:\n", j);

      while(cin.getline(s, 10000)) {
        if(strlen(s)==0) break;

         int chc=0, d=0, i;
         for(i=0; i<strlen(s); i++) {
          if(s[i]==32 && d>chc) {
            cout<<s[i+chc-d];
            ++chc;
         }
         if(s[i]==32) d=0;
         else d++;
         }
         if(d>chc) cout<<s[i+chc-d];
         cout<<endl;
      }
    if(j!=n) cout<<endl;
    }
    return 0;
}
