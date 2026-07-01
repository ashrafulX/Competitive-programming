#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](ll val)
    {
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] < val)
            {
                cnt += (val - v[i]);
                if (cnt > k)
                {
                    break;
                }
            }
        }
        return cnt <= k;
    };
    ll l = 0, r = 1e10, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}

   return 0;
}
