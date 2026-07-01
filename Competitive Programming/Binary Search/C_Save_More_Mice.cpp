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
    vector<ll> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = 0; i < mid; i++)
        {
            if (v[k - 1 - i] <= cnt)
                return false;
            cnt += n - v[k - 1 - i];
        }
        return true;
    };
    ll l = 0, r = k, ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok((mid)))
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
