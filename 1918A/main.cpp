#include <iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	
	int t;
	cin >> t;
	while(t--)	
	{	int n,m;
	cin >> n >> m;

	m -= m%2;

	cout << (m/2)*n << endl;
}
	return 0;
}
