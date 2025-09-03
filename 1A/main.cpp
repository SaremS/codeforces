#include <iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	
	long long n,m,a;

	cin >> n >> m >> a;
	
	long long mod_n = n % a;
	long long mod_m = m % a;
	
	long long long_n = mod_n > 0 ? n + a - mod_n : n;
	long long long_m = mod_m > 0 ? m + a - mod_m : m;

	long long ans = (long_n / a) * (long_m / a);

	cout << ans;

	return 0;
}
