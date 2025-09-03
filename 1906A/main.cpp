#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<char, pair<int,int> > a, pair<char, pair<int,int> > b) {
	return a.first < b.first;
}

bool is_next(pair<int, int> a, pair<int, int> b) {
	int abs_diff_first = abs(a.first - b.first);
	int abs_diff_second = abs(a.second - b.second);

	return abs_diff_first <= 1 && abs_diff_second <= 1;
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	vector<pair<char, pair<int,int> > > v;

	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			char c;
			cin >> c;
			v.push_back(make_pair(c, make_pair(i, j)));
		}
	}

	sort(v.begin(), v.end(), compare);

	char minimal = v[0].first;

	string result_str = "CCC";

	for (int i=0; i<7; i++) {
		char candidate_i = v[i].first;
		if (candidate_i != minimal) {
			break;
		}

		pair<int, int> pos_i = v[i].second;

		for (int j=0; j<9; j++) {
			if (i == j) {
				continue;
			}

			char candidate_j = v[j].first;
			pair<int, int> pos_j = v[j].second;

			if (!is_next(pos_i, pos_j)) {
				continue;
			}


			for (int k=0; k<9; k++) {
				if (i == k || j == k) {
					continue;
				}

				char candidate_k = v[k].first;
				pair<int, int> pos_k = v[k].second;

				if (!is_next(pos_j, pos_k)) {
					continue;
				}

				string candidate_str; 
				candidate_str.push_back(candidate_i);
				candidate_str.push_back(candidate_j);
				candidate_str.push_back(candidate_k);
				if (candidate_str < result_str) {
					result_str = candidate_str;
				}
			}	
		}

		


	}
	
	for (int i=0; i<3; i++) {
		cout << result_str[i];
	}


}
