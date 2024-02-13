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
    if(n % 2 == 1) { 
        if(n <= 3) {cout << "NO" << endl; return;}
        else cout << "YES ";
        int m = n/2;
        while(m--) { 
            cout << n/2 - 1 << " " << -(n/2-1) - 1 << " ";
        }
        cout << n/2 - 1 << endl;
    } else { 
        int m = n/2; 
        cout << "YES" << endl;
        while(m--) {
            cout << -1 << " " << 1 << " ";
        }
        cout << endl;
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