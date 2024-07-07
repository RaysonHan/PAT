#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string check_PAT_string(const string &s) {
    for (char c : s) {
        if (c != 'P' && c != 'A' && c != 'T') {
            return "NO";
        }
    }

    int p_count = 0, t_count = 0;
    size_t p_index = -1, t_index = -1;

    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == 'P') {
            p_count++;
            p_index = i;
        } else if (s[i] == 'T') {
            t_count++;
            t_index = i;
        }
    }

    if (p_count != 1 || t_count != 1 || p_index >= t_index) {
        return "NO";
    }

    string a = s.substr(0, p_index);
    string b = s.substr(p_index + 1, t_index - p_index - 1);
    string c = s.substr(t_index + 1);

    for (char ch : a) {
        if (ch != 'A') {
            return "NO";
        }
    }
    for (char ch : c) {
        if (ch != 'A') {
            return "NO";
        }
    }

    if (b.empty() || !all_of(b.begin(), b.end(), [](char ch) { return ch == 'A'; })) {
        return "NO";
    }

    if (c.length() == a.length() * b.length()) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> results;
    for (int i = 0; i < n; ++i) {
        string test_str;
        getline(cin, test_str);
        results.push_back(check_PAT_string(test_str));
    }

    for (const string &result : results) {
        cout << result << endl;
    }

    return 0;
}
