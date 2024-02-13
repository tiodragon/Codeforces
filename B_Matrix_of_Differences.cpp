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
    vector<vector<int>> grid(n, vector<int>(n)); 
    int a = 1, b = n*n; 
    int cnt = 1;
    if(n%2==0) { 
        for(int i=0; i<n;i+=2) { 
            for(int j=0; j<n; j++) { 
                if(cnt % 2 == 1) { 
                    grid[i][j] = a;
                    a++;
                    grid[i+1][j] = b;
                    b--;
                } else { 
                    grid[i][j] = b;
                    b--;
                    grid[i+1][j] = a;
                    a++;
                }
                cnt++;
            }
        }
    } else {
        for(int i=0; i<n-1;i+=2) {
             
            for(int j=0; j<n; j++) { 
                if(cnt % 2 == 1) { 
                    grid[i][j] = a;
                    a++;
                    grid[i+1][j] = b;
                    b--;
                } else { 
                    grid[i][j] = b;
                    b--;
                    grid[i+1][j] = a;
                    a++;
                }
                cnt++;
            }
        }
        for(int i=0; i<n; i++) { 
            if(cnt%2==1) { 
                grid[n-1][i] = a;
                a++;
            } else {
                grid[n-1][i] = b;
                b--;
            }
            cnt++;
        }
    }
    for(auto it:grid) { 
        for(auto i:it) cout << i << " "; 
        cout << endl;
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