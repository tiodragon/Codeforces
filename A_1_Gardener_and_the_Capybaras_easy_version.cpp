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
    if((s[0] == s[1]) || (s[0] == 'b' && s[1] == 'a')) { 
        cout << s[0] << " " << s[1] << " " << s.substr(2, s.length()-2) << endl;
    } else { 
        for(int i=2; i<s.length(); i++) { 
            if(s[i] == 'a') { 
                cout << s[0] << " " << s.substr(1, i-1) << " " << s.substr(i, s.length()-i) << endl;
                return;
            }
        }
        cout << s.front() << " " << s.substr(1, s.length()-2) << " " << s.back() << endl;
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