#include <iostream>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n;

	cin >> n;
	
	int result = 0;
	for (int i = 0; i < n; i++) {
		char a,b,c;
		cin >> a >> b >> c;

		if (b == '+') {
			result++;
		} else {
			result--;
		}
	}

	cout << result;

	return 0;
}

