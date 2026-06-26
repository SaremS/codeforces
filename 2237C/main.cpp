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

        long long x;
        long long m = 0;

        for (int i=0; i<n; i++) {
            cin >> x;
            
            if (x >= m)
                m = x;
            else
                m += x;
        }

        cout << m << endl;
    }
}
