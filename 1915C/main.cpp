#include <iostream>
#include <cmath>

using namespace std;

int main () {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif

  int t;
  cin >> t;

  for (int i=0; i<t; i++) {
    int n;
    cin >> n;

    unsigned long long int sqSum = 0;

    for (int j=0; j<n; j++) {
      unsigned long long int v; 
      cin >> v;

      sqSum += v;
    }

    unsigned long long int sqRoot = sqrt(sqSum);
    if (sqRoot * sqRoot == sqSum) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
