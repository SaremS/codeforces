#include <iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t--) {
		int n;	
		cin >> n;

		int negatives = 0;
		bool hasZero = false;

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;

			if (x < 0) {
				negatives++;
			} else if (x == 0) {
				hasZero = true;
			}
		}
	
		if (negatives % 2 == 0 && !hasZero) {
			cout << 1 << endl;
			cout << 1 << " " << 0 << endl;
		} else {

		cout << 0 << endl;

		}
	}

	return 0;
}
