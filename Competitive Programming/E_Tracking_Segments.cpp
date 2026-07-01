/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 15:13:02 30/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int N = (int)1e6 + 5;
vector<ll> ST;

void update(int SI, int b, int e, int l, int r, int val)
{
    if (b > r || e < l)
    {
        return;
    }
    if (b >= l && e <= r)
    {
        ST[SI] = val;
        return;
    }
    int left = 2 * SI;
    int right = left + 1;
    int mid = (b + e) / 2;
    update(left, b, mid, l, r, val);
    update(right, mid + 1, e, l, r, val);
    ST[SI] = ST[left] + ST[right];
}

ll query(int SI, int b, int e, int l, int r)
{
    if (b > r || e < l)
    {
        return 0;
    }
    if (b >= l && e <= r)
    {
        return ST[SI];
    }
    int left = 2 * SI;
    int right = left + 1;
    int mid = (b + e) / 2;
    ll L = query(left, b, mid, l, r);
    ll R = query(right, mid + 1, e, l, r);
    return L + R;
}

void rhafsolve()
{
    int n, m;
    cin >> n >> m;

    vector<pair<pair<int, int>, int>> a(m);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        int len = r - l + 1;
        int req;
        if (len % 2 == 0)
        {
            req = (len / 2) + 1;
        }
        else
        {
            req = (len + 1) / 2;
        }
        a[i] = {{l, r}, req};
    }

    int q;
    cin >> q;
    vector<int> b(q);
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }

    auto ok = [&](int k) -> bool
    {
        ST.assign(4 * n + 2, 0);
        for (int i = 0; i <= k; i++)
        {
            update(1, 1, n, b[i], b[i], 1);
        }
        for (int i = 0; i < m; i++)
        {
            int l = a[i].first.first;
            int r = a[i].first.second;
            int req = a[i].second;
            if (query(1, 1, n, l, r) >= req)
            {
                return true;
            }
        }
        return false;
    };

    int ans = -1;
    int lw = 0, hi = q - 1;
    while (lw <= hi)
    {
        int mid = lw + (hi - lw) / 2;
        if (ok(mid))
        {
            ans = mid + 1;
            hi = mid - 1;
        }
        else
        {
            lw = mid + 1;
        }
    }

    cout << ans << endl;;
}

int main()
{
    MESSI;

    int t;
    cin >> t;
    while (t--)
    {
        rhafsolve();
    }

    return 0;
}
