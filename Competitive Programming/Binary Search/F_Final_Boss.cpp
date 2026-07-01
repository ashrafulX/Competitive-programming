#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        ll k, n;
        cin >> k >> n;
        vector<ll> a(n), c(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        ll l = 1, r = 1e12, ans = r;

        auto ok = [&](ll mid)
        {
            ll sm = 0;
            for (ll i = 0; i < n; i++)
            {
                ll tot = (mid - 1) / c[i] + 1;
                sm += tot * a[i];
                if (sm >= k)
                    return true;
            }
            return sm >= k;
        };

        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
