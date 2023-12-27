#include <bits/stdc++.h>
#define ar array
#define endl '\n'
#define all(z) z.begin(),z.end()
#define read(a) for(auto &it:a)cin>>it;
#define vi vector<int> 
#define mii map<int, int> 
#define vvi vector<vector<int>> 
using namespace std;
using ll = int_fast64_t;

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const int MAX = INT_MAX;
const ll LMAX = LONG_LONG_MAX;

void solve() {
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for(int i=0; i<n; i++) {
        cin >> a[i]; 
    }
    int mx_before = 0; 
    int mn_before = INT_MAX; 
    for(int i=0; i<n-1; i++) { 
        mx_before = max(a[i], mx_before); 
        mn_before = min(a[i], mn_before); 
    }
    int mx_after = 0; 
    int mn_after = INT_MAX; 
    for(int i=1; i<n; i++) { 
        mx_after = max(a[i], mx_after);
        mn_after = min(a[i], mn_after);
    }
    int ans = max(a[n-1] - mn_before, mx_after - a[0]);
    int ans_2 = a[n-1] - a[0]; 
    for(int i=0; i<n-1; i++) { 
        ans_2 = max(ans_2, a[i] - a[i+1]); 
    }
    cout << max(ans, ans_2) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int tc = 1, t = 1;
    cin >> tc;
    while(tc--) {
        // cout << "Case #" << t  << ": "; 
        solve(); t++;
    }
}