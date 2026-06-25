#include<iostream>
#include<limits>

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


        int a_i;
        int current_min = numeric_limits<int>::max();
        int result = 0;
        for (int i=0; i<n; i++) {
            cin >> a_i;
            current_min = min(current_min, a_i);
            result += current_min;
        }

        cout << result << endl;
    }

    return 0;
}
