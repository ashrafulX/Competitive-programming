#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
// cin>>t;
while(t--)
{
    int n, k;
    cin >> k >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](ll val)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (val == 0)
                return true;
            if (v[i] >= val)
            {
                cnt += val;
            }
            else
            {
                cnt += v[i];
            }
        }
        return cnt >= val * k;
    };
    ll l = 0, r = 4e10, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
}

   return 0;
}
