#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t;
  cin >> t;

  for (int i=0; i<t; i++) {
    int n;
    cin >> n;

    int even = 0;
    int odd = 0;

    int current_max_even = 0;
    int current_max_odd = 0;

    int v;

    for (int i=0; i<n; i++) {
      cin >> v;
      if (i%2==0) {
        even++;
        if (v > current_max_even) {
          even += v - current_max_even;
          current_max_even = v;
        }
      }else{
        odd++;
        if (v > current_max_odd) {
          odd += v - current_max_odd;
          current_max_odd = v;
        }
      }
    }

    cout << max(odd, even) << endl;
  }

  return 0;
}
