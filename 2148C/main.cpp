#include <iostream>
#include <cmath>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t>0) {
		t--;

		long long n,m;
		cin >> n >> m;

		long long l = 0;
		int s = 0;
		long long total = 0;

		long long a;

		while (n>0) {
			n--;
			int b;
			cin >> a >> b;

			long long diff_mins = a - l;

			int is_diff_sides = abs(b - s);
			int is_diff_mins_odd = diff_mins % 2;

			total += diff_mins - (1-is_diff_sides) * is_diff_mins_odd - is_diff_sides * (1-is_diff_mins_odd);

			l = a;
			s = b;
		}

		total += m - a;
		cout << total << endl;
	}
	
	return 0;
}
