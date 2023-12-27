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
    bool flag = 0; 
    int sum = 0; 
    for(int i=0; i<n; i++) { 
        cin >> a[i];
        sum += a[i]; 
        if(a[i] == -1) flag = 1; 
    }
    bool flag_2 = 0; 
    for(int i=1; i<n; i++) { 
        if(a[i] == -1 && a[i-1] == -1) flag_2 = 1; 
    }
    if(flag_2) { 
        cout << sum + 4 << endl;
    } else if(flag) cout << sum << endl; 
    else { 
        cout << sum-4 << endl;
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