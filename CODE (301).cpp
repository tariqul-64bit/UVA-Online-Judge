#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<bitset>
#include<algorithm>
#include<functional>
#include<deque>
// C
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cctype>
#include<cmath>
// namespace
using namespace std;
// typedef
typedef long long lli;
typedef unsigned long long ull;
// const variable
#define MAX_N 1000
#define MAX_M 1000
#define INF 2e9
#define NONE -1
#define MAX(x, y, z) {	return max(max(x,y),z);	}
#define MIN(x, y, z) {	return min(min(x,y),z);	}
const double PI = 2.0 * acos(0.0);
// main
vector<string> word;
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		word.clear();
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			string tmp;
			cin >> tmp;
			word.push_back(tmp);
		}
		sort(word.begin(), word.end());
		int ans = word[0].length();
		for (int i = 1, j; i < n; i++){
			for (j = 0; j < word[i].length(); j++)
				if (word[i - 1][j] != word[i][j])
					break;
			ans += word[i].length() - j;
		}
		printf("%d\n", ans);
		for (int i = 0; i < n; i++)
			cout << word[i] << endl;
	}
	return 0;
}
