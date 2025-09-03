#include <iostream>
#include <cmath>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;

	cin >> t;

	while (t--) {
		int x,y,k;

		cin >> x >> y >> k;
		int m = min(x,y);

		cout << "0 ";
		cout << "0 ";
		cout << m << " ";
		cout << m << endl;

		cout << m << " ";
		cout << "0 ";
		cout << "0 ";
		cout << m << endl;
	}

	return 0;
}
