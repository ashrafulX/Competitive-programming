/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:36:15 28/08/2025
**/
#pragma GCC optimize (3,"Ofast","inline")
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
#define no cout << "NO\n"b
void rhafsolve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<vector<int>> pos(n + 1);
    for (int i = 0; i < n; i++)
        pos[v[i]].push_back(i);

    vector<int> cnt(n + 1, 0);
    vector<int> nxt(n + 1, 0);
    vector<int> a(n, 0);

    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        cnt[x]++;

        if (cnt[x] >= x)
        {
            int start = pos[x][nxt[x]];
            nxt[x]++;

            int sum = 0;
            if (start > 0)
                sum = a[start - 1];

            a[i] = sum + x;
        }

        if (i > 0)
            a[i] = max(a[i], a[i - 1]);
    }

    cout << a[n - 1] << endl;
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