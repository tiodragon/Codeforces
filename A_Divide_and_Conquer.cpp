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
    ll cnt = 0; 
    for(int i=0; i<n; i++) { 
        cin >> a[i];
        cnt += a[i]; 
    }
    vector<int> b = a; 
    for(int i=0; i<n; i++) { 
        int x = b[i]; 
        int cnts = 0; 
        if(x%2==1) { 
            while(x%2==1) {
                x/=2;
                cnts++;
            }
        } else { 
            while(x%2==0) {
                x/=2;
                cnts++;
            }
        }
        b[i] = cnts;
    }
    if(cnt%2==0) { 
        cout << 0 << endl; 
    } else { 
        int mn = *min_element(all(b)); 
        cout << mn << endl; 
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