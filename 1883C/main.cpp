#include <iostream>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t--) {
		int n, k;

		cin >> n >> k;
			
		int current_min = 6;
		
		if (k==4 && n > 1) {
			int mod_twos = 0;
			for (int i=0; i<n; i++) {
				int c;
				cin >> c;

				int mod_diff = 4 - (c%4);

				if (mod_diff==1 && current_min > 1) {
					current_min = 1;
				}

				if (c%2==0) {
					mod_twos++;
				}

				if (c%4==0) {
					current_min = 0;
				}
			}

			int mtwos = 2 - mod_twos;

			if (mtwos < current_min) {
				current_min = max(0,mtwos);
			}
		} else {	
			for (int i=0; i<n; i++) {
				int c;
				cin >> c;
				

				int mod = (c % k);
				
				if (mod == 0) {
					current_min = 0;
				}
				
				int mod_diff = k - mod;

				if (mod_diff < current_min) {
					current_min = mod_diff;
				}
			}
		}
		
		cout << current_min << endl;
	}
	
	return 0;
}
