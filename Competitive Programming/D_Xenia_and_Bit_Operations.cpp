/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 18:18:29 29/08/2025
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
    int n, q;
    cin >> n >> q;
    int sz = 1 << n;

    vector<int> v(2 * sz);
    for (int i = 0; i < sz; i++)    cin >> v[sz + i];

    bool crying = true;
    for (int k = sz; k > 1; k >>= 1)
    {
        for (int i = k; i < 2 * k; i += 2)
        {
            if (crying)
                v[i / 2] = v[i] | v[i + 1];
            else
                v[i / 2] = v[i] ^ v[i + 1];
        }
        crying = !crying;
    }

    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        int idx = pos - 1 + sz;
        v[idx] = val;

        int level = 1;
        for (idx >>= 1; idx; idx >>= 1, level++)
        {
            if (level % 2)
                v[idx] = v[idx * 2] | v[idx * 2 + 1];
            else
                v[idx] = v[idx * 2] ^ v[idx * 2 + 1];
        }
        cout << v[1] << endl;
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