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
    int n, m, k; 
    cin >> n >> m >> k; 
    vector<int> p(n), a(m); 
    map<int, int> mp; 
    // mp - > location
    for(int i=0; i<n; i++) { 
        cin >> p[i];
        mp[p[i]] = i;
    }
    for(int i=0; i<m; i++) { 
        cin >> a[i]; 
    }
    int ans = INT_MAX;
    for(int i=1; i<n; i++) { 
        if()
    }
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