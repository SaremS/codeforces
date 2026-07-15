#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int compare(vector<int> a, vector<int> b, int n) {
    int count = 0;

    for (int i=0; i<n; i++) {
        if (a[i] < b[i])
            return -1;
        count += a[i] - b[i];
    }

    return count;
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        vector<int> b(n);

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        for (int i=0; i<n; i++) {
            cin >> b[i];
        }

        int direct = compare(a, b, n);

        if (direct >= 0) {
            cout << direct << endl;
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int sorted = compare(a, b, n);

        if (sorted >= 0) {
            cout << sorted + c << endl;
            continue;
        }

        cout << -1 << endl;
    }
}
