#include <iostream>
#include <set>
#include <algorithm>

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

		int mex = 0;
		set<int> myset;

		int total_eq = 0;

		for (int j=0; j<n; j++) {
			int a_j;
			cin >> a_j;

			total_eq += (k==a_j);

			if (a_j < k) {
				myset.insert(a_j);
			}
		}

		mex += total_eq;

		int diffed = k - myset.size() - total_eq;
		mex += max(diffed, 0);

		cout << mex << endl;
	}
}
