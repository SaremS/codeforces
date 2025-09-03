#include <iostream>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t--) {
		long long int n, f, a, b;
		cin >> n >> f >> a >> b;

		long long int sum = 0;
		long long int last = 0;

		while (n--) {
			long long int x;
			cin >> x;
			
			long long int diff = x - last;

			sum += min(diff*a,b);
			last = x;
		}

		if (sum >= f) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	return 0;
}
