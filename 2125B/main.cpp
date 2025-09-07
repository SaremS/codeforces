#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	
	int t;
	cin >> t;

	for (int i=0; i<t; i++) {
		long long a, b, k;
		cin >> a >> b >> k;
		
		long long m = max(a,b);
		long long g = gcd(a,b);

		if (k >= m/g) {
			cout << 1 << endl;
		} else {
			cout << 2 << endl;
		}
	}

	return 0;
}
