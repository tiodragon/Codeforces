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
    string s, ss; 
    cin >> s >> ss;
    set<char> st;
    st.insert(s[0]); 
    st.insert(s[1]); 
    st.insert(ss[0]); 
    st.insert(ss[1]); 
    if(st.size() == 1) {
        cout << 0 << endl; 
    } else if(st.size() == 2) { 
        cout << 1 << endl; 
    } else if(st.size() == 3) { 
        cout << 2 << endl;
    } else { 
        cout << 3 << endl;
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