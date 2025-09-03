#include <iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		int N;
		cin >> N;

		int sum = 0;
		for (int i=0; i<N; i++) {
			char next;
			cin >> next;

			if (next == '+') {
				sum ++;
			} else {
				sum --;
			}
		}

		cout << abs(sum) << endl;
	}

	return 0;
}
