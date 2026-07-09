#include<iostream>

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

        long long result = 0;

        for (int b=1; b<=n; b++) {
            result += 1ll * (n / b) * (n / b);
        }

        cout << result << endl;
    }
    
    return 0;
}

