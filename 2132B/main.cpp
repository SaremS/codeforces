#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	for (int i=0; i<t; i++) {
		long long n;
		cin >> n;

		string s = to_string(n);
		int l = s.length();

		vector<long long> result;
		
		for (int j=l; j>0; j--) {
			long long test = 1 + static_cast<long long>(pow(10, j));	
			if (n % test == 0) {
				result.push_back(n / test);
			}
		}

		cout << result.size() << endl;

		for (int j=0; j<result.size(); j++) {
			cout << result[j] << " ";
			if (j == result.size() - 1) {
				cout << endl;
			}
		}

	}
	return 0;
}
