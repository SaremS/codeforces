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
	
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		

		vector<char> a,b,c;

		for (int j = 0; j < n; j++)
		{
			char x;
			cin >> x;
			a.push_back(x);
		}

		for (int j = 0; j < n; j++)
		{
			char x;
			cin >> x;
			b.push_back(x);
		}

		bool has_returned = false;

		for (int j = 0; j < n; j++)
		{

			char x;
			cin >> x;

			if (!has_returned && a[j] != x && b[j] != x)
			{
				cout << "YES" << endl;
				has_returned = true;
			} else if (!has_returned && j == n-1)
			{
				cout << "NO" << endl;
				has_returned = true;
			}
		}
		
		


	}

	return 0;
}
