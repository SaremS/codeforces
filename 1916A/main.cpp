#include <iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;

		int current = 1;
		bool solvable = true;

		while (n--) {
			int x;
			cin >> x;

			if (x%7 != 0 && x%17==0 && x!=1) {
				cout << "NO" << endl;
				solvable = false;
				break;
			}

			current *= x;

			if (current > 2023) {
				cout << "NO" << endl;
				solvable = false;
				break;
			}
		}

		while (n-- > 0) {
			int x;
			cin >> x;
		}




		if (solvable) {
			bool was_solved = true;
			int remainder = 2023 / current;
			cout << "ASDFASDF:  " << remainder << endl;

			if (remainder > 1 && k == 0) {
				cout << "NO" << endl;
				was_solved = false;
			}
	
			if (remainder == 289 && k == 1) {
				cout << "YES" << endl;
				cout << 289;
				k -= 1;
			} else if (remainder == 289 && k > 1) {
				cout << "YES" << endl;
				cout << 17 << " " << 17;
				k -= 2;
			} else if (remainder == 119 && k==1) {
				cout << "YES" << endl;
				cout << 119;
				k -= 1;
			} else if (remainder == 119 && k > 1) {
				cout << "YES" << endl;
				cout << 7 << " " << 17;
				k -= 2;
			} else if (remainder == 2023 && k > 3) {
				cout << "YES" << endl;
				cout << 7 << " " << 17 << " " << 17 << " " << endl;
				k -= 3;
			} else if (remainder == 17 && k > 0) {
				cout << "YES" << endl;
				cout << 17;
				k -= 1;
			} else if (remainder == 7 && k > 0) {
				cout << "YES" << endl;
				cout << 7;
				k -= 1;
			}

			if (was_solved) {
				for (int i=0; i<k; i++) {
					cout << " " << 1;
				}
				cout << endl;
			}
			

		}

	}

	return 0;
}
