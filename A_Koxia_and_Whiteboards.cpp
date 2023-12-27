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
    int n, m; 
    cin >> n >> m;
    vector<ll> a(n), b(m); 
    for(auto &it:a) cin >> it; 
    for(auto &it:b) cin >> it; 
    sort(all(a));
    sort(all(b), greater<int>()); 
    ll cnt = 0; 
    for(int i=0; i<min(n,m); i++) {
        if(i==0) a[i] = b[i];
        else if (a[i] > b[i]) break;
        a[i] = b[i];
    }
    for(auto it:a) cnt += it; 
    // for(auto it:a) cout << it << " ";
    cout <<cnt<< endl;
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