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

int n, m, ans[MAX_N];
vector<int> adj[MAX_N]; 
bool visited[MAX_N];

void dfs(int node) { 
    visited[node] = 1; 
    for(auto it:adj[node]) { 
        if(!visited[it]) dfs(it);
    }
}

int count() { 
    int cnt = 0; 
    for(int i=1; i<=n; i++) { 
        if(!visited[i]) { 
            dfs(i);
            ans[cnt] = i; 
            cnt++;
        }
    }
    return cnt;
}

void solve() {
    cin >> n >> m; 
    for(int i=0; i<m; i++) { 
        int x, y; 
        cin >> x >> y;
        adj[x].push_back(y); 
        adj[y].push_back(x);
    }
    int cnt = count(); 
    cout << cnt - 1 << endl; 
    for(int i=1; i<cnt; i++) { 
        cout << ans[i-1] << " " << ans[i] << endl; 
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