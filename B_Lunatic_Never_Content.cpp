#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_palindrome(const vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n/2; i++) {
        if (v[i] != v[n-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x_min = 1;
    int x_max = *max_element(a.begin(), a.end());

    int ans = 1;
    for (int x = x_min; x <= x_max; x++) {
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = a[i] % x;
        }
        if (is_palindrome(v)) {
            ans = x;
        }
    }

    cout << ans << endl;

    return 0;
}
