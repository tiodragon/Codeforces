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
    vector<ll> a(n); 
    for(ll &it:a)cin >> it; 
    sort(all(a), greater<ll>()); 
    vector<ll> b = a;
    vector<ll> c;
    sort(all(b)); 
    int i = 0, j = n-1;
    while(c.size() < n) { 
        if(c.size() % 2 == 0) { 
            c.push_back(a[i]);
            i++;
        } else { 
            c.push_back(a[j]);
            j--;
        }
    }
    vector<ll> sum = c; 
    for(int i=1; i<n; i++) sum[i] += sum[i-1];
    for(int i=1; i<n; i++) { 
        if(c[i] == sum[i-1]) { 
            cout << "NO" << endl; 
            return;
        }
    }
    cout << "YES" << endl; 
    for(auto it:c) cout << it << " "; 
    cout << endl; 
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