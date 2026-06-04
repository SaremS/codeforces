#include <iostream>
#include <vector>
#include <algorithm>
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
    
        int k = 0;
        vector<int> a(n);

        vector<int> index;
        vector<int> indicator(n);

        for (int j=0; j<n; j++) {
            int temp;
            cin >> temp;

            a[j] = temp;
            indicator[j] = temp<0 ? -1 : 1;
        }
        
        for (int j=n-1; j>=0; j--) {
            if (indicator[j] * pow(-1,k)  == 1) {
                k++;
                index.push_back(j+1);
            } 
        }


        cout << k << endl;

        for (int j=0; j<index.size(); j++) {
            cout << index[j] << " ";
        }
        cout << endl;
    }

}
