#include<iostream>

using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int n, k, n_1;

    cin >> n >> k >> n_1;

    int remainder = (n % n_1);
    int r_1;

    if (remainder > 0)
        r_1 = (n + n_1 - (n%n_1)) / n_1;
    else
        r_1 = n / n_1;

    if (r_1*r_1 <= k) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}
