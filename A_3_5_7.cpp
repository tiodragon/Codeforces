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

bool check(int n, int m, int a) { 
    if(n%2==m%2 && m%2==a%2) return true; 
    return false;
}

bool check_2(vector<int> a) { 
    int n = a.size(); 
    for(int i=1; i<n; i++) { 
        if(a[i-1] != a[i]) return false;
    }
    return true;
}

void solve() {
    int n, m, a; 
    cin >> n >> m >> a; 
    if(check(n,m,a)) { 
        if(abs(n-m)%2!=0 || abs(m-a) % 2 != 0 || abs(a-n) % 2 != 0) { 
            cout << -1 << endl; 
            return;
        } else { 
            vector<int> adj; 
            adj.push_back(n); 
            adj.push_back(m); 
            adj.push_back(a); 
            int cnt = 0; 
            while(!check_2(adj)) { 
                sort(all(adj)); 
                int x = abs(adj[2] - adj[0])/4;
                adj[0] += (7*x); 
                adj[1] += (5*x);
                adj[2] += (3*x);
                cnt+=x;
            }
            cout << cnt << endl;
        }
    } else { 
        cout << -1 << endl;
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