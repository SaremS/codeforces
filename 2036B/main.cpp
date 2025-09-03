#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t;
  cin >> t;

  for (int i=0; i<t; i++) {
    int n,k;
    cin >> n >> k;

    vector<int> brandCosts(k, 0);
    for (int j=0; j<k; j++) {
      int b, c;
      cin >> b >> c;

      brandCosts[b-1] += c;

    }
    sort(brandCosts.begin(), brandCosts.end(), [](const int& l, const int& r) {
      return l < r; 
    });

    int totalCost = 0;
    int currentBrand = -1;

    while (n > 0 && !brandCosts.empty()) {
      int latest = brandCosts.back();
      totalCost += latest;
      brandCosts.pop_back();
      n--;
    }



    cout << totalCost << endl;
  }


}
