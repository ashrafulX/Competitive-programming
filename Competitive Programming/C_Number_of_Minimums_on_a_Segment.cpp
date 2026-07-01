/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:27:14 29/08/2025
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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)    cin >> a[i];

    while (m--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int i, v;
            cin >> i >> v;
            i++;
            a[i] = v;
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            int mn = INT_MAX, cnt = 0;
            for (int i = l; i <= r; i++)
            {
                if (a[i] < mn)
                {
                    mn = a[i];
                    cnt = 1;
                }
                else if (a[i] == mn)
                {
                    cnt++;
                }
            }
            cout << mn << " " << cnt << endl;
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