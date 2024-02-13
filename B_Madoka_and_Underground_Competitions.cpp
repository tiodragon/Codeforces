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
    int n, m, a, b; 
    cin >> n >> m >> a >> b;
    vector<vector<char>> grid(n, vector<char>(n, '.')); 
    // wihtout 
    grid[m-1][m-1] = 'X';
    for(int i=m-1; i<n; i+=m) { 
        grid[i][m-1] = 'X';
    }

    // with the point
    // grid[a-1][b-1] = 'X';
    // for(int i=b-1; i>=0; i-=m) { 
    //     grid[a-1][i] = 'X';
    //     for(int j=a-1; j>=0; j-=m) 
    //         grid[j][i] = 'X';
    //     for(int j=a-1; j<n; j+=m) { 
    //         grid[j][i] = 'X';
    // }
    // }
    // for(int i=b-1; i<n; i+=m) { 
    //     grid[a-1][i] = 'X';
    //     for(int j=a-1; j>=0; j-=m) 
    //         grid[j][i] = 'X';
    //     for(int j=a-1; j<n; j+=m)
    //         grid[j][i] = 'X';
    // }
    
    // for(int i=0; i<n; i++) { 
    //     for(int j=0; j<n; j++) { 
    //         if(grid[i][j] == 'X' && i+1<n && j-1>=0) { 
    //             grid[i+1][j-1] = 'X';
    //         }

    //     }
    // }

    for(auto it:grid) { 
        for(auto i:it) { 
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl; 
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