#include <iostream>

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
		int left = 1000;
		int right = -1000;
		int up = -1000;
		int down = 1000;

		for (int j = 0; j < 4; j++)
		{
			int x, y;
			cin >> x >> y;
			left = min(left, x);
			right = max(right, x);
			up = max(up, y);
			down = min(down, y);
		}

		int width = right - left;
		int height = up - down;

		cout << width * height << endl;

	}
	return 0;
}
