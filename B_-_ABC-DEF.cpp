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
    ll a, b, c, d, e, f; 
    cin >> a >> b >> c >> d >> e >> f; 
    a %= 998244353LL;
    b %= 998244353LL;
    c %= 998244353LL;
    d %= 998244353LL;
    e %= 998244353LL;
    f %= 998244353LL;
    ll x = a*b; x %= 998244353LL;
    x *= c; x %= 998244353LL;
    ll y = d*e; y %= 998244353LL;
    y *= f; y %= 998244353LL;
    cout << (x-y) % 998244353LL;
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