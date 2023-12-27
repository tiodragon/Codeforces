#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = int_fast64_t;

bool isPalindrome(const string& S, int start, int end) {
    while (start < end) {
        if (S[start] != S[end])
            return false;
        start++;
        end--;
    }
    return true;
}

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    if (n == 1) {
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (!isPalindrome(s, i, j))
                ans = max(ans, j - i + 1);
        }
    }
    cout << (!ans ? -1 : ans) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1, t = 1;
    cin >> tc;
    while (tc--) {
        solve();
        t++;
    }

    return 0;
}
