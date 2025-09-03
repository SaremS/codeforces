#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <string>

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
		cin.ignore();

		string line;

		getline(cin, line);

		
		istringstream stream(line);
		vector<int> numbers;
		int number;

		int i=1;
		bool isReachable = true;
		while (stream >> number) {
			if (abs(i - number) > 1) {
				isReachable = false;
			}
			i++;
		}

		if (isReachable) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;	
		}
	}

	return 0;
}
