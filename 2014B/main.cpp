#include <iostream>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif

  int t;
  cin >> t;
  
  for (int i=0; i<t; i++) {
    int n, k;

    cin >> n >> k;


    int n_even, k_even;
    n_even = (n+1)%4 >= 2 ? -1 : 1;

    k_even = (n-k)%2 == 0 ? 1 : -1;

    int result = n_even * k_even;
    
    if (result == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  }

  return 0;
}


