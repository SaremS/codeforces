#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif   

    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n;
        cin >> k;

        vector<int> a(k);
        for (int i=0; i<k; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i=0; i<n; i++) {
            cin >> b[i];
        }

        vector<pair<int, int>> s;
        for (int i=0; i<n; i++) {
            s.push_back(make_pair(b[i], i+1)); 
        }

        sort(s.begin(), s.end(), 
            [](auto &a, auto &b) {
                return a.first > b.first;
            }
        );

        vector<int> r;

        for (int i=0; i<n; i++) {
            int cap = s[i].first;
            int pos = s[i].second;
            for (int j=0; j<k+1 - cap; j++) {
                r.push_back(pos);                
                if (r.size() > 1000)
                    break;
            }
            if (r.size() > 1000)
                break;
        }

        if (r.size() > 1000) {
            cout << "-1" << endl;
            continue;
        }

        cout << r.size() << endl;
        for (auto &rr : r) {
            cout << rr << " "; 
        }
        cout << endl;
    }

    return 0;
}
