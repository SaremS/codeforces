#include <iostream>
#include <utility>

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

		pair<int, int> p[n];
		
		for (int i = 0; i < n; i++) {
			cin >> p[i].first;
		}

		for (int i = 0; i < n; i++) {
			cin >> p[i].second;
		}

		sort(p, p + n);

		for (int i = 0; i < n; i++) {
			cout << p[i].first << " ";
		}

		cout << endl;

		for (int i = 0; i < n; i++) {
			cout << p[i].second << " ";
		}

		cout << endl;
	}


	return 0;
}
