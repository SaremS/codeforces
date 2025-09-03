#include <iostream>
#include <vector>

using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		
		int max = INT_MAX;
		int min = 1;
		vector<int> disallowed;

		while (n--)
		{
			int a, x;
			
			cin >> a >> x;

			if (a == 1 && x > min)
			{
				min = x;
			}
			else if (a == 2 && x < max)
			{
				max = x;
			}
			else if (a == 3)
			{
				disallowed.push_back(x);
			}
		}

		int total = max - min + 1;
		for (int i = 0; i < disallowed.size(); i++)
		{
			if (disallowed[i] >= min && disallowed[i] <= max)
			{
				total--;
			}
		}
		
		if (total < 0)
		{
			total = 0;
		}
		cout << total << endl;
	}

	return 0;
}
