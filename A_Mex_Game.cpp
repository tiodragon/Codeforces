#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Function to find the mex (minimum excluded) element of a set.
int mex(const set<int>& s) {
    int m = 0;
    for (int x : s) {
        if (x == m) {
            m++;
        } else {
            break;
        }
    }
    return m;
}

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    set<int> X; // Set to keep track of the elements chosen by Alice and Bob

    for (int k = 1; k <= N; k++) {
        if (k % 2 == 1) {
            // Alice's turn
            X.insert(mex(X));
        } else {
            // Bob's turn
            X.insert(mex(X));
            if (S[mex(X)] == 'B') {
                X.insert(mex(X));
            }
        }

        // Find the winner based on the current character in S
        char winner = (S[mex(X)] == 'A' ? "Alice" : "Bob");
        cout << winner << endl;
    }

    return 0;
}
