#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	for (int i=0; i<t; i++) {
		int n;
		cin >> n;

		unordered_set<int> checker;
		bool has_dup = false;

		for (int j=0; j<n; j++) {
			int g;
			cin >> g;

			auto insert = checker.insert(g);
			if (!insert.second) {
				has_dup = true;
			}
		}
		if (has_dup) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
