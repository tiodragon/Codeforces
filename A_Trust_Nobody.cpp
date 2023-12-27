#include <iostream>
#include <vector>

using namespace std;

void solve() { 
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int l = 0, r = n;
    while (l < r) {
        int m = (l + r) / 2;
        bool possible = true;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (p[j] > m && i != j) {
                    count++;
                }
            }
            if (count < p[i]) {
                possible = false;
                break;
            }
        }
        if (possible) {
            r = m;
        } else {
            l = m + 1;
        }
    }

    cout << l << endl;
}

int main() {
    int nice; 
    cin >> nice; 
    while(nice--) { 
        solve(); 
    }

    return 0;
}
