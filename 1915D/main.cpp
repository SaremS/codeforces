#include <iostream>
#include <vector>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		
		char s[n];

		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}

		bool inside = false;
		vector<char> result;

		while (n--) {
			char c;
			c = s[n];

			if (c=='a' || c=='e') {
				inside = true;
				result.push_back(c);
			} else {
				if (inside) {
					result.push_back(c);
					inside = false;
					if (n>0) {
						result.push_back('.');
					}
				} else {
					result.push_back(c);
					inside = true;
				}
			}
		}

		vector<char> result_reverse(result.rbegin(), result.rend());

		for (int i = 0; i < result_reverse.size(); i++) {
			cout << result_reverse[i];
		}

		cout << '\n';
	}
	
	return 0;
}
