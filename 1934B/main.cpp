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

		int result = 1e9;

for(int ones = 0; ones <= 2; ones++){
            for(int threes = 0; threes <= 1; threes++){
                for(int sixes = 0; sixes <= 4; sixes++){
                    for(int tens = 0; tens <= 2; tens++){
                        int brute_sum = 1*ones + 3*threes + 6*sixes + 10*tens;
                        if(brute_sum <= n && (n-brute_sum)%15 == 0){
                            result = min(result, ones + threes + sixes + tens + (n-brute_sum)/15);
                        }
                    }
                }
            }
        }

	cout << result << endl;

	}
	return 0;
}
