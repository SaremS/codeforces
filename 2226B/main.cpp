#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> target(n);
        for (int i=0; i<n; i++) {
            cin >> target[i];
        }

        int n_beautiful = 0;

        for (int i=0; i<n-1; i++) {
            int running_min;
            int running_max;
            int running_gcd;

            int a = target[i];
            int b = target[i+1];

            running_min = min(a,b);
            running_max = max(a,b);
            running_gcd = gcd(a,b);

            if (running_max - running_min == running_gcd)
                n_beautiful++;

            for (int j=i+2; j<n-1; j++) {
                int c = target[j];

                running_min = min(running_min,c);
                running_max = max(running_max,c);
                running_gcd = gcd(running_gcd,c);

                int left_diff = running_max - running_min;

                if (left_diff == running_gcd)
                    n_beautiful++;

                if (left_diff > running_gcd)
                    break;
            }
        }



        cout << n_beautiful << endl;
    }

    return 0;
}
