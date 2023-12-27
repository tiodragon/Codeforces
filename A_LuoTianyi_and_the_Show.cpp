#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int seated = 0;
    int leftSeats = m;
    unordered_set<int> takenSeats;

    for (int i = 0; i < n; i++) {
        int xi;
        cin >> xi;

        if (takenSeats.find(xi) == takenSeats.end()) {
            seated++;
            takenSeats.insert(xi);
            leftSeats--;
        } else {
            if (leftSeats > 0 && takenSeats.find(xi - 1) == takenSeats.end()) {
                seated++;
                takenSeats.insert(xi - 1);
                leftSeats--;
            } else if (leftSeats == 0 && takenSeats.find(xi + 1) == takenSeats.end()) {
                seated++;
                takenSeats.insert(xi + 1);
                leftSeats--;
            }
        }
    }

    cout << seated << endl;

    return 0;
}
