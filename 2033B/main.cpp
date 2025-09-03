#include <iostream>
#include <unordered_map>
#include <utility>
#include <algorithm>

using namespace std;

struct pair_hash {
    std::size_t operator()(const std::pair<int, int>& p) const {
        return std::hash<int>()(p.first) ^ (std::hash<int>()(p.second) << 1);
    }
};

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t;

  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    unordered_map<std::pair<int, int>, int, pair_hash> hashmap;

    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        int h; 
        cin >> h;

        if (h < 0){
          int minimum = min(i, j);
          pair<int,int> p = make_pair(i - minimum, j - minimum);

          auto it = hashmap.find(p);
          if (it != hashmap.end()) {
            if (hashmap[p] > h) {
              hashmap.erase(it);
              hashmap[p] = h;
            }
          } else {
            hashmap[p] = h;
          }

        }
      }
    }

    int result = 0;
    for (const auto& [key, value] : hashmap) {
      result -= value;
    }

    cout << result << endl;
  }
  return 0;
}
