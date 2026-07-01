/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:02:17 07/09/2025
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
    ll a, b;
    cin >> a >> b;

    ll ans = -1;

    ll sum1 = a + b;
    if (sum1 % 2 == 0)
    {
        ans = sum1;
    }

    if (b > 1)
    {
        ll sum2 = a * b + 1;
        if (sum2 % 2 == 0)
        {
            ans = max(ans, sum2);
        }
    }

    if (b % 2 == 0)
    {
        ll sum3 = a * 2 + b / 2;
        if (sum3 % 2 == 0)
        {
            ans = max(ans, sum3);
        }
    }

    if (b % 2 == 0 && b > 2)
    {
        ll k = b / 2;
        ll sum4 = a * k + 2;
        if (sum4 % 2 == 0)
        {
            ans = max(ans, sum4);
        }
    }

    cout << ans << endl;
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