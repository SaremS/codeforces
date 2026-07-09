#include<iostream>
#include<cmath>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;

    while (t--) {
        long a, x, b;
        cin >> a >> b >> x;

        long current_min = abs(a - b);
        long maxops = 0;

        long gr = max(a,b);
        long sm = min(a,b);

        while (maxops < current_min) {
            long next = gr / x;
            gr = max(next, sm);
            sm = min(next, sm);

            current_min = min(maxops + 1 + abs(gr-sm), current_min);
            if (gr-sm == 0) {
                current_min = min(maxops + 1, current_min);
                break;
            }

            maxops++;
        }
        
        cout << current_min << endl;
    }

    return 0;
}
