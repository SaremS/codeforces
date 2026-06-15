#include <iostream>
#include <vector>

using namespace std;


vector<int> make2(int l, int r) {
    vector<int> result(8);

    result[0] = l;
    result[1] = r;
    result[2] = r;
    result[3] = l;
    result[4] = r;
    result[5] = l;
    result[6] = l;
    result[7] = r;

    return result;
}

vector<int> make3(int l, int m, int r) {
    vector<int> result(12);

    result[0] = l;
    result[1] = l;
    result[2] = m;
    result[3] = l;
    result[4] = m;
    result[5] = r;
    result[6] = l;
    result[7] = r;
    result[8] = m;
    result[9] = m;
    result[10] = r;
    result[11] = r;

    return result;
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> solve(n*4); 
        int current_pos = 0;

        if (n%2 == 1) {
            vector<int> insert = make3(1,2,3);
            solve.insert(solve.begin() + current_pos, insert.begin(), insert.end());
            current_pos += 3;
        }
        
        while (n-current_pos>0) {
            vector<int> insert = make2(current_pos+1, current_pos+2);
            solve.insert(solve.begin() + current_pos*4, insert.begin(), insert.end());
            
            current_pos += 2;
        }

        for (int i=0; i<4*n; i++) {
            cout << solve[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
