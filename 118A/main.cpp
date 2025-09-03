#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	#endif

	std::vector<char> consonants;	
	char input;

	while (cin >> input) {
		char lower = tolower(input);
		if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u' && lower != 'y') {
			consonants.push_back(lower);
		}
	}

	for (int i = 0; i < consonants.size(); i++) {
		cout << "." << consonants[i];
	}

	return 0;

}
