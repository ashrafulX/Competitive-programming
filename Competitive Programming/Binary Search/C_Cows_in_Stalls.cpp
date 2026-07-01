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
    ll n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](int val)
    {
        int cnt = 1, last = v[0];
        for (int i = 1; i < n; i++)
        {
            if (v[i] - last >= val)
            {
                cnt++;
                last = v[i];
            }
        }
        return cnt >= m;
    };
    ll l = 0, r = 1e9, ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            l = mid + 1;
            ans = mid;
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
