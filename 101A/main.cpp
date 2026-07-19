#include<iostream>
#include<string>
#include<utility>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    string line;
    int k;
    getline(cin, line);
    cin >> k;
    
    int n = line.length();
    vector<pair<char, int>> counts;

    for (char c='a'; c<='z'; c++) {
        counts.push_back(make_pair(c, 0));
    }

    int uniques = 0;

    for (int i=0; i<n; i++) {
        char target = line[i];
        counts[target - 'a'].second++;
        uniques += (counts[target - 'a'].second == 1);
    }

    sort(counts.begin(), counts.end(), 
        [](const auto& a, const auto& b) {
            return a.second < b.second;
    });

    for (const auto& c : counts) {
        if (c.second > 0 && c.second <= k) {
            line.erase(remove(line.begin(), line.end(), c.first), line.end());
            k -= c.second;
            uniques--;
        }
    } 

    cout << uniques << '\n';
    cout << line << '\n';

    return 0;
}
