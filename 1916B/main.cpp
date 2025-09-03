#include <iostream>

using namespace std;


long long int gcd(long long int a, long long int b) {
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;

	while (t--) {
		long long int a,b;
		cin >> a >> b;

		cout << a*b/gcd(a,b) << endl;

	}
	
	return 0;
}
