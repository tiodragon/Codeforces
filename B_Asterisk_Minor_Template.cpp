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
    int n = s.length(), m = ss.length(); 
    if(s[0] == ss[0]) { 
        cout << "YES" << endl; 
        cout << s[0] << '*' << endl; 
        return; 
    } else if(s[n-1] == ss[m-1]) { 
        cout << "YES" << endl; 
        cout << '*' << ss[m-1] << endl;
        return; 
    }
    set<string> st; 
    string nw; 
    for(int i=0; i<n-1; i++) { 
        nw = s.substr(i, 2);
        st.insert(nw); 
    }
    // for(auto it:st) cout << it << " "; 
    // cout << endl;

    for(int i=0; i<m-1; i++) { 
        if(st.find(ss.substr(i, 2)) != st.end()) {
            cout << "YES" << endl;  
            cout << '*' << ss.substr(i, 2) << '*' << endl; 
            return;
        }
    }   
    cout << "NO" << endl;
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