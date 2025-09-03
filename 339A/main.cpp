#include <iostream>
#include <vector>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	vector<int> v;
	int number;

	int n = 0;

	while (cin >> number) {
		v.push_back(number);
		n++;
	}

	//sort vector in increasing order
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i];

		if (i < n - 1) {
			cout << "+";
		}
	}

	return 0;
}
