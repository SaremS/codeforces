#include <iostream>

using namespace std;


int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t;

  cin >> t;

  int n, k;

  for (int i=0; i<t; i++) {
    cin >> n >> k;

    int result = 0;

    while (n > 0 && k > 1) {
      int mod = n % k;
      result += mod;

      n = (n-mod) / k;
    }
    
    if (k == 1) {
      result += n;
    }
      
    cout << result << endl;
  }

  return 0;
}
