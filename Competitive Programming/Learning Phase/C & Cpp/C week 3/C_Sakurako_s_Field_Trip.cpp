#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int disturbance = 0;

        // Count initial disturbances
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                disturbance++;
            }
        }

        // If no disturbances or only one, no further action needed
        if (disturbance <= 1) {
            cout << disturbance << "\n";
            continue;
        }

        // Try to minimize disturbance with a single swap
        bool can_reduce = false;
        for (int i = 0; i < n - 2; i++) {
            if (a[i] == a[i + 1] && a[i + 1] == a[i + 2]) {
                can_reduce = true;
                break;
            }
        }

        // If there's a way to completely remove two disturbances with a single swap
        if (can_reduce) {
            cout << disturbance - 2 << "\n";
        } else {
            cout << disturbance - 1 << "\n";
        }
    }

    return 0;
}
