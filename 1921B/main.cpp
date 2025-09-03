#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;

		vector<char> a(m);
	
		int oneup = 0;
		int zeroup = 0;

		for (int j = 0; j < m; j++)
		{
			char b;
			cin >> b;
			a[j] = b;
		}

		for (int j = 0; j < m; j++)
		{
			char here;
			cin >> here;

			if (here=='1' && a[j]=='0')
				oneup++;
			else if (here=='0' && a[j]=='1')
				zeroup++;
		}

		cout << max(oneup, zeroup) << endl;

	}
}
