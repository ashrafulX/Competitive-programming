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
    int m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }

    vector<int> can(n);
    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = a[i];
            int t, z, y, total, can, remain, now;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            total = ((t * z) + y);
            can = (mid / total);
            remain = mid % total;
            now = ((can * z) + min(z, (remain / t)));
            now = min(has, now);
            has -= now;
            may[i] = now;
        }

        if (!has)
        {
            for (int i = 0; i < n; i++)
            {
                can[i] = may[i];
            }
        }

        return (!has);
    };

    int l = 0, r = 1e8, mid, ans;
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
    for (auto val : can)
    {
        cout << val << " ";
    }
}

   return 0;
}
