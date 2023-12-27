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
    string s; 
    cin >> s;
    int n = s.length(); 
    for(int i=1; i<n; i++) { 
        if(s[i] == 'Y') { 
            if(s[i-1] == 's') continue;
            else { 
                cout << "NO" << endl; 
                return;
            }
        } else if(s[i] == 'e') { 
            if(s[i-1] == 'Y') continue;
            else {
                cout << "NO" << endl;
                return;
            }
        } else if(s[i] == 's') { 
            if(s[i-1] == 'e') {
                continue;
            } else {
                cout << "NO" << endl;
                return; 
            }
        } else { 
            cout << "NO" << endl; 
            return;
        }
    }
    if(n == 1) { 
        if(s[0] == 'Y') { 
            
        } else if(s[0] == 'e') { 
            
        } else if(s[0] == 's') { 
            
        } else { 
            cout << "NO" << endl; 
            return;
        }
    }
    cout << "YES" << endl;
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