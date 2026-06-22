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

        vector<int> a(n);
        vector<int> d(n);

        int count = 0;

        for (int i=0; i<n; i++) {
            cin >> a[i];
            d[i] = (a[i] > i+1) ? a[i] - i - 1 : -1;
            //cout << d[i] << " ";
            count += (d[i] == -1) ? 1 : 0;
        }

        cout << count << endl;

    }

    return 0;
}
