#include <iostream>
#include <vector>

using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n, k;
	cin >> n >> k;

	vector<int> v;
	v.reserve(n);
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	int k_th = v[k-1];
	
	for (int i = 0; i < n; i++) {
		int e = v[i];
		if (e<1) {
			cout << i;
			break;
		}

		if (i >= k-1 && e < k_th) {
			cout << i;
			break;
		}

		if (i==n-1) {
			cout << n;
			break;
		}
	}

	
	return 0;
}

