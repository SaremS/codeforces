#include <iostream>

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


		int v[n];
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		int result = 0;

		for (int i = 0; i < n; i++) {
			for (int j = i+1; j<n; j++) {
				for (int k = j+1; k<n; k++) {
					int a = v[i];				
					int b = v[j];
					int c = v[k];

					if (a==0 || b==0 || c==0) {
						continue;
					}

					int a2 = a*a;
					int b2 = b*b;
					int c2 = c*c;

					int cos = (b2 + c2 - a2) / (2*b*c);

					if (cos < 1 && cos > -1) {
						result++;
					}


				}
			}
		}

		cout << result << endl;
	}

	return 0;
}
