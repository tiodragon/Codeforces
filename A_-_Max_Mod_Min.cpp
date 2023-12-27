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
    bool check = false; 
    set<int> s;
    for(auto &it:a) {cin >> it; if(it == 1) check = 1; s.insert(it);}
    if(check) { 
        cout << n-1 << endl; 
    } else {
        int cnt = 0; 
        int mx = max_element(all(a)) - a.begin(); 
        int mn = min_element(all)
        while(a[a.size()-2] != -1) { 
            
        }
    }
    
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