#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        ll qn;
        cin >> qn;

        bool ok = false;
        // Find if qn is a triangular number
        ll sum = 0, k = 1;
        while (sum < qn) {
            sum = k * (k + 1) / 2;
            if (sum == qn) {
                ok = true;
                break;
            }
            k++;
        }

        if (i > 0) cout << " ";
        cout << (ok ? 1 : 0);
    }
    cout << "\n";
    return 0;
}
