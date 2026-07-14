#include<iostream>
#include<string>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;

    while (t--) {
        string line;
        cin >> line;
        int n = line.length();
        
        int result = 0;
        
        result += line[0] == 'u';
        result += line[n-1] == 'u';

        for (int i=2; i<n-1; i++) {
            if (line[i] == line[i-1] && line[i] == 'u') {
                result++;
                line[i] = 's';
            }
        }

        cout << result << endl;
    }

    return 0;
}
