#include <iostream>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	for (int i=0; i<t; i++) {
		int n, a, b;
		cin >> n >> a >> b;
		
		bool n_odd = n % 2;
		bool a_odd = a % 2;
		bool b_odd = b % 2;

		if (n_odd && a_odd && b_odd) {
			cout << "YES" << endl;
			continue;
		}

		if (!n_odd && !a_odd && !b_odd) {
			cout << "YES" << endl;
			continue;
		}

		if (n_odd && b_odd && b > a) {
			cout << "YES" << endl;
			continue;
		}

		if (!n_odd && !b_odd && b > a) {
			cout << "YES" << endl;
			continue;
		}

		cout << "NO" << endl;
	}
	return 0;
}
