#include<iostream>
#include<string>
using namespace std;

string reduceWord(string word){
	int len = word.length();
	if (len<=10){
		return word;
	}
	string first = word.substr(0,1);
	string last = word.substr(len-1,1);
	string between = to_string(len-2);

	return first + between + last;
}

void solve() {
	int n_lines;
	cin >> n_lines;

	string word;
	
	while (getline(cin, word)) {
	   cout << reduceWord(word) << endl;	
	}
}

int main() {
	solve();
	return 0;
}
