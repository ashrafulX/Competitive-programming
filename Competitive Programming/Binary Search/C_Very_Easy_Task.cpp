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
    ll n, a, b;
    cin >> n >> a >> b;
    auto ok = [&](ll val)
    {
        ll time = val - min(a, b);
        if (time < 0)
            return false;
        return ((time / a) + (time / b)) >= n - 1;
    };
    ll l = 0, r = 1e18, ans, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
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