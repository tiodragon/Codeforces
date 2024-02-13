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
    char d = 'A'; d--;
    vector<vector<int>> a(n, vector<int>(m)); 
    for(int i=0; i<n; i++) { 
        for(int j=0; j<m; j++) { 
            cin >> a[i][j];
            if(a[i][j] == 0) { 
                cout << '.'; 
            } else { 
                char c = d; 
                while(a[i][j]--) { 
                    c++;
                }
                cout << c;
            }
        }
        cout << endl; 
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