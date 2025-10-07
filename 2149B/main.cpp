#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

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

		vector<long long> as;

		for (int j=0; j<n; j++) {
			long long a;
			cin >> a;

			as.push_back(a);
		}

		sort(as.begin(), as.end());

		long long current_max = 0;

		for (int k=0; k<n; k+=2) {
			long long a_k = as[k];
			long long a_k1 = as[k+1];

			long long diff = abs(a_k-a_k1);

			current_max = max(current_max, diff);
		}

		cout << current_max << endl;
	}
}
