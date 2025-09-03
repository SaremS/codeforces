#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;
	t = 1;
	cout << "T: " << t << endl;
	
	while (t--) {
		int n;
		cin >> n;

		cout << "N: " << n << endl;

		int a[n];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int left_zeros[n];
		fill(left_zeros, left_zeros + n, 0);
		
		int right_zeros[n];
		fill(right_zeros, right_zeros + n, 0);

		int left_ones[n];
		fill(left_ones, left_ones + n, 0);
		
		int right_ones[n];
		fill(right_ones, right_ones + n, 0);

		left_zeros[0] = (a[0] == 0 ? 1 : 0);
		left_ones[0] = (a[0] == 1 ? 1 : 0);

		right_zeros[n-1] = a[n-1] == 0 ? 1 : 0;
		right_ones[n-1] = a[n-1] == 1 ? 1 : 0;


		for (int i = 0; i < n; i++) {
			cout << left_ones[i] << " ";
		}

		cout << endl;

		for (int i = 1; i < n; i++) {
			left_zeros[i] = left_zeros[i-1] + (a[i] == 0 ? 1 : 0);
			left_ones[i] = left_ones[i-1] + (a[i] == 1 ? 1 : 0);
			right_zeros[n - i - 1] = right_zeros[n - i] + (a[n - i - 1] == 0 ? 1 : 0);
			right_ones[n - i - 1] = right_ones[n - i] + (a[n - i - 1] == 1 ? 1 : 0);
		}

		cout << "asdf" << endl;

		for (int i = 0; i < n; i++) {
			cout << left_zeros[i] << " ";
		}

		cout << endl;

		for (int i = 0; i < n; i++) {
			cout << left_ones[i] << " ";
		}

		cout << endl;

		for (int i = 0; i < n; i++) {
			cout << right_zeros[i] << " ";
		}

		cout << endl;

		for (int i = 0; i < n; i++) {
			cout << right_ones[i] << " ";
		}

		cout << endl;

		int dist = INT_MAX;
		int split;

		for (int i = 0; i < n+1; i++) {
			int left = left_zeros[i] + left_ones[i];
			int right = right_zeros[i+1] + right_ones[i+1];
			int lm = (left + left%2) / 2;
			int rm = (right + right%2) / 2;

			if (left_zeros[i] >= lm && right_ones[i+1] >= rm) {
				int new_dist = abs(n - 2 * i);
				if (new_dist < dist) {
					dist = new_dist;
					split = i;
				}
			}
		}

		cout << split << endl;
	}
		
	return 0;
}
