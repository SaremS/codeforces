#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;



	while (t--) {
		long long n, p;
		cin >> n >> p;

		vector<pair<long long, long long> > v(n);

		for (long long i = 0; i < n; i++) {
			cin >> v[i].first;
		}

		for (long long i = 0; i < n; i++) {
			cin >> v[i].second;
		}

		sort(v.begin(), v.end(), compare);

		long long i = 0;
		long long cost = 0;
		long long stored = 0;
		long long r = n;

		while (r>0 && i < n && p >= v[i].second) {
			if (stored > 0) {
				stored--;
			} else {
				cost += p;
				r--;
			}

			long long informed = min(v[i].first, r);
			cost += informed * v[i].second;
			
			stored += informed;
			r -= informed;
			i++;
		}
		cost += r*p;

		cout << cost << endl;

	}

	return 0;
}
