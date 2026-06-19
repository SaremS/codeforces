#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>

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

        for (int i=0; i<n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int current_count = 1;
        int last_val = a[0];
        int current_start_pos = 0;
        int left_count, right_count;

        vector<tuple<int, int>> outcome;

        

        for (int i=1; i<n; i++) {
            int target = a[i];
            if (target > last_val) {
                left_count = current_start_pos;
                right_count = n - current_start_pos - current_count;
                outcome.push_back(make_tuple(current_count, max(left_count, right_count)));
                last_val = target;
                current_count = 0;
                current_start_pos = i;
            }
            current_count++;
        }

        outcome.push_back(make_tuple(current_count, current_start_pos));


        sort(outcome.begin(), outcome.end(),
                [](auto &a, auto &b) {
                    if (get<0>(a) != get<0>(b))
                        return get<0>(a) < get<0>(b);
                    return get<1>(a) > get<1>(b);
                });

        for (auto &o: outcome)
            cout << get<0>(o) << "-" << get<1>(o) << " ";

        int result = get<1>(outcome.back());

        cout << endl;
        cout << result << endl;
    }


    return 0;
}
