#include <iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int a, b;

		cin >> a >> b;

		if ((a+b)%2 == 0) {
			cout << "Bob" << endl;
		} else {
			cout << "Alice" << endl;
		}
	}

	return 0;
}
