#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<bool>> stronger(N + 1, vector<bool>(N + 1, false));

    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        stronger[A][B] = true;
    }

    // Floyd-Warshall algorithm to calculate transitive closure
    for (int k = 1; k <= N; ++k) {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                stronger[i][j] = stronger[i][j] || (stronger[i][k] && stronger[k][j]);
            }
        }
    }

    int strongest = -1;
    for (int i = 1; i <= N; ++i) {
        bool isStrongest = true;
        for (int j = 1; j <= N; ++j) {
            if (i != j && !stronger[i][j]) {
                isStrongest = false;
                break;
            }
        }
        if (isStrongest) {
            strongest = i;
            break;
        }
    }

    cout << strongest << endl;

    return 0;
}
