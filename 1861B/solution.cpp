#include<iostream>
#include<string>
using namespace std;

bool solve_string(string a, string b) {
	int n = a.size();
	int i=1;

	while (i<n){
		char ai = a[i];
		char bi = b[i];

		if (ai != bi) {
			char aim1 = a[i-1];
			char bim1 = b[i-1];

			for (int j=i+1; j<n; j++){
				char aj = a[j];
				char bj = b[j];

				if (aj==aim1 && bj==bim1) {
					i = j;
					break;
				}
				if (j == n-1) {
					return false;
				}
			}
		}
		i++;
	}
	return true;
}

void solve() {
	string line;
	getline(cin, line);

	int n = atoi(line);

	for (int i=0; i<n; i++) {
		string a;
		string b;

		getline(cin, a);
		getline(cin, b);

		bool result = solve_string(a, b);

		if (result) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}

int main() {
	solve();
	return 0;
}
