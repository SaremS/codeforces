#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		deque<int> a(n), b(m);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		
		long long diff = 0;

		while (n > 0) {
			int diff_fl = abs(a[0] - b[m - 1]);
			int diff_lf = abs(a[n - 1] - b[0]);

			if (diff_fl > diff_lf) {
				diff += diff_fl;
				a.pop_front();
				b.pop_back();
			} else {
				diff += diff_lf;
				a.pop_back();
				b.pop_front();
			}

			n--;
			m--;
		}

		cout << diff << "\n";
	}
	return 0;
}
