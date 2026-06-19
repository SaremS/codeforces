#include<iostream>
#include<vector>
#include<algorithm>


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

        vector<int> r(n);

        for (int i=0; i<n; i++)
            cin >> r[i];

        if (n == 1) {
            cout << r[0] << endl;
            continue;
        }

        sort(r.begin(), r.end(),
                [](auto &a, auto &b) {
                    return a > b;
                }
        );

        bool exit_early = false;

        for (int i=1; i<n; i++) {
            if (r[i] == r[i-1]) {
                cout << -1 << endl;
                exit_early = true;
                break;
            } 
        }

        if (exit_early)
            continue;

        for (int i=0; i<n; i++) {
            cout << r[i] << " ";
        }
        
        cout << endl;
    }
}
