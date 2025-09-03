#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	
	string s;
	getline(cin, s);

	int t = stoi(s);

	while (t--) {
		//readline
		string s;
		getline(cin, s);

		int n = s.size();

		vector<char> result;
		int next_lower = 0;
		int next_upper = 0;

		for (auto rit = s.rbegin(); rit != s.rend(); ++rit) {
			char c = *rit;
			if (c=='b') {
				next_lower++;
			} else if (c== 'B'){
				next_upper++;
			} else {
				if (next_lower > 0 && islower(c)) {
					next_lower--;
				} else if (next_upper > 0 && !islower(c)) {
					next_upper--;
				} else {
					result.push_back(c);
				}
			}
		}
		
		for (auto it = result.rbegin(); it != result.rend(); ++it) {
			cout << *it;
		}

		if (t > 0) {
			cout << endl;
		}

	}
	
}

