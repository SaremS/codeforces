#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> values;
	
	int input;
	int remainder_sum = 0;
	while (cin >> input){
		remainder_sum += input;
		values.insert(lower_bound(values.cbegin(), values.cend(), input), input);
	}

	int my_sum = 0;
	int n_coins = 0;

	for (int i=0; i<n; i++) {
		int val = values[n-1-i];

		my_sum += val;
		remainder_sum -= val;

		n_coins++;
		
		if (my_sum > remainder_sum) {
			break;
		}
	}

	cout << n_coins << endl;
}

int main() {
	solve();
	return 0;
}
