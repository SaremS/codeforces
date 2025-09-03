#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
	#endif

	string target;

	cin >> target;

	target[0] = toupper(target[0]);
	
	cout << target;

	return 0;
}
