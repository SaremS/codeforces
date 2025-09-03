#include<iostream>
#include<string>
using namespace std;

string solve() {
	char next;
	char last;

	int count = 0;
	int total = 0;
	
	while (cin.get(next)){
		if (next != '0' && next != '1'){
			break;
		}

		if (total > 0 && next!=last){
			count = 0;
		}	
		count++;
		if (count==7){
			return "YES";
		}

		total++;
		last = next;
	}

	return "NO";
}

int main() {
	string result = solve();
	cout << result << endl;
	return 0;
}
