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
const int alpa = 27;

int n, m, cur, possible;
string s; 
int big[alpa], small[alpa]; 

void solve() {
    cin >> n >> m >> s; 
    memset(big, 0, sizeof(big));
    memset(small, 0, sizeof(small));
    for(auto it:s) { 
        if(it == towlower(it)) {
            small[it-'a']++; 
        } else { 
            big[it - 'A']++;
        }
    }
    cur = 0, possible = 0; 
    for(int i=0; i<27; i++) { 
        cur += min(big[i], small[i]); 
        possible += (big[i] + small[i])/2; 
    }
    cout << min(cur + m, possible) << endl;
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