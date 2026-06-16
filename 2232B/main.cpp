#include<iostream>
#include<vector>
#include<cmath>
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


        long long current_mean = numeric_limits<long long>::max();
        vector<long long> solution(n);

        long long running_sum = 0;
        
        for (int i=1; i<=n; i++) {
            int s;
            cin >> s;

            running_sum += s;

            long long new_mean = running_sum / i;

            solution[i-1] = min(current_mean, new_mean);
            current_mean = solution[i-1];
        }

        for (auto x : solution) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
