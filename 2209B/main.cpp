#include<iostream>
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

        vector<int> result(n, 0); 

        vector<int> l(n, 0);
        vector<int> g(n, 0);
        vector<int> passed(n);

        for (int i=0; i<n; i++) {
            cin >> passed[i];
            for (int j=0; j<i; j++) {
                if (passed[j] < passed[i])
                    l[j]++;
                if (passed[j] > passed[i])
                    g[j]++;
            }
        }

        for (int i=0; i<n; i++) {
            cout << max(l[i], g[i]) << " ";
        }

        cout << endl;
    }

    return 0;
}
