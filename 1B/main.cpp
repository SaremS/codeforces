#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<cmath>

using namespace std;


bool is_digit(char c) {
    if (c=='0')
        return true;
    if (c=='1')
        return true;
    if (c=='2')
        return true;
    if (c=='3')
        return true;
    if (c=='4')
        return true;
    if (c=='5')
        return true;
    if (c=='6')
        return true;
    if (c=='7')
        return true;
    if (c=='8')
        return true;
    if (c=='9')
        return true;
    return false;
}


bool is_excel(string candidate) {
    if (candidate[0] != 'R')
        return true;

    int i=0;
    int l=candidate.length();

    while (i<l && !is_digit(candidate[i])) 
        i++; 
   
    if (i==l)
        return false;

    while (i<l && is_digit(candidate[i]))
        i++;

    if (i==l)
        return true;

    return false;
}


pair<int,int> from_excel(string candidate) {
    int i=0;
    int l=candidate.length();

    int col = 0;
    vector<int> digits;

    while (!is_digit(candidate[i])) {
        digits.push_back(candidate[i] - 'A' + 1);
        i++; 
    }

    for (i=0; i<digits.size(); i++) {
        col += digits[digits.size()-1-i] * pow(26, i);
    }

    int row = stoi(candidate.substr(i, l-i));

    return make_pair(row, col);
}


string dec_to_26(int c) {
    string result;

    while (c > 0) {
        c--;
        int rep = c % 26;
        char r = 'A' + rep;
        result.push_back(r);
        c /= 26;
    }

    reverse(result.begin(), result.end());
    return result;
}


pair<string, string> to_excel(string candidate) {
    string row;
    int l = candidate.length();

    int i=1;

    while (is_digit(candidate[i])) {
        row.push_back(candidate[i]);
        i++;
    }
    i++;

    string col;

    while (i<l) {
        col.push_back(candidate[i]);
        i++;
    }
    
    int colint = stoi(col);
    string col_result = dec_to_26(colint);

    return make_pair(col_result, row);
}



int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    
    while (t--) {
        string candidate;
        cin >> candidate;

        if (is_excel(candidate)) {
            pair<int,int> c = from_excel(candidate);
            cout << "R" << c.first << "C" << c.second << endl;
        } else {
            pair<string,string> c = to_excel(candidate);
            cout << c.first << c.second << endl;
        }
    }

    return 0;

}
