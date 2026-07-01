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
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<long long> b(n + 1);
        for (int i = 1; i <= n; i++) {
            b[i] = (i % 2 == 1) ? -a[i] : a[i];
        }

        vector<long long> S(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            S[i] = S[i - 1] + b[i];
        }

        long long ans = 0;
        long long currentAccum = 0;
        long long prevSVal = 0;
        long long nextReq = LLONG_MIN / 2;

        for (int r = 1; r <= n; r++) {
            long long base = S[r] + currentAccum;
            long long required = (r >= 2) ? nextReq : LLONG_MIN / 2;
            long long add = max(0LL, required - base);
            ans += add;
            currentAccum += add;

            if (add > 0 && r % 2 == 0) {
                prevSVal += add;
            }

            long long thisS = base + add;
            nextReq = max(required, prevSVal);
            prevSVal = thisS;
        }

        cout << ans << "\n";
    }

    return 0;
}
