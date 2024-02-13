#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            b[i] = a[i];
        }

        sort(b.begin(), b.end());

        vector<bool> used(n, false);
        vector<int> ans(n);

        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                while (used[l]) l++;
                ans[i] = b[l];
                used[l] = true;
            } else {
                while (used[r]) r--;
                ans[i] = b[r];
                used[r] = true;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
