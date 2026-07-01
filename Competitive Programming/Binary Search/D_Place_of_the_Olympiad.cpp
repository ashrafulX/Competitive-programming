#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) 
    {
        ll n, m, k;
        cin >> n >> m >> k;

        ll l = 1, r = m, ans, mid;

        auto check = [&](ll x)
        {
            if (x == 0)
                return k == 0;
            ll val = m - (m / (x + 1));
            if (val == 0)
                return k == 0;
            ll cnt = val * n;
            return cnt >= k;
        };

        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (mid == 0)
            {
                l = mid + 1;
                continue;
            }
            if (check(mid))
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