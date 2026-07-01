//CSES PROBLEM
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 1, r = 1e18, mid, ans;
    auto ok = [&](ll sec)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (sec / v[i]);
            if (cnt >= m)
                return true;
        }
        return false;
    };
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
