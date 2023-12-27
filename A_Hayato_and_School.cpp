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
    vector<pair<int,int>> odd; 
    vector<pair<int,int>> even; 
    for(int i=0; i<n; i++) { 
        cin >> a[i]; 
        if(a[i] % 2 == 0) { 
            even.push_back(make_pair(a[i], i+1));
        } else { 
            odd.push_back(make_pair(a[i], i+1));
        }
    }
    if(odd.size() >= 3 || (even.size() >= 2 && odd.size() >= 1)) { 
        cout << "YES" << endl;
        if(odd.size() >= 3) { 
            for(int i=0; i<3; i++) { 
                cout << odd[i].second << " ";
            }
            cout << endl;
        } else { 
            for(int i=0; i<2; i++) { 
                cout << even[i].second << " ";
            }
            cout << odd[0].second << endl;
        }

    } else { 
        cout << "NO" << endl;
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