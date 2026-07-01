#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int odd = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (x & 1) odd++;
        }

        if (odd % 2 == 0) cout << "Alice\n";
        else cout << "Bob\n";
    }
    return 0;
}
