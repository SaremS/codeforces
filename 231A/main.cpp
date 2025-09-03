#include <iostream>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	
	int result = 0;

	for (int i = 0; i < n; i++) {
		int p, q, r;
		cin >> p >> q >> r;
		if (p + q + r >= 2) {
			result++;
		}
	}
	
	cout << result;

	return 0;
}
