#include<algorithm>
#include<iostream>
#include<limits>
#include<string>


using namespace std;

int alternate_end(string line) {
    int line_len = line.length();
    if (line_len<=1)
        return -1;

    for (int i=1; i<line_len; i++) {
        if (line[i] == line[i-1])
            return i-1;
    }

    return -1;
}

int alternate_start(string line) {
    int line_len = line.length();
    if (line_len<=1)
        return -1;

    for (int i=line_len-1; i>0; i--) {
        if (line[i] == line[i-1])
            return i;
    }

    return -1;
}

bool is_alternating_string(string line) {
    if (alternate_end(line) == -1)
        return true;
    return false;
}

string invert(string line) {
    string result = "";
    for (auto &c : line) {
        result += c == 'a' ? 'b' : 'a';
    }

    return result;
}

string reverse(string line) {
    reverse(line.begin(), line.end());
    return line;
}

bool candidate_a(string line, int end) {
    int size = line.length();

    int ss_start = end+1;
    int ss_len = size - end - 1;

    line.replace(ss_start, ss_len, reverse(line.substr(ss_start, ss_len)));
    
    return is_alternating_string(line);
}

bool candidate_b(string line, int end) {
    int size = line.length();

    int ss_start = end+1;
    int ss_len = size - end - 1;

    line.replace(ss_start, ss_len, reverse(invert((line.substr(ss_start, ss_len)))));

    return is_alternating_string(line);
}

bool candidate_c(string line, int end, int start) {
    if (end == start-1)
        return false;

    int size = line.length();

    int ss_start = end+1;
    int ss_len = start-end-1;

    line.replace(ss_start, ss_len, reverse(line.substr(ss_start, ss_len)));

    return is_alternating_string(line);
}

bool candidate_d(string line, int end, int start) {
    if (end == start-1)
        return false;

    int size = line.length();

    int ss_start = end+1;
    int ss_len = start-end-1;

    line.replace(ss_start, ss_len, reverse(invert(line.substr(ss_start, ss_len))));

    return is_alternating_string(line);
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;


    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (t--) {
        string line;
        getline(cin, line);

        int end = alternate_end(line);
        int start = alternate_start(line);

        if (candidate_a(line,end)) {
            cout << "YES" << endl;
            continue;
        }

        if (candidate_b(line,end)) {
            cout << "YES" << endl;
            continue;
        }

        if (candidate_c(line,end,start)) {
            cout << "YES" << endl;
            continue;
        }

        if (candidate_d(line,end,start)) {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }


    return 0;
}
