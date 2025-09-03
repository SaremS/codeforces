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
		a.erase(unique(a.begin(), a.end()), a.end());

		int currentMax = 1;

		int i = 0;

		for (int j = 0; j < a.size(); j++) {
			while (a[j] - a[i] > n-1 && i < j) {
				i++;
			}

			currentMax = max(currentMax, j-i+1);
		}

		cout << currentMax << endl;

	}
	return 0;
}
