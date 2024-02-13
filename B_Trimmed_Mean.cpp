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
    vector<int> a(5*n); 
    for(int i=0; i<5*n; i++) { 
        cin >> a[i]; 
    }
    vector<int> cnt; 
    sort(all(a)); 
    long double ans = 0, cnt_2 = 0 ; 
    int count = 0; 
    for(int i=0; i<5*n; i++) { 
        if(i >= n && i <= ((5*n)-n-1)) { 
            ans += a[i]; 
            cnt_2++;
            count += a[i]; 
        }
    }
    cout << setprecision(16) << ans/cnt_2; 
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