#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool is_palindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-i-1]) {
            return false;
        }
    }
    return true;
}

bool is_possible_palindrome(const string& s, const vector<string>& prefixes, const vector<string>& suffixes) {
    int n = s.length();
    for (const string& p : prefixes) {
        if (p.length() == n-1) {
            string candidate = p + s;
            if (is_palindrome(candidate)) {
                return true;
            }
        }
    }
    for (const string& sfx : suffixes) {
        if (sfx.length() == n-1) {
            string candidate = s + sfx;
            if (is_palindrome(candidate)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> prefixes, suffixes;
        for (int i = 0; i < 2*n-2; i++) {
            string s;
            cin >> s;
            if (s.length() < n-1) {
                prefixes.push_back(s);
            } else {
                suffixes.push_back(s);
            }
        }
        sort(prefixes.begin(), prefixes.end());
        sort(suffixes.begin(), suffixes.end());
        string s = prefixes[0] + suffixes.back();
        if (is_possible_palindrome(s, prefixes, suffixes)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
