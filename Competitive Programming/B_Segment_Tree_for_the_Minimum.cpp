/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:01:51 27/08/2025
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
bool flag;
void rhafsolve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    while (m--)
    {
        int val;
        cin >> val;
        if (val == 1)
        {
            int i;
            ll v;
            cin >> i >> v;
            a[i] = v;
        }
        else
        {
            int l, r;
            cin >> l >> r;
            ll ans = LLONG_MAX;
            for (int j = l; j < r; j++)
            {
                ans = min(ans, a[j]);
            }
            cout << ans << endl;
        }
    }
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}