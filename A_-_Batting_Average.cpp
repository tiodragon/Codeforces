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
    double a, b; 
    cin >> a >> b; 
    double c = b/a; 
    cout.precision(3);
    // cout <<  c << endl;
    string s = to_string(c);
    for(int i=0; i<s.length(); i++) { 
        if(s[i] == '.') { 
            cout << s[i];
            cout << s[i+1];
            cout << s[i+2];
            if(s[i+4] >= '5') { 
                cout << s[i+3] - '0' + 1;
            } else { 
                cout << s[i+3];
            }
            return;
        }
        cout << s[i];
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