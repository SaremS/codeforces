#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	string a, b;

	std::getline(cin, a);
	std::getline(cin, b);

	int n = a.size();

	for (int i = 0; i < n; i++) {
		char left = tolower(a[i]);
		char right = tolower(b[i]);

		if (left<right) {
			cout << "-1" << endl;
			return 0;
		} else if (left>right) {
			cout << "1" << endl;
			return 0;
		}
		
	}

	cout << "0" << endl;	
	return 0;
}
