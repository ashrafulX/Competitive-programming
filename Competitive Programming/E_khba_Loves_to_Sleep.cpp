/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:29:21 28/10/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve() {
    ll n,k,x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));

    ll lo = 0, hi = x;
    while (lo < hi)
    {
        ll mid = (lo + hi + 1) / 2;

        vector<ll> gaps;
        if (v[0] >= mid)
            gaps.push_back(0);
        if (v[n - 1] + mid <= x)
            gaps.push_back(x);
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] - v[i] >= 2 * mid)
            {
                gaps.push_back(v[i] + mid);
            }
        }

        if (gaps.size() >= k)
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }

    vector<ll> result;
    set<ll> used;

    if (v[0] >= lo)
    {
        result.push_back(0);
        used.insert(0);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] -v[i] >= 2 * lo && result.size() < k)
        {
            result.push_back(v[i] + lo);
            used.insert(v[i] + lo);
        }
    }

    if (result.size() < k && v[n - 1] + lo <= x)
    {
        result.push_back(x);
        used.insert(x);
    }

    ll p = 0;
    while (result.size() < k)
    {
        if (used.find(p) == used.end())
        {
            result.push_back(p);
        }
        p++;
    }

    for (int i = 0; i < k; i++)
    {
        cout << result[i];
        if (i < k - 1)
            cout << " ";
    }
    cout << endl;
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}