/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:30:05 13/09/2025
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

void rhafsolve()
{
    int n;
    cin >> n;
    ll total = 0;
    vector<ll> odd;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        total += a;
        if (a % 2 != 0) odd.pb(a);
    }

    if (odd.empty())
    {
        cout << 0 << endl;
        return;
    }

    sort(all(odd));
    ll sum = 0;
    int half = odd.size() / 2;

    for (int i = 0; i < half; i++) sum += odd[i];

    cout << total - sum << endl;
}

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
