#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		if (a[0] < a[1]) {
			cout << "YES" << endl;
		} else if (a.size() == 2) {
			cout << "NO" << endl;
		} else {
			bool has_solved = false;
			for (int i = 2; i < n; i++) {
				if (a[i] % a[0] != 0) {
					cout << "YES" << endl;
					has_solved = true;
					break;
				}
			}	

			if (!has_solved) {
				cout << "NO" << endl;
			}
		}
	}

	return 0;
}
