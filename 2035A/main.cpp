#include <iostream>

using namespace std;

int main() { 
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t;

  cin >> t;

  for (int i=0; i<t; i++) {
    long long int n,m,r,c;

    cin >> n >> m >> r >> c;

    long long int summed = 0;
    summed += m-c;
    summed += (n-r)*(m);
    summed += (n-r)*(m-1);

    cout << summed << endl;
  }

  return 0;
}
