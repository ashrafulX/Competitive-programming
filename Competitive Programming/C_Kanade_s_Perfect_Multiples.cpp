/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:07:15 05/12/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define nl '\n'

void rhafsolve()
{
    ll n; ll k;
    cin >> n >> k;

    vector<ll> a(n);
    ll mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)  mx = a[i];
    }

    vector<int> cnt(mx + 1);

    for (int i = 0; i < n; i++)     cnt[a[i]]++;

    vector<bool> good(mx + 1, false);

    for (ll x = 1; x <= mx; x++)
    {
        bool ok = true;

        for (ll m = x; m <= mx; m += x)
        {
            if (cnt[m] == 0)
            {
                ok = false;
                break;
            }
        }

        if (ok) good[x] = true;
    }

    vector<ll> B;
    bool bad = false;

    for (int i = 0; i < n; i++)
    {
        ll x = a[i];
        ll best = -1;

        for (ll d = 1; d * d <= x; d++)
        {
            if (x % d == 0)
            {

                if (good[d])
                {
                    if (best == -1)
                        best = d;
                    else if (d < best)
                        best = d;
                }

                ll d2 = x / d;
                if (good[d2])
                {
                    if (best == -1)
                        best = d2;
                    else if (d2 < best)
                        best = d2;
                }
            }
        }

        if (best == -1)
        {
            bad = true;
            break;
        }

        B.pb(best);
    }

    if (bad)
    {
        cout << -1 << nl;
        return;
    }

    sort(all(B));
    B.erase(unique(all(B)), B.end());

    cout << B.size() << nl;
    for (auto v : B)    cout << v << " ";
    cout << nl;
}

int main() {
    MESSI;
    int t;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }
    return 0;
}
