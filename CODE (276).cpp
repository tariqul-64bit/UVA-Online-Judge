#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int year;
	while (cin >> year && year) {
		int e = (year - 1960) / 10 + 2;
		unsigned long long n = pow(2.0, e);
		double lim = n * log(2);
		double fact = 0;
		unsigned long long sol = 0;
		for (unsigned long long i = 1; i <= n; i++) {
			fact += log(i);
			if (fact >= lim) {
				sol = i - 1;
				break;
			}
		}
		cout << sol << endl;
	}
	return 0;
}
