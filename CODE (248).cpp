#include<bits/stdc++.h>



using namespace std;

typedef pair<int, int > ii;
bool com(ii x, ii y){
    if(x.second != y.second) return x.second < y.second;
    return x.first > y.first;
}
int main(){

   //freopen("input.txt", "r", stdin);
   bool blank = false;
   int len;
   vector < ii > lis;
    char input[1001];
    int f[128];
    while(gets(input)){
        len = strlen(input);
        memset(f, 0, sizeof(f));
        for( int i = 0; i < len; i++ )
            f[(int)input[i]]++;
        for(int i = 0; i < 128; i++ )
            if( f[i] > 0 )
                lis.push_back(ii(i, f[i]));
        sort(lis.begin(), lis.end(), com );
    if(blank)puts("");
    blank = true;
    for(int i = 0; i < (int)lis.size(); i++ )
        printf("%d %d\n", lis[i].first, lis[i].second);
    lis.clear();

    }
	return 0;
}
