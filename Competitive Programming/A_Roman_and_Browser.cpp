/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 23:21:56 26/08/2025
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
    int n, k;
    cin >> n >> k;
    vector<int> tabs(n);
    for (int i = 0; i < n; i++)
        cin >> tabs[i];

    int mx = 0;

    for (int b = 0; b < n; b++)
    {
        vector<int> rem = tabs;

        for (int i = b; i < n; i += k)
            rem[i] = 0;
        for (int i = b - k; i >= 0; i -= k)
            rem[i] = 0;

        int e = 0, s = 0;
        for (int val : rem)
        {
            if (val == 1)
                e++;
            if (val == -1)
                s++;
        }

        mx = max(mx, abs(e - s));
    }

    cout << mx << "\n";
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