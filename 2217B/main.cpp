#include<iostream>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int* a = new int[n];
        int* flips = new int[n];
        flips[0] = 0;

        for (int i=0; i<n; i++) {
            cin >> a[i];

            if (i > 0)
                flips[i] = flips[i-1];

            if (i > 0 && a[i] != a[i-1])
                flips[i]++;
        }

        int p;
        cin >> p;

        int left = flips[p-1];
        int right = flips[n-1] - flips[p-1];

        int result;
        if (left > right) {
            result = left + (a[0]!=a[p-1]);
        } else {
            result = right + (a[n-1]!=a[p-1]);
        }

        cout << result << endl;

        delete[] a;
        delete[] flips;
    }
}
