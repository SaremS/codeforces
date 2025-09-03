#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	unordered_map<char, pair<int, int> > dirMap;
	dirMap['N'] = make_pair(0,1);
	dirMap['S'] = make_pair(0,-1);
	dirMap['E'] = make_pair(1,0);
	dirMap['W'] = make_pair(-1,0);

	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;

		pair<int, int> target = make_pair(a,b);

		vector<pair<int, int> > movements;
		movements.push_back(make_pair(0,0));

		while (n--) {
			char d;
			cin >> d;
			pair<int, int> direction = dirMap[d];
			movements.push_back(make_pair(movements.back().first + direction.first, movements.back().second + direction.second));
		}
		vector<pair<int, int> > starts;

		for (int i=0; i<=20; i++) {
			starts.push_back(make_pair(i*movements.back().first, i*movements.back().second));
		}

		string result = "NO";

		for (const auto &s: starts) {
			for (const auto &m: movements) {
				pair<int, int> current = make_pair(s.first + m.first, s.second + m.second);
				if (current == target) {
					result = "YES";
					break;
				}	
			}
		}

		cout << result << endl;
	}

	return 0;	
}
