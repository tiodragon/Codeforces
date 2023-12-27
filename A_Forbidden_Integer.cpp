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
    int n, m, a; 
    cin >> n >> m >> a; 
    if(a != 1) { 
        cout << "YES" << endl; 
        cout << n << endl; 
        while(n--) cout << 1 << " "; 
        cout << endl; 
    } else {
        if(a == 1 && m == a) { 
            cout << "NO" << endl; 
            return; 
        } 
        if(m == 2) { 
            if(n % 2 == 0) { 
                cout << "YES" << endl; 
                cout << n/2 << endl;
                n /= 2;
                while(n--) cout << 2 << " "; 
                cout << endl; 
                return;
            } else { 
                cout << "NO" << endl; 
                return; 
            }
        } else { 
            cout << "YES" << endl; 
            if(n % 2 == 0) { 
                cout << n/2 << endl; 
                n/=2; 
                while(n--) cout << 2 << " "; 
                cout << endl; 
            } else { 
                cout << n/2 << endl; 
                n-=3; n/=2; 
                cout << 3 << " ";
                while(n--) cout << 2 << " "; 
                cout << endl; 
            }
        }
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