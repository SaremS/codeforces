#include<iostream>
#include<vector>

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

		vector<char> a;

		for (int j=0; j<n; j++) {
			char aa;
			cin >> aa;
			a.push_back(aa);
		}
		int m;
		cin >> m;

		vector<char> b;

		for (int j=0; j<m; j++) {
			char bb;
			cin >> bb;
			b.push_back(bb);
		}

		for (int j=0; j<m; j++) {
			char cc;
			cin >> cc;

			if (cc=='D') {
				a.push_back(b[j]);
			} else {
				a.insert(a.begin(), b[j]);
			}
		}

		for (int k=0; k<(n+m); k++) {
			cout << a[k];
		}
		cout << endl;
	}
	return 0;
}
