#include <iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	int M, N;
	cin >> M >> N;

	int result = M * N / 2;

	cout << result;

    	return 0;
}

