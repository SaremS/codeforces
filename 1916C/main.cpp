#include <iostream>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	
	int T;
	cin >> T;

	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;

		int running_sum = 0;
		int running_turns = 0;

		int running_odd = 0;
		int running_even = 0;


		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;

			running_sum += x;
			running_turns += 1;

			if (x % 2 == 0)
				running_even += 1;
			else
				running_odd += 1;
			
			if (i==0)
				cout << running_sum << endl;

		}

	}

	return 0;
}
