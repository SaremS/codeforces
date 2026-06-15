#include <iostream>

using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    cin.ignore(10000, '\n');

    while (t--) {
        char c;
        unsigned int counter = 0;
        int last_one_notwo = 0;
        while (cin.get(c) && c != '\n') {
            if (c == '4') {
                counter++;
            }
            if (last_one_notwo && c == '2') {
                counter++;
                last_one_notwo = false;
            }
            if (c == '1' || c == '3') {
                last_one_notwo = true;
            }
        }
        cout << counter << endl;
    }

    return 0;
}
