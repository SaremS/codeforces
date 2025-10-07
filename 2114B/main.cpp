#include <iostream>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	for (int i=0; i<t; i++) {
		int n, k;
		cin >> n >> k;

		bool zero = false;
		bool one = false;
		int zeropairs = 0;
		int onepairs = 0

		for (int j=0; j<n; j++) {
			char a;
			cin >> a;

			if (a=='0' && !zero) {
				zero = true;
			} else if (a=='0' && zero) {
				zeropairs++;
				zero = false;
			} else if (a=='1' && !one) {
				one = true;
			} else if (a=='1' && one) {
				onepairs++;
				one = false;
			}
		}
		cout << n << " " << pairs << " ";
		if (pairs >= k && pairs != n/2) {
			cout << "YES" << endl;	
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
