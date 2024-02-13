#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int size = n * m;
    vector<int> b(size);
    for (int i = 0; i < size; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end()); // Sort the array in non-decreasing order

    vector<int> max_row(n, INT32_MIN);
    vector<int> max_col(m, INT32_MIN);

    long long total_sum = 0;
    int max_diff = 0;

    for (int i = 0; i < size; i++) {
        int x = i / m;
        int y = i % m;

        max_row[x] = max(max_row[x], b[i]);
        max_col[y] = max(max_col[y], b[i]);

        int diff_row = max_row[x] - b[i];
        int diff_col = max_col[y] - b[i];

        max_diff = max(max_diff, max(diff_row, diff_col));
        total_sum += diff_row + diff_col;
    }

    cout << total_sum + max_diff << endl;

    return 0;
}
