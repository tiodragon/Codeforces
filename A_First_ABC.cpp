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
    string s; 
    cin >> s; 
    vector<bool> a(3, 0); 
    for(int i=0; i<n; i++) { 
        if(s[i] == 'A') a[0] = 1;
        if(s[i] == 'B') a[1] = 1;
        if(s[i] == 'C') a[2] = 1;
        bool check = 1; 
        for(auto it:a) { 
            if(!it) check = 0; 
        }
        if(check) {
            cout << i + 1 << endl; 
            return; 
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