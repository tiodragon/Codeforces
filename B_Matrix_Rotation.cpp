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

bool check(int a, int b, int c, int d) { 
    if(a < b && a < c && b < d && c < d) return true; 
    return false;
}

void solve() {
    int a, b, c, d; 
    cin >> a >> b >> c >> d; 
    if(check(a, b, c, d) || check(c, a, d, b) || check(d, c, b, a) || check(b, d, a, c)) {
        cout << "YES" << endl; 
    } else { 
        cout << "NO" << endl; 
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