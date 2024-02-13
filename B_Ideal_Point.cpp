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
    vector<pair<int, int>> a(n); 
    int m_pwr = 0; 
    int before = 0, after = 0; 
    for(int i=0; i<n; i++) { 
        int x, y; 
        cin >> x >> y; 
        // a.push_back(make_pair(x, y)); 
        if(m >= x && m <= y) {
            m_pwr++;
        }
        if(m-1 >= x && m-1 <= y) {
            before++;
        }
        if(m+1 >= x && m+1 <= y) {
            after++;
        }
        if(y == m-1) before--;
        if(x == m+1) after--;

    }
    // cout << before << " " << m_pwr << " " << after << " ";
    if(m_pwr > before && m_pwr > after) { 
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