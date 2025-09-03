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

	for (int i=0; i<t; i++) {
		unsigned long long n;
		vector<unsigned long long> G;
		unsigned long long g;
		unsigned long long C = 0;

		cin >> n;
		for (int j=0; j<n; j++) {
			cin >> g;
			G.push_back(g);	
		}

		sort(G.begin(), G.end(), [](int a, int b) {
			return a>b;
		});
		
		bool n_odd = n % 2;

		for (int j=0; j<n-1; j+=2) {
			unsigned long long high = G[j];
			unsigned long long low = G[j+1];
			unsigned long long max_val = max(low, high);

			C += max_val;
		}
		//test
		if (n_odd) {
			unsigned long long last = G[n-1];
			C += last;
		}

		cout << C << endl;
	}

	return 0;
}
