#include <iostream>
#include <set>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif
	
	int n, l;
	cin >> n >> l;
	
	set<int> s;
	int x;

	for (int i=0; i<n; i++)
	{
		cin >> x;
		s.insert(x);
	}

	int last_element = -*s.begin();
	int max_diff = 0;

	for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it) {
		int diff = *it - last_element;
		if (diff > max_diff)
			max_diff = diff;

		last_element = *it;
    	}

	int diff = (l - last_element) * 2;
	if (diff > max_diff)
		max_diff = diff;
	
	double result = max_diff / 2.0;

	//print with 10 decimal places
	cout.precision(10);
	cout << result;
	
	return 0;
}


