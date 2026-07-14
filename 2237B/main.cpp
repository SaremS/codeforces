#include<algorithm>
#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int,int>> a(n);
        vector<int> b(n);

        for (int i=0; i<n; i++) {
            int a_i;
            cin >> a_i;
            pair<int, int> p = make_pair(a_i, i);
            a[i] = p;
        }

        sort(a.begin(), a.end(),
            [](const auto& a, const auto& b) {
                return a.first < b.first;
            }
        );

        for (int i=0; i<n; i++) {
            cin >> b[i];
        }

        if (a[n-1].first > b[n-1]) {
            cout << -1 << endl;
            continue;
        }
    }

    return 0;
}
