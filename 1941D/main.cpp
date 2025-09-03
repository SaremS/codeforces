#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    		freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t--) {
		int n, m, x;
		cin >> n >> m >> x;

		vector<pair<int, char>> a(m);

		for (int i = 0; i < m; i++) {
			cin >> a[i].first >> a[i].second;
		}

		set<int> possible = {x};
		
		for (int i = 0; i < m; i++) {

			set<int> possible_new;
			if (a[i].second == '?') {
				for (int j : possible) {
					int c = (j + a[i].first)%n;
					if (c==0) {
						possible_new.insert(n);
					} else {
						possible_new.insert(c);
					}

					int cc = (j - a[i].first)%n;

					if (cc==0) {
						possible_new.insert(n);
					} else if (cc > 0){
						possible_new.insert(cc);
					} else if (cc < 0) {
						possible_new.insert(n + cc);
					}
						
				}
			} else if (a[i].second == '0') {
				for (int j : possible) {
					int c = (j + a[i].first)%n;
					if (c==0) {
						possible_new.insert(n);
					} else {
						possible_new.insert(c);
					}
				}
			} else {
				for (int j : possible) {
					int cc = (j - a[i].first)%n;

					if (cc==0) {
						possible_new.insert(n);
					} else if (cc > 0){
						possible_new.insert(cc);
					} else if (cc < 0) {
						possible_new.insert(n + cc);
					}
				}
			}

			possible = possible_new;
		}

		cout << possible.size() << endl;
		for (int i : possible) {
			cout << i << " ";
		}
		cout << endl;

	}
	return 0;
}
