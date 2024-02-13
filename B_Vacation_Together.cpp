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
    int n,m;
    cin >> n >> m; 
    vector<string> a(n); 
    for(int i=0; i<n; i++) { 
        cin >> a[i];
    }
    int cnt = 0;
    int cur = 0;
    for(int i=0; i<m; i++) { 
        bool check = 1;
        for(int j=0; j<n; j++) { 
            if(a[j][i] == 'x') check = 0;
        }
        if(check) cur++;
        else cur = 0; 
        cnt = max(cnt, cur); 
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int tc = 1, t = 1;
    // cin >> tc;
    while(tc--) {
        // cout << "Case #" << t  << ": "; 
        solve(); t++;
    }
}