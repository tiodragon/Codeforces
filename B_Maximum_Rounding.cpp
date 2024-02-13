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
    for(int i=n-1; i>=0; i--) { 
        if(s[i] <= '4') { 

        } else { 
            if(i != 0) { 
                s[i-1]++;
                for(int j=i; j<n; j++) s[j] = '0';
            } else {

            }
        }
    }
    for(auto it:s) {
        cout << it - '0';
    }
    cout << endl;
    // for(int i=n-2; i>=0; i--) { 
    //     if(s[i+1] >= '5') { 
    //         s[i]
    //     }
    // }
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