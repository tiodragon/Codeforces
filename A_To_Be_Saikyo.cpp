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
    int cnt = 0; 
    int first = 0; 
    cin >> first; 
    vector<int> a(n-1); 
    if(n == 1) {
        cout << 0 << endl; 
        return; 
    }
    for(int i=0; i<n-1; i++) { 
        cin >> a[i]; 
    }
    int mx = *max_element(all(a)); 
    while(first <= mx) { 
        cnt++;
        first++;
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