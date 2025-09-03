#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			int x;
			cin >> x;
			if (x == 1) {
				cout << abs(i-2) + abs(j-2);
				return 0;
			}
		}
	}
}
