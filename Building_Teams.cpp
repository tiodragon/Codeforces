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

int n, m; 
bool bad, visited[MAX_N], team[MAX_N]; 
vector<vector<int>> a(MAX_N); 

void dfs(int node, bool nodes = 0) { 
    visited[node] = 1; 
    team[node] = nodes; 
    for(auto it:a[node]) { 
        if(!visited[it]) {
            dfs(it, !nodes);
        } else { 
            if(team[it] == nodes) bad = 1;
        }
    }
}

void solve() {
    cin >> n >> m; 
    for(int i=0; i<m; i++) { 
        int x, y; 
        cin >> x >> y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
    for(int i=1; i<=n && !bad; i++) { 
        if(!visited[i]) dfs(i);
    }
    if(bad) cout << "IMPOSSIBLE" << endl; 
    else { 
        for(int i=1; i<=n; i++) { 
            cout << team[i] + 1 << " ";
        }
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